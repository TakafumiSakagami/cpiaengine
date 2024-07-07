//Core
#include "bn_core.h"
#include "bn_math.h"
#include "bn_colors.h"
#include "bn_music.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"
#include <bn_string.h>
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
#include <bn_random.h>
#include "common_info.h"

//These are just default settings being established
//System
int bgpos = 1;
int dialogue_layout = 1;
int frames = 60;
int menu_pos = 0;
int loading = 0;
int load_des = 0; //0 = Day 1 = Work 2 = Night
//Stats
int energy = 2;
int relationship = 0;
int money = 50;
int date = 1;
int garden = 0;
bn::random talkrng;
//Flags
int day19scene = 0;
int day32scene = 0;
int hugscene = 0;
int laptop = 0;
int lamp = 0;
int findseeds = 0;
int seedsget = 0;
int protagplant = 0;
int tvflag = 0;
int tvknowledge = 0;
int workflag = 0;

//================================================

#include "transitions.h"
#include "texter.h"
#include "spriter.h"
#include "panner.h"
#include "scenes.h"
#include "scenes2.h"
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
#include <bn_regular_bg_items_bg00.h>
#include <bn_regular_bg_items_bg00_lamp.h>
#include <bn_regular_bg_items_bg00_n.h>
#include <bn_regular_bg_items_bg00_n_lamp.h>
#include <bn_regular_bg_items_bg01.h>
#include <bn_regular_bg_items_bg01_a.h>
#include <bn_regular_bg_items_bg01_b.h>
#include <bn_regular_bg_items_bg01_c.h>
#include <bn_regular_bg_items_bg02.h>
#include <bn_regular_bg_items_bg03.h>
#include <bn_regular_bg_items_bg04.h>
#include <bn_regular_bg_items_bg05.h>
#include <bn_regular_bg_items_bg06.h>

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
    }
}


//start:
int main()
{
    bn::core::init();
    //game script begins at "while"

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
    bn::regular_bg_ptr bgimg = bn::regular_bg_items::bg00.create_bg(-8, -90); //horizontal
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
    //bn::music_items::dearcustomer.play(1);

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
        //=========================
        ////////////   DAYTIME
        //////////////////////
        ////////////
        //=========================
        daytime:
        frames = 20;                                                                      
        waiter();     
        load_des = 0;                                                                     
        if(bn::music::playing_item() != bn::music_items::eternum){bn::music_items::eternum.play(1, true);}
        spimg.set_visible(false);
        bgpos = 4;
        dialogue_layout = 1;
        presets(textbox, internal_window, external_window);
        //because we're fading
        external_window.set_visible(false);
        textbox.set_visible(false);
        //
        if (lamp == 1){bgimg.set_item(bn::regular_bg_items::bg00_lamp);}
        else{bgimg.set_item(bn::regular_bg_items::bg00);}
        spimg.set_item(bn::regular_bg_items::sp01);
        bgimg.set_position(-8, 0);
        spimg.set_position(0, 0);
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          fade::in_slow();
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
          menu::day(spimg, bgimg, textbox, internal_window, external_window, text_generator);
        }
        //Load Point
        if (loading == 1)
        {
            loading = 0;
            switch (load_des)
            {
                case 0:
                    fade::out_fast();
                    goto daytime;
                case 1:
                    fade::out_fast();
                    goto work;
                case 2:
                    fade::out_fast();
                    goto night;
                default:
                    break;
            }
        }
        //Choice 0: Talk
        if (menu_pos == 0)
        {
        bn::core::update();
        scene::talk1(spimg, bgimg, textbox, internal_window, external_window, text_generator, talkrng);
        }
        //Choice 1: Garden
        if (menu_pos == 1)
        {
        bn::core::update();
        scene::gardeninghub(spimg, bgimg, textbox, internal_window, external_window, text_generator);
        }
        
        //daytime end
        if (energy < 1){fade::out_med();}
        else{fade::out_fast(); goto daytime;}
        //=========================
        ////////////   WORK
        //////////////////////
        ////////////
        //=========================
        work:
        load_des = 1;
        energy = 2;
        
        //=========================
        ////////////   NIGHT
        //////////////////////
        ////////////
        //=========================
        night:
        frames = 20;                                                                      
        waiter();     
        load_des = 2;                                                                     
        if(bn::music::playing_item() != bn::music_items::eternum_night){bn::music_items::eternum_night.play(1, true);}
        spimg.set_visible(false);
        bgpos = 4;
        dialogue_layout = 1;
        presets(textbox, internal_window, external_window);
        //because we're fading
        external_window.set_visible(false);
        textbox.set_visible(false);
        //
        if (lamp == 1){bgimg.set_item(bn::regular_bg_items::bg00_n_lamp);}
        else{bgimg.set_item(bn::regular_bg_items::bg00_n);}
        spimg.set_item(bn::regular_bg_items::sp01);
        bgimg.set_position(-8, 0);
        spimg.set_position(0, 0);
        if(true)
        {
          bn::string_view dialogue_text_lines[] = {
              "",
              "",
              "",
              "",
              "",
              "",
              "",
              };
          fade::in_slow();
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
          menu::night(spimg, bgimg, textbox, internal_window, external_window, text_generator);
        }
        //Load Point
        if (loading == 1) //if the game is loading
        {
            loading = 0; //Finish loading, then...
            switch (load_des) //If load_des is 0, go to the day screen! 1 = work, 2 = night.
            {
                case 0:
                    fade::out_fast();
                    goto daytime;
                case 1:
                    fade::out_fast();
                    goto work;
                case 2:
                    fade::out_fast();
                    goto night;
                default:
                    break;
            }
        }
        //Choice 0: Talk
        if (menu_pos == 0)
        {
        bn::core::update();
        scene::talk1(spimg, bgimg, textbox, internal_window, external_window, text_generator, talkrng);
        }
        
        //Choice 1: Sleep
        
 
        //Night end;
        if (energy < 1){fade::out_med();}
        else{fade::out_fast(); goto night;}
        date = date + 1;
        energy = 2;


    }
}
