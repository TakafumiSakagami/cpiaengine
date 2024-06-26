
#include <bn_string.h>

#include <bn_regular_bg_items_textbox.h>
#include <bn_regular_bg_items_kuro.h>

#include <bn_regular_bg_items_bg01_a.h>
#include <bn_regular_bg_items_bg01_b.h>
#include <bn_regular_bg_items_bg01_c.h>

#include <bn_regular_bg_items_bys_menu_day.h>
#include <bn_regular_bg_items_bys_menu_day_garden.h>
#include <bn_regular_bg_items_bys_menu_night.h>
#include <bn_regular_bg_items_bys_menu_night_sleep.h>

namespace menu
{
    int day(int date, int energy, int money, int relationship, int menu_pos, bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
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
        //                                                                     //This is where fade in/out is triggered. Before the text scene.
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
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);

    return 0;}

    int map(int bgpos, int dialogue_layout, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window)
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
