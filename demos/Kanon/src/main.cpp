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
#include <bn_sound_items.h>
#include "common_info.h"
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
//Fonts
//#include <bn_sprite_items_font01.h>
#include "common_fixed_8x16_sprite_font.h"
//Sprites
#include <bn_regular_bg_items_sp01.h>
//Backgrounds
#include <bn_regular_bg_items_siro.h>
#include <bn_regular_bg_items_bg01.h>
//CGs
#include <bn_regular_bg_items_cgny01.h>
#include <bn_regular_bg_items_cgny02.h>

//You can hide this Namescape if you just want to get to writing scenes
namespace
{

    void waiter(int frames)
    {
      for(int i = 0; i < frames; ++i) {
          bn::core::update();
      }
    }
    //constexpr bn::fixed lb = 16;
    //constexpr bn::fixed text_x_limit = 208;

    void presets(int bgpos, int dialogue_layout, bn::regular_bg_ptr& kuro, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window)
    {
      if(bgpos == 1)
      {
          internal_window.set_boundaries(-80, -120, 80, 120); //full screen
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
}


//start:
int main()
{
    //game script begins at "while"
    //These are just default settings being established
    bn::core::init();
    //fade color
    bn::bg_palettes::set_fade(bn::colors::white, 1);
    bn::sprite_palettes::set_fade(bn::colors::white, 1);

    int bgpos = 1;
    int dialogue_layout = 2;
    int frames = 60;
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
    bn::regular_bg_ptr bgimg = bn::regular_bg_items::siro.create_bg(0, 0); //horizontal
    bgimg.set_blending_bottom_enabled(true);
    bgimg.put_below();
    //sprite positioning
    bn::regular_bg_ptr spimg = bn::regular_bg_items::sp01.create_bg(0, 0);
    //Textbox asset
    bn::regular_bg_ptr kuro = bn::regular_bg_items::kuro.create_bg(0, 0);
    bn::regular_bg_ptr textbox = bn::regular_bg_items::textbox.create_bg(0, -5);
    kuro.set_blending_top_enabled(true);
    textbox.set_blending_top_enabled(true);

    //textbox window
    external_window.set_boundaries(-70, -110, 70, 110); // full screen text by default
    external_window.set_visible(false);
    external_window.set_show_blending(true);
    //bg window
    internal_window.set_boundaries(-70, -120, 24, 120); //horizontal topper, bgpos = 1
    //internal_window.set_boundaries(-40, -120, 34, 120); //horizontal mid, bgpos = 2
    //internal_window.set_boundaries(-120, 0, 120, 92); //vertical, bgpos = 3

    //constrain everything to windows
    outside_window.set_show_bg(bgimg, true);
    outside_window.set_show_bg(kuro, true);
    outside_window.set_show_bg(textbox, true);
    outside_window.set_show_sprites(true);
    kuro.set_visible_in_window(true, internal_window);
    textbox.set_visible_in_window(true, internal_window);
    bgimg.set_visible_in_window(false, external_window);

    //start with sprite hidden
    spimg.set_visible(false);
    //init text
    bn::sprite_text_generator text_generator(common::fixed_8x16_sprite_font);

    //Play example music
    //bn::music_items::last_regrets.play(0.6, false);
    bn::music_items::yume.play(0.1, true);

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
        frames = 120;
        waiter(frames);
        spimg.set_visible(false);
        bgpos = 1;
        dialogue_layout = 1;
        presets(bgpos, dialogue_layout, kuro, textbox, internal_window, external_window);
        //because we're fading from white
        external_window.set_visible(false);
        textbox.set_visible(false);
        //
        bgimg.set_item(bn::regular_bg_items::bg01);
        bgimg.set_position(0, 0);
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "It's snowing.|",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          //because we're fading from white - could probably make this a preset
          fade::in_slow_white();
          external_window.set_show_blending(false);
          textbox.set_blending_top_enabled(false);
          external_window.set_visible(true);
          textbox.set_visible(true);
          //
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Pure white snow swirls down",
              "from the overcast sky.|",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "A damp wooden bench.",
              "Cold, Clear air.|",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Yuuichi \"`\"|",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "I rouse my body, slumped on",
              "the bench, and correct my",
              "posture yet again.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "The crowd of people leaving",
              "the snow-covered station",
              "has slowed to a trickle.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Sighing white vapor, I peer",
              "at the station plaza clock.",
              "It's three o'clock.|",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "It's still day, but I can",
              "only guess where the sun",
              "is behind these clouds.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Yuuichi \"`late`\"|",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          bn::sound_items::z0000.play();
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "I slump back into my seat",
              "and cast one word into the",
              "sky.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "The white of my cold breath",
              "blinds briefly, before the",
              "wind whisks it away.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "This winter wind, piercing",
              "my skin`|",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "An ever-present snow`",
              "Falling without end`|",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "The curtain of white flakes",
              "which hide the sky, seems",
              "to thicken out of spite.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Once more, I disturb the",
              "air with a sigh.|",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "This time, however, the",
              "cloud this evokes isn't all",
              "that blocks my sight.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Girl \"``\"|",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          fader::cgny01_in(spimg, textbox);
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          spimg.set_item(bn::regular_bg_items::sp01);
          bgimg.set_item(bn::regular_bg_items::cgny01);
          spimg.set_visible(false);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "A girl is bending over to",
              "peer at my face; separating",
              "me from the snowy clouds.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Girl \"You've got snow on",
              "your head.\"|",
              "",
              "",
              "",
              "",
              "",
              };
          bn::sound_items::z0001.play();
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Through tight lips, I",
              "breathe sharply, expelling",
              "another cloud of vapor.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Yuuichi \"That might be",
              "because I've been sitting",
              "here for two hours`\"|",
              "",
              "",
              "",
              "",
              };
          bn::sound_items::z0002.play();
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Under the circumstances,",
              "it's a miracle I'm not",
              "buried up to my neck.|",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Girl \"`oh?\"|",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          bn::sound_items::z0003.play();
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "The girl tilts her head",
              "curiously at my words.|",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Girl \"What time is it?\"|",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          bn::sound_items::z0004.play();
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Yuuichi \"Three o'clock.\"|",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          bn::sound_items::z0005.play();
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Girl \"Really? Already?\"|",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          bn::sound_items::z0006.play();
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Despite her words, she",
              "doesn't look surprised.|",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Her voice is slow, feminine",
              "and sleepy.|",
              "",
              "",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "Girl \"I thought it was",
              "still about two.\"|",
              "",
              "",
              "",
              "",
              "",
              };
          bn::sound_items::z0007.play();
          texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
          bn::core::update();
        }

    }
}
