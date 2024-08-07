
#include <bn_string.h>
#include "bn_sram.h"

#include <bn_regular_bg_items_pause_01.h>
#include <bn_regular_bg_items_pause_02.h>
#include <bn_regular_bg_items_pause_03.h>
#include <bn_regular_bg_items_pause_04.h>
#include <bn_regular_bg_items_pause_05.h>

#include <bn_regular_bg_items_choice_yes.h>
#include <bn_regular_bg_items_choice_no.h>

#include <bn_regular_bg_items_textbox.h>
#include <bn_regular_bg_items_textbox2.h>
#include <bn_regular_bg_items_kuro.h>

#include <bn_regular_bg_items_bg01_a.h>
#include <bn_regular_bg_items_bg01_b.h>
#include <bn_regular_bg_items_bg01_c.h>

#include <bn_regular_bg_items_bys_menu_day.h>
#include <bn_regular_bg_items_bys_menu_day_garden.h>
#include <bn_regular_bg_items_bys_menu_night.h>
#include <bn_regular_bg_items_bys_menu_night_sleep.h>

namespace
{
    struct savedata
    {
        //System
        int bgpos;
        int dialogue_layout;
        int menu_pos;
        int load_des;
        //Stats
        int energy;
        int relationship;
        int money;
        int date;
        int garden;
        //Flags
        int day19scene;
        int day32scene;
        int hugscene;
        int laptop;
        int lamp;
        int findseeds;
        int seedsget;
        int protagplant;
        int tvflag;
        int tvknowledge;
        int workflag;
        //
    };
}


namespace menu
{
    int pause(bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window)
    {
        savedata saveData;
        textbox.set_item(bn::regular_bg_items::pause_01);
        textbox.set_blending_top_enabled(false);
        external_window.set_boundaries(-70, -110, 70, 110);
        internal_window.set_visible(false);
        int menu_pos = 1;
        external_window.set_show_sprites(false);
        bn::core::update();
        bn::core::update();
        bn::core::update();
         while(! bn::keypad::start_pressed())
         {
           if(bn::keypad::down_pressed())
              {
               menu_pos = menu_pos +1;
              }
             if (menu_pos == 2)
             {
                 textbox.set_item(bn::regular_bg_items::pause_02);
             }
             else if (menu_pos == 3)
             {
                 textbox.set_item(bn::regular_bg_items::pause_03);
             }
             else if (menu_pos == 4)
             {
                 textbox.set_item(bn::regular_bg_items::pause_04);
             }
             else if (menu_pos > 4)
             {
                 menu_pos = 5;
                 textbox.set_item(bn::regular_bg_items::pause_05);
             }
             else if (menu_pos < 2)
             {
                 menu_pos = 1;
                 textbox.set_item(bn::regular_bg_items::pause_01);
             }
           if(bn::keypad::up_pressed())
              {
               menu_pos = menu_pos -1;
              }
              if (menu_pos == 2)
              {
                  textbox.set_item(bn::regular_bg_items::pause_02);
              }
              else if (menu_pos == 3)
              {
                  textbox.set_item(bn::regular_bg_items::pause_03);
              }
              else if (menu_pos == 4)
              {
                  textbox.set_item(bn::regular_bg_items::pause_04);
              }
              else if (menu_pos > 4)
              {
                  menu_pos = 5;
                  textbox.set_item(bn::regular_bg_items::pause_05);
              }
              else if (menu_pos < 2)
              {
                  menu_pos = 1;
                  textbox.set_item(bn::regular_bg_items::pause_01);
              }
           if(bn::keypad::a_pressed())
              {
                 if (menu_pos == 2)
                 {
                     //System
                     saveData.bgpos = bgpos;
                     saveData.dialogue_layout = dialogue_layout;
                     saveData.menu_pos = menu_pos;
                     saveData.load_des = load_des;
                     //Stats
                     saveData.energy = energy;
                     saveData.relationship = relationship;
                     saveData.money = money;
                     saveData.date = date;
                     saveData.garden = garden;
                     //Flags
                     saveData.day19scene = day19scene;
                     saveData.day32scene = day32scene;
                     saveData.hugscene = hugscene;
                     saveData.laptop = laptop;
                     saveData.lamp = lamp;
                     saveData.findseeds = findseeds;
                     saveData.seedsget = seedsget;
                     saveData.protagplant = protagplant;
                     saveData.tvflag = tvflag;
                     saveData.tvknowledge = tvknowledge;
                     saveData.workflag = workflag;
                     //Save
                     bn::sram::write(saveData);
                     break;

                 }
                 if (menu_pos == 3)
                 {
                     //Load
                     bn::sram::read(saveData);
                     //System
                     bgpos = saveData.bgpos;
                     dialogue_layout = saveData.dialogue_layout;
                     menu_pos = saveData.menu_pos;
                     loading = 1;
                     load_des = saveData.load_des;
                     //Stats
                     energy = saveData.energy;
                     relationship = saveData.relationship;
                     money = saveData.money;
                     date = saveData.date;
                     garden = saveData.garden;
                     //Flags
                     day19scene = saveData.day19scene;
                     day32scene = saveData.day32scene;
                     hugscene = saveData.hugscene;
                     laptop = saveData.laptop;
                     lamp = saveData.lamp;
                     findseeds = saveData.findseeds;
                     seedsget = saveData.seedsget;
                     protagplant = saveData.protagplant;
                     tvflag = saveData.tvflag;
                     tvknowledge = saveData.tvknowledge;
                     workflag = saveData.workflag;
                     //
                     bn::music::stop();
                     break;
                 }
              }
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);
    return(0);}

