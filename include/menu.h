
#include <bn_regular_bg_items_pause_01.h>
#include <bn_regular_bg_items_pause_02.h>
#include <bn_regular_bg_items_pause_03.h>
#include <bn_regular_bg_items_pause_04.h>
#include <bn_regular_bg_items_pause_05.h>

#include <bn_regular_bg_items_textbox.h>
#include <bn_regular_bg_items_kuro.h>

namespace menu
{
    int pause(int bgpos, int dialogue_layout, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window)
    {
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
          bn::core::update();
         }
        internal_window.set_visible(true);
        external_window.set_show_sprites(true);
    return(0);}
}
