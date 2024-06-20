#include "bn_core.h"
#include <bn_string_view.h>
#include "bn_sprite_text_generator.h"
#include <bn_sprite_animate_actions.h>
#include "common_info.h"
//#include <bn_sprite_items_font01.h>
#include "bn_sprite_items_ctc.h"
#include "bn_sprite_items_fastforward.h"
#include "common_fixed_8x16_sprite_font.h"

namespace texter
{
int dialogue(const bn::span<const bn::string_view>& text_lines, int dialogue_layout, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& kuro, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
{
  bn::vector<bn::sprite_ptr, 32> char_sprites;
  bn::vector<bn::sprite_ptr, 32> text_sprites;
  text_sprites.clear();
  bn::sprite_ptr fast_forward = bn::sprite_items::fastforward.create_sprite(112, 74);
  fast_forward.set_bg_priority(2);
    if(bn::keypad::r_held()) {fast_forward.set_visible(true);} else{fast_forward.set_visible(false);}

  if(dialogue_layout == 1)
  {
    int y_inc = 16;
    int lb = 16;
    int start_x = -111;
    int start_y = -lb * 3 + 81;
    int x = start_x;
    int y = start_y;
    if(bn::keypad::r_held()) {fast_forward.set_visible(true);} else{fast_forward.set_visible(false);}
    for(bn::string_view line : text_lines) {
        for(int i = 0; i < line.length(); ++i) {
            char c = line[i];
            text_generator.generate(x, y, bn::string_view(&c, 1), char_sprites);
            x += 8; // Adjust spacing
            bn::core::update();
            if(bn::keypad::r_held()) {fast_forward.set_visible(true);} else{fast_forward.set_visible(false);}
            bn::core::update();
            }
    if (!line.empty()) {
      char last_char = line[line.length() - 1];
      if(last_char == '|') {
          bn::sprite_ptr click_to_continue = bn::sprite_items::ctc.create_sprite(x, y);
          bn::sprite_animate_action<6> ctc_action = bn::create_sprite_animate_action_forever(
                      click_to_continue, 15, bn::sprite_items::ctc.tiles_item(), 0, 1, 2, 3, 4, 5);
          ctc_action = bn::create_sprite_animate_action_forever(
                      click_to_continue, 15, bn::sprite_items::ctc.tiles_item(), 0, 1, 2, 3, 4, 5);

          while(! bn::keypad::r_held())
          {
            fast_forward.set_visible(false);
            while(! bn::keypad::a_pressed())
            {
                if(bn::keypad::select_pressed())
                {
                    internal_window.set_visible(! internal_window.visible());
                    bgimg.set_visible(! bgimg.visible());
                }
                if(bn::keypad::b_pressed())
                {
                    external_window.set_visible(! external_window.visible());
                    textbox.set_visible(! textbox.visible());
                    internal_window.set_show_sprites(! internal_window.show_sprites());
                    external_window.set_show_sprites(! external_window.show_sprites());

                }
                ctc_action.update();
                bn::core::update();
            }
            if (bn::keypad::a_pressed())
            {
              internal_window.set_visible(true);
              bgimg.set_visible(true);
              external_window.set_visible(true);
              textbox.set_visible(true);
              internal_window.set_show_sprites(true);
              external_window.set_show_sprites(true);
              break;
            }
           bn::core::update();
         }}
       }
        bn::string_view current_line = line;
        text_generator.generate(start_x, y, current_line, text_sprites);
        char_sprites.clear();
        x = start_x;
        y += y_inc; // Adjust vertical spacing
        }
   }
   if(dialogue_layout == 2)
   {
     int y_inc = 16;
     int lb = 16;
     int start_x = -87;
     int start_y = -lb * 3;
     int x = start_x;
     int y = start_y;
     if(bn::keypad::r_held()) {fast_forward.set_visible(true);} else{fast_forward.set_visible(false);}
     for(bn::string_view line : text_lines) {
         for(int i = 0; i < line.length(); ++i) {
             char c = line[i];
             text_generator.generate(x, y, bn::string_view(&c, 1), char_sprites);
             x += 8; // Adjust spacing
             bn::core::update();
             if(bn::keypad::r_held()) {fast_forward.set_visible(true);} else{fast_forward.set_visible(false);}
             bn::core::update();
             }
     if (!line.empty()) {
       char last_char = line[line.length() - 1];
       if(last_char == '|') {
           bn::sprite_ptr click_to_continue = bn::sprite_items::ctc.create_sprite(x, y);
           bn::sprite_animate_action<6> ctc_action = bn::create_sprite_animate_action_forever(
                       click_to_continue, 15, bn::sprite_items::ctc.tiles_item(), 0, 1, 2, 3, 4, 5);
           ctc_action = bn::create_sprite_animate_action_forever(
                       click_to_continue, 15, bn::sprite_items::ctc.tiles_item(), 0, 1, 2, 3, 4, 5);

         while(! bn::keypad::r_held())
         {
           while(! bn::keypad::a_pressed())
           {
               if(bn::keypad::select_pressed())
               {
                   internal_window.set_visible(! internal_window.visible());
                   bgimg.set_visible(! bgimg.visible());
               }
               if(bn::keypad::b_pressed())
               {
                   external_window.set_visible(! external_window.visible());
                   kuro.set_visible(! kuro.visible());
                   internal_window.set_show_sprites(! internal_window.show_sprites());
                   external_window.set_show_sprites(! external_window.show_sprites());

               }
               ctc_action.update();
               bn::core::update();
           }
           if (bn::keypad::a_pressed())
           {
              internal_window.set_visible(true);
              bgimg.set_visible(true);
              external_window.set_visible(true);
              textbox.set_visible(true);
              internal_window.set_show_sprites(true);
              external_window.set_show_sprites(true);
             break;
           }
          bn::core::update();
        }}
      }
         bn::string_view current_line = line;
         text_generator.generate(start_x, y, current_line, text_sprites);
         char_sprites.clear();
         x = start_x;
         y += y_inc; // Adjust vertical spacing
         }
    }

    //char_sprites.clear();
    return(0);
    }
}