    int day(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {
        bn::vector<bn::sprite_ptr, 32> menu_sprites;
        menu_sprites.clear();
        textbox.set_item(bn::regular_bg_items::bys_menu_day);
        bgimg.set_position(-8, 0);
        spimg.set_position(0, 0);
        //textbox.set_blending_top_enabled(false);
        //external_window.set_boundaries(-70, -110, 70, 110);
        internal_window.set_visible(true);
        menu_pos = 0;
        external_window.set_show_sprites(false);
        external_window.set_show_blending(false);
        textbox.set_blending_top_enabled(false);
        external_window.set_visible(true);
        textbox.set_visible(true);
        text_generator.generate(79, 22, bn::to_string<4>(date).c_str(), menu_sprites);
        text_generator.generate(104, 37, bn::to_string<2>(energy).c_str(), menu_sprites);
        text_generator.generate(66, 52, bn::to_string<6>(money).c_str(), menu_sprites);
        text_generator.generate(67, 67, bn::to_string<6>(relationship).c_str(), menu_sprites);
        bn::core::update();
        bn::core::update();
        bn::core::update();
         while(true)
         {
           if (loading == 1)
           {
               break;
           }               
           if(bn::keypad::down_pressed())
              {
               menu_pos = 0;
               textbox.set_item(bn::regular_bg_items::bys_menu_day);
              }
           if(bn::keypad::up_pressed())
              {
               menu_pos = 1;
               textbox.set_item(bn::regular_bg_items::bys_menu_day_garden);
              }
           if(bn::keypad::a_pressed())
              {
                 if (menu_pos == 0)
                 {
                     break;
                 }
                 if (menu_pos == 1)
                 {
                     break;
                 }
              }
            if(bn::keypad::start_pressed())
            {
                internal_window.set_visible(true);
                bgimg.set_visible(true);
                external_window.set_visible(true);
                textbox.set_visible(true);
                internal_window.set_show_sprites(true);
                external_window.set_show_sprites(true);
                menu::pause(textbox, internal_window, external_window);
                bgimg.set_position(-8, 0);
                spimg.set_position(0, 0);
                //textbox.set_blending_top_enabled(false);
                //external_window.set_boundaries(-70, -110, 70, 110);
                internal_window.set_visible(true);
                menu_pos = 0;
                external_window.set_show_sprites(false);
                external_window.set_show_blending(false);
                textbox.set_blending_top_enabled(false);
                external_window.set_visible(true);
                textbox.set_visible(true);
                menu_pos = 0;
                textbox.set_item(bn::regular_bg_items::bys_menu_day);
                menu_sprites.clear();
                text_generator.generate(79, 22, bn::to_string<4>(date).c_str(), menu_sprites);
                text_generator.generate(104, 37, bn::to_string<2>(energy).c_str(), menu_sprites);
                text_generator.generate(66, 52, bn::to_string<6>(money).c_str(), menu_sprites);
                text_generator.generate(67, 67, bn::to_string<6>(relationship).c_str(), menu_sprites);
            }
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);

    return 0;}

    int map(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {
        bn::vector<bn::sprite_ptr, 32> menu_sprites;
        menu_sprites.clear();
        textbox.set_item(bn::regular_bg_items::bg01_a);
        bgimg.set_position(-8, 0);
        spimg.set_position(0, 0);
        //textbox.set_blending_top_enabled(false);
        //external_window.set_boundaries(-70, -110, 70, 110);
        internal_window.set_visible(true);
        menu_pos = 0;
        external_window.set_show_sprites(false);
        external_window.set_show_blending(false);
        textbox.set_blending_top_enabled(false);
        external_window.set_visible(true);
        textbox.set_visible(true);
        text_generator.generate(85, -67, bn::to_string<4>(date).c_str(), menu_sprites);
        text_generator.generate(74, -50, bn::to_string<6>(money).c_str(), menu_sprites);
        bn::core::update();
        bn::core::update();
        bn::core::update();
        //external_window.set_show_sprites(false);
         while(true)
         {
           if (loading == 1)
           {
               break;
           }       
           if(bn::keypad::left_pressed())
              {
               menu_pos = 0;
              textbox.set_item(bn::regular_bg_items::bg01_a);
              }
           if(bn::keypad::up_pressed())
              {
               menu_pos = 1;
              textbox.set_item(bn::regular_bg_items::bg01_b);
              }
           if(bn::keypad::right_pressed())
              {
               menu_pos = 2;
              textbox.set_item(bn::regular_bg_items::bg01_c);
              }
           if(bn::keypad::a_pressed())
                {
               if(menu_pos == 0)
                  {
                     break;
                   //Park
                  }
               if(menu_pos == 1)
                  {
                     break;
                   //River
                  }
               if(menu_pos == 2)
                  {
                     break;
                   //Downtown
                  }
                }
            if(bn::keypad::start_pressed())
            {
                internal_window.set_visible(true);
                bgimg.set_visible(true);
                external_window.set_visible(true);
                textbox.set_visible(true);
                internal_window.set_show_sprites(true);
                external_window.set_show_sprites(true);
                menu::pause(textbox, internal_window, external_window);
                bgimg.set_position(-8, 0);
                spimg.set_position(0, 0);
                //textbox.set_blending_top_enabled(false);
                //external_window.set_boundaries(-70, -110, 70, 110);
                internal_window.set_visible(true);
                menu_pos = 0;
                external_window.set_show_sprites(false);
                external_window.set_show_blending(false);
                textbox.set_blending_top_enabled(false);
                external_window.set_visible(true);
                textbox.set_visible(true);
                menu_pos = 0;
                textbox.set_item(bn::regular_bg_items::bg01_a);
                menu_sprites.clear();
                text_generator.generate(85, -67, bn::to_string<4>(date).c_str(), menu_sprites);
                text_generator.generate(74, -50, bn::to_string<6>(money).c_str(), menu_sprites);
            }
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);
    return(0);}

    int night(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {
        bn::vector<bn::sprite_ptr, 32> menu_sprites;
        menu_sprites.clear();
        textbox.set_item(bn::regular_bg_items::bys_menu_night);
        bgimg.set_position(-8, 0);
        spimg.set_position(0, 0);
        //textbox.set_blending_top_enabled(false);
        //external_window.set_boundaries(-70, -110, 70, 110);
        internal_window.set_visible(true);
        menu_pos = 0;
        external_window.set_show_sprites(false);
        external_window.set_show_blending(false);
        textbox.set_blending_top_enabled(false);
        external_window.set_visible(true);
        textbox.set_visible(true);
        text_generator.generate(79, 22, bn::to_string<4>(date).c_str(), menu_sprites);
        text_generator.generate(104, 37, bn::to_string<2>(energy).c_str(), menu_sprites);
        text_generator.generate(66, 52, bn::to_string<6>(money).c_str(), menu_sprites);
        text_generator.generate(67, 67, bn::to_string<6>(relationship).c_str(), menu_sprites);
        bn::core::update();
        bn::core::update();
        bn::core::update();
         while(true)
         {
           if (loading == 1)
           {
               break;
           }               
           if(bn::keypad::down_pressed())
              {
               menu_pos = 0;
               textbox.set_item(bn::regular_bg_items::bys_menu_night);
              }
           if(bn::keypad::up_pressed())
              {
               menu_pos = 1;
               textbox.set_item(bn::regular_bg_items::bys_menu_night_sleep);
              }
           if(bn::keypad::a_pressed())
              {
                 if (menu_pos == 0)
                 {
                     break;
                 }
                 if (menu_pos == 1)
                 {
                     break;
                 }
              }
            if(bn::keypad::start_pressed())
            {
                internal_window.set_visible(true);
                bgimg.set_visible(true);
                external_window.set_visible(true);
                textbox.set_visible(true);
                internal_window.set_show_sprites(true);
                external_window.set_show_sprites(true);
                menu::pause(textbox, internal_window, external_window);
                bgimg.set_position(-8, 0);
                spimg.set_position(0, 0);
                //textbox.set_blending_top_enabled(false);
                //external_window.set_boundaries(-70, -110, 70, 110);
                internal_window.set_visible(true);
                menu_pos = 0;
                external_window.set_show_sprites(false);
                external_window.set_show_blending(false);
                textbox.set_blending_top_enabled(false);
                external_window.set_visible(true);
                textbox.set_visible(true);
                menu_pos = 0;
                textbox.set_item(bn::regular_bg_items::bys_menu_night);
                menu_sprites.clear();
                text_generator.generate(79, 22, bn::to_string<4>(date).c_str(), menu_sprites);
                text_generator.generate(104, 37, bn::to_string<2>(energy).c_str(), menu_sprites);
                text_generator.generate(66, 52, bn::to_string<6>(money).c_str(), menu_sprites);
                text_generator.generate(67, 67, bn::to_string<6>(relationship).c_str(), menu_sprites);
            }
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);

    return 0;}
 
    int yesno(bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window)
    {
        bn::vector<bn::sprite_ptr, 32> menu_sprites;
        menu_sprites.clear();
        textbox.set_item(bn::regular_bg_items::choice_yes);
        //bgimg.set_position(-8, 0);
        //spimg.set_position(0, 0);
        //textbox.set_blending_top_enabled(false);
        //external_window.set_boundaries(-70, -110, 70, 110);
        internal_window.set_visible(true);
        choice = 1;
        external_window.set_show_sprites(false);
        external_window.set_show_blending(false);
        textbox.set_blending_top_enabled(false);
        external_window.set_visible(true);
        textbox.set_visible(true);
        //text_generator.generate(79, 22, bn::to_string<4>(date).c_str(), menu_sprites);
        //text_generator.generate(104, 37, bn::to_string<2>(energy).c_str(), menu_sprites);
        //text_generator.generate(66, 52, bn::to_string<6>(money).c_str(), menu_sprites);
        //text_generator.generate(67, 67, bn::to_string<6>(relationship).c_str(), menu_sprites);
        bn::core::update();
        bn::core::update();
        bn::core::update();
         while(true)
         {
           if (loading == 1)
           {
               break;
           }               
           if(bn::keypad::down_pressed())
              {
               choice = 0;
               textbox.set_item(bn::regular_bg_items::choice_no);
              }
           if(bn::keypad::up_pressed())
              {
               choice = 1;
               textbox.set_item(bn::regular_bg_items::choice_yes);
              }
           if(bn::keypad::a_pressed())
              {
                 if (choice == 0)
                 {
                     break;
                 }
                 if (choice == 1)
                 {
                     break;
                 }
              }
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);

    return 0;}
    
}
