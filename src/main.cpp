//Core
#include "bn_core.h"
#include "bn_math.h"
#include "bn_colors.h"
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
#include "bn_sprite_palettes.h"
#include "bn_music_actions.h"
#include "bn_sound_actions.h"
#include "bn_music_item.h"
#include "bn_music_items.h"
#include "bn_sound_item.h"
#include "common_info.h"

//These are just default settings being established
int bgpos = 1;
int dialogue_layout = 1;
int frames = 60;
//You can also place flags here to make them global!
//================================================
#include "transitions.h"
#include "texter.h"
#include "spriter.h"
#include "panner.h"
//#include "menu.cpp"

///////////////////////////////////////////
//////////////Note for editors:////////////
//Images are defined here.
//The script is down by "main()"
//Maybe ignore everything else for now.
///////////////////////////////////////////
//Generics
#include <bn_regular_bg_items_kuro.h>
#include <bn_regular_bg_items_textbox.h>
#include <bn_regular_bg_items_textbox2.h>

#include <bn_regular_bg_items_pause_01.h>
#include <bn_regular_bg_items_pause_02.h>
#include <bn_regular_bg_items_pause_03.h>
#include <bn_regular_bg_items_pause_04.h>
#include <bn_regular_bg_items_pause_05.h>
//Fonts
//#include <bn_sprite_items_font01.h>
#include "common_fixed_8x16_sprite_font.h"
//Sprites
#include <bn_regular_bg_items_sp01.h>
#include <bn_regular_bg_items_sp02.h>
//Backgrounds
#include <bn_regular_bg_items_bg01.h>
#include <bn_regular_bg_items_bg02.h>

//You can hide this Namescape if you just want to get to writing scenes
namespace
{

    void waiter()
    {
       if(! bn::keypad::r_held())
         {  
          for(int i = 0; i < frames; ++i) {
              bn::core::update();
          }
         }
       else
         {
              bn::core::update();
         }
    }
}


//start:
int main()
{
    //game script begins at "while"
    bn::core::init();
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
    //bn::regular_bg_ptr textbox = bn::regular_bg_items::kuro.create_bg(0, 0);
    bn::regular_bg_ptr textbox = bn::regular_bg_items::textbox.create_bg(0, 0);
    //text.set_blending_top_enabled(true); //--for kuro
    textbox.set_blending_top_enabled(false); //--for textbox

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
    //outside_window.set_show_bg(false);
    outside_window.set_show_bg(textbox, false);
    outside_window.set_show_sprites(false);
    textbox.set_visible_in_window(true, internal_window);
    bgimg.set_visible_in_window(false, external_window);

    //fade color
    bn::bg_palettes::set_fade(bn::colors::black, 1);
    bn::sprite_palettes::set_fade(bn::colors::black, 1);
    //start with sprite hidden
    spimg.set_visible(false);
    //init text
    bn::sprite_text_generator text_generator(common::fixed_8x16_sprite_font);

    //Play example music
    bn::music_items::dearcustomer.play(1);

    /////////////////////////////////
    ///////  Begin the game  ////////
    //  //                     //  //
    /////////////////////////////////
    //        Sepia Engine         //
    ///////     /////////     ///////
    /////////////////////////////////
    //scene loop
    while(true)
    {
        frames = 20;                                                                              //These two lines of code can be used to
        waiter();                                                                           //wait 20 frames. The game runs at 60fps!
        spimg.set_visible(false);
        //01; textbox
        bgpos = 1;                                                                                //Back panel settings
        dialogue_layout = 1;                                                                      //Set layout. 1 = textbox, 2 = fullscreen
        presets(textbox, internal_window, external_window);               //Code to trigger settings
        textbox.set_visible(false);
        bgimg.set_item(bn::regular_bg_items::bg01);                                               //Set background to bg01
        spimg.set_item(bn::regular_bg_items::sp01);                                               //Set sprite to sp01
        bgimg.set_position(-8, -90);                                                              //Set background position
        spimg.set_position(2, 40);                                                                //Set sprite position
        if(true)                                                                                  //Text input begins
        {
          bn::string_view dialogue_text_lines[] = {
              "Sepia-tan",
              "Select/B: Toggle BG/text.",
              "A: Go to next scene.|",
              "",
              "",
              "",
              "",
              };
          fade::in_slow();                                                                         //This is where fade in/out is triggered. Before the text scene.
          panner::left_to_right(bgimg);
          fader::sp01_in(spimg, textbox);
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        //01 End;
        fade::out_fast();
        //02; full screen text
        bgpos = 3;
        dialogue_layout = 2;
        presets(textbox, internal_window, external_window);
        bgimg.set_item(bn::regular_bg_items::bg02);
        spimg.set_item(bn::regular_bg_items::sp02);
        bgimg.set_position(0, 48);
        spimg.set_position(0, 40);
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "A: Go to next scene.",
              "B: Hide/Show text.",
              "SELECT: Hide/Show BG.|",
              "",
              "",
              "",
              "",
              };
          fade::in_fast();
          panner::top_to_bottom(bgimg);
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        //
        fade::out_med();
        //
        bgpos = 1;
        presets(textbox, internal_window, external_window);
        bgimg.set_item(bn::regular_bg_items::bg01);
        spimg.set_item(bn::regular_bg_items::sp01);
        bgimg.set_position(-8, -90);
        spimg.set_position(50, 40);
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Here is some text.",
              "Hold R to skip any and",
              "all pauses.|",
              "",
              "It's handy, huh?|",
              "",
              "",
              };
          fade::in_med();
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        //
        fade::out_slow();

    }
}
