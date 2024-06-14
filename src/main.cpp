//Core
#include "bn_core.h"
#include "bn_math.h"
#include "bn_music.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"
#include <bn_blending_transparency_attributes.h>
#include "bn_bgs_mosaic.h"
#include "bn_bg_palettes.h"
#include "bn_regular_bg_ptr.h"
#include "bn_affine_bg_ptr.h"
#include "bn_rect_window.h"
#include "bn_rect_window_actions.h"
#include "bn_rect_window_boundaries_hbe_ptr.h"
#include "bn_sprite_text_generator.h"
#include "bn_music_actions.h"
#include "bn_sound_actions.h"
#include "bn_music_item.h"
#include "bn_music_items.h"
#include "bn_sound_item.h"
#include "common_info.h"

///////////////////////////////////////////
//////////////Note for editors:////////////
//Images are defined here.
//The script is down by "main()"
//Maybe ignore everything else for now.
///////////////////////////////////////////
//Generics
#include <bn_regular_bg_items_kuro.h>
#include <bn_regular_bg_items_textbox.h>
//Fonts
//#include <bn_sprite_items_font01.h>
#include "common_variable_8x16_sprite_font.h"
//Sprites
#include <bn_regular_bg_items_sp01.h>
#include <bn_regular_bg_items_sp02.h>
//Backgrounds
#include <bn_regular_bg_items_bg01.h>
#include <bn_regular_bg_items_bg02.h>

namespace
{
    //constexpr bn::fixed lb = 16;
    //constexpr bn::fixed text_x_limit = 208;

    void presets(int bgpos, int dialogue_layout, bn::regular_bg_ptr& kuro, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window)
    {
      if(bgpos == 1)
      {
          internal_window.set_boundaries(-70, -120, 24, 120); //horizontal top
      }
      if(bgpos == 2)
      {
          internal_window.set_boundaries(-40, -120, 34, 120); //horizontal mid
      }
      if(bgpos == 3)
      {
          internal_window.set_boundaries(-120, 0, 120, 92); //vertical
      }

      if(dialogue_layout == 1)
      {
        kuro.set_visible(false);
        external_window.set_boundaries(25, -119, 80, 119);
        textbox.set_visible(true);
      }
      if(dialogue_layout == 2)
      {
        textbox.set_visible(false);
        external_window.set_boundaries(-70, -110, 70, 110);
        kuro.set_visible(true);
      }
      bn::core::update();
    }

    //scene configurations
    //full screen
    void full_text_scene(bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& kuro, bn::rect_window& internal_window, bn::rect_window& external_window)
    {
        while(! bn::keypad::a_pressed())
        {
            if(bn::keypad::b_pressed())
            {
                internal_window.set_visible(! internal_window.visible());
                bgimg.set_visible(! bgimg.visible());
            }
            if(bn::keypad::select_pressed())
            {
                external_window.set_visible(! external_window.visible());
                kuro.set_visible(! kuro.visible());
                internal_window.set_show_sprites(! internal_window.show_sprites());
                external_window.set_show_sprites(! external_window.show_sprites());

            }
            bn::core::update();
        }
        //text_sprites.clear();
    }
    //dialogue
    void dialogue_text_scene(bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window)
    {
        while(! bn::keypad::a_pressed())
        {
            if(bn::keypad::b_pressed())
            {
                internal_window.set_visible(! internal_window.visible());
                bgimg.set_visible(! bgimg.visible());
            }
            if(bn::keypad::select_pressed())
            {
                external_window.set_visible(! external_window.visible());
                textbox.set_visible(! textbox.visible());
                internal_window.set_show_sprites(! internal_window.show_sprites());
                external_window.set_show_sprites(! external_window.show_sprites());

            }
            bn::core::update();
        }
        //text_sprites.clear();
    }

}

