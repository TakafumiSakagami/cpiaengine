
#include <bn_string.h>
#include "bn_sram.h"

#include <bn_regular_bg_items_pause_01.h>
#include <bn_regular_bg_items_pause_02.h>
#include <bn_regular_bg_items_pause_03.h>
#include <bn_regular_bg_items_pause_04.h>
#include <bn_regular_bg_items_pause_05.h>

#include <bn_regular_bg_items_textbox.h>
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
        int bgpos;
        int dialogue_layout;
        int menu_pos;
        //
        int energy;
        int relationship;
        int money;
        int date;
        //
        int day19scene;
        int laptop;
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
             else if (menu_pos >= 4)
             {
                 menu_pos = 5;
                 textbox.set_item(bn::regular_bg_items::pause_05);
             }
             else if (menu_pos <= 2)
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
              else if (menu_pos >= 4)
              {
                  menu_pos = 5;
                  textbox.set_item(bn::regular_bg_items::pause_05);
              }
              else if (menu_pos <= 2)
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
                     //Stats
                     saveData.energy = energy;
                     saveData.relationship = relationship;
                     saveData.money = money;
                     saveData.date = date;
                     //Flags
                     saveData.day19scene = day19scene;
                     saveData.laptop = laptop;
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
                     //Stats
                     energy = saveData.energy;
                     relationship = saveData.relationship;
                     money = saveData.money;
                     date = saveData.date;
                     //Flags
                     day19scene = saveData.day19scene;
                     laptop = saveData.laptop;
                     //
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
        text_generator.generate(76, 20, bn::to_string<4>(date).c_str(), menu_sprites);
        text_generator.generate(97, 36, bn::to_string<2>(energy).c_str(), menu_sprites);
        text_generator.generate(92, 52, bn::to_string<6>(money).c_str(), menu_sprites);
        text_generator.generate(65, 67, bn::to_string<6>(relationship).c_str(), menu_sprites);
        bn::core::update();
        bn::core::update();
        bn::core::update();
         while(true)
         {
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
                text_generator.generate(76, 20, bn::to_string<4>(date).c_str(), menu_sprites);
                text_generator.generate(97, 36, bn::to_string<2>(energy).c_str(), menu_sprites);
                text_generator.generate(92, 52, bn::to_string<6>(money).c_str(), menu_sprites);
                text_generator.generate(65, 67, bn::to_string<6>(relationship).c_str(), menu_sprites);
            }
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);

    return 0;}

    int map(bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window)
    {
        textbox.set_item(bn::regular_bg_items::bg01_a);
        textbox.set_blending_top_enabled(false);
        external_window.set_boundaries(-70, -110, 70, 110);
        internal_window.set_visible(false);
        int menu_pos = 1;
        //external_window.set_show_sprites(false);
        bn::core::update();
        bn::core::update();
        bn::core::update();
         while(true)
         {
           if(bn::keypad::left_pressed())
              {
               menu_pos = 1;
              textbox.set_item(bn::regular_bg_items::bg01_a);
              }
           if(bn::keypad::up_pressed())
              {
               menu_pos = 2;
              textbox.set_item(bn::regular_bg_items::bg01_b);
              }
           if(bn::keypad::right_pressed())
              {
               menu_pos = 3;
              textbox.set_item(bn::regular_bg_items::bg01_c);
              }
           if(bn::keypad::a_pressed())
                {
               if(menu_pos == 1)
                  {
                   //park
                  }
               if(menu_pos == 2)
                  {
                   //River
                  }
               if(menu_pos == 3)
                  {
                   //Downtown
                  }
                }
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);
    return(0);}
}