int main()
{
    //game script begins at "while"
    bn::core::init();
    int bgpos = 1;
    int dialogue_layout = 1;
    bn::rect_window internal_window = bn::rect_window::internal();
    bn::rect_window external_window = bn::rect_window::external();
    bn::window outside_window = bn::window::outside();
    //window transparency
    bn::blending::set_transparency_bottom_weight(1);
    bn::blending::set_transparency_top_weight(0.5);
    bn::blending::set_transparency_alpha(0.5);
    internal_window.set_visible(true);
    internal_window.set_show_blending(true);

    //bg image positioning
    //bn::regular_bg_ptr bgimg = bn::regular_bg_items::bg01.create_bg(0, 0); //vertical
    bn::regular_bg_ptr bgimg = bn::regular_bg_items::bg01.create_bg(-8, -90); //horizontal
    bgimg.set_blending_bottom_enabled(true);
    bgimg.put_below();
    //sprite positioning
    bn::regular_bg_ptr spimg = bn::regular_bg_items::sp01.create_bg(0, 40);
    //Textbox asset
    bn::regular_bg_ptr kuro = bn::regular_bg_items::kuro.create_bg(0, 0);
    bn::regular_bg_ptr textbox = bn::regular_bg_items::textbox.create_bg(0, 0);
    kuro.set_blending_top_enabled(true);
    textbox.set_blending_top_enabled(false);

    //textbox window
    external_window.set_boundaries(-70, -110, 70, 110); // full screen text by default
    external_window.set_visible(true);
    external_window.set_show_blending(true);
    //bg window
    internal_window.set_boundaries(-70, -120, 24, 120); //horizontal topper, bgpos = 1
    //internal_window.set_boundaries(-40, -120, 34, 120); //horizontal mid, bgpos = 2
    //internal_window.set_boundaries(-120, 0, 120, 92); //vertical, bgpos = 3

    //constrain everything to windows
    outside_window.set_show_bg(bgimg, false);
    outside_window.set_show_bg(kuro, false);
    outside_window.set_show_bg(textbox, false);
    outside_window.set_show_sprites(false);
    kuro.set_visible_in_window(true, internal_window);
    textbox.set_visible_in_window(true, internal_window);
    bgimg.set_visible_in_window(false, external_window);

    //init text
    bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);

    //Play music
    bn::music_items::dearcustomer.play(1);

    //scene loop
    while(true)
    {
        //01; textbox
        bgpos = 1;                                                                                //Back panel settings
        dialogue_layout = 1;                                                                      //Set layout. 1 = full screen, 2 = textbox
        presets(bgpos, dialogue_layout, kuro, textbox, internal_window, external_window);         //Code to trigger settings
        bgimg.set_item(bn::regular_bg_items::bg01);                                               //Set background to bg01
        spimg.set_item(bn::regular_bg_items::sp01);                                               //Set sprite to sp01
        bgimg.set_position(-8, -90);                                                              //Set background position
        spimg.set_position(50, 40);                                                               //Set sprite position
        if(true)                                                                                  //Text input begins
        {
          bn::string_view info_text_lines[] = {
              "Sepia-tan",
              "Press B/SELECT to hide BG/text!",
              "A: go to next scene",
              "",
              "",
              "",
              "",
          };
          common::info info(info_text_lines, dialogue_layout, text_generator);
          dialogue_text_scene(bgimg, textbox, internal_window, external_window);                  //Textbox layout
          bn::core::update();
        }
        //01 End;
        //02; full screen text
        bgpos = 3;
        dialogue_layout = 2;
        presets(bgpos, dialogue_layout, kuro, textbox, internal_window, external_window);
        bgimg.set_item(bn::regular_bg_items::bg02);
        spimg.set_item(bn::regular_bg_items::sp02);
        bgimg.set_position(0, 0);
        spimg.set_position(0, 40);
        if(true)
        {
          bn::string_view info_text_lines[] = {
              "A: go to next scene",
              "SELECT: hide/show text",
              "B: hide/show BG",
              "",
              "",
              "",
              "",
          };
          common::info info(info_text_lines, dialogue_layout, text_generator);
          full_text_scene(bgimg, kuro, internal_window, external_window);                         //Full-screen text layout
          bn::core::update();
        }
        bgpos = 1;
        presets(bgpos, dialogue_layout, kuro, textbox, internal_window, external_window);
        bgimg.set_item(bn::regular_bg_items::bg01);
        spimg.set_item(bn::regular_bg_items::sp01);
        bgimg.set_position(-8, -90);
        spimg.set_position(50, 40);
        if(true)
        {
          bn::string_view info_text_lines[] = {
              "",
              "",
              "",
              "",
              "",
              "",
              "",
          };
          common::info info(info_text_lines, dialogue_layout, text_generator);
          full_text_scene(bgimg, kuro, internal_window, external_window);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view info_text_lines[] = {
              "Here is some text.",
              "",
              "",
              "",
              "",
              "",
              "",
          };
          common::info info(info_text_lines, dialogue_layout, text_generator);
          full_text_scene(bgimg, kuro, internal_window, external_window);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view info_text_lines[] = {
              "Here is some text.",
              "It can be progressed by",
              "pressing A.",
              "",
              "",
              "",
              "",
          };
          common::info info(info_text_lines, dialogue_layout, text_generator);
          full_text_scene(bgimg, kuro, internal_window, external_window);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view info_text_lines[] = {
              "Here is some text.",
              "It can be progressed by",
              "pressing A.",
              "",
              "It's tall, huh?",
              "",
              "",
          };
          common::info info(info_text_lines, dialogue_layout, text_generator);
          full_text_scene(bgimg, kuro, internal_window, external_window);
          bn::core::update();
        }
        //01 End;
        //

    }
}
