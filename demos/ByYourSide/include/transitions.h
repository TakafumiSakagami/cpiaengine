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
//#include "bn_music_items.h"
#include "bn_sound_item.h"
#include "common_info.h"

namespace fade
{

    void waiter(int frames)
    {
      for(int i = 0; i < frames; ++i) {
          bn::core::update();
      }
    }


    void in_fast()
      {
      int frames = 58;
      bn::bg_palettes::set_fade(bn::colors::black, 1);
      bn::sprite_palettes::set_fade(bn::colors::black, 1);
      waiter(frames);
      frames = 2;
      bn::bg_palettes::set_fade(bn::colors::black, 0.8);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.8);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.6);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.6);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.4);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.4);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.2);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.2);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.0);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.0);
      waiter(frames);
      }


    void out_fast()
      {
      int frames = 2;
      bn::bg_palettes::set_fade(bn::colors::black, 0.2);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.2);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.4);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.4);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.6);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.6);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.8);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.8);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 1.0);
      bn::sprite_palettes::set_fade(bn::colors::black, 1.0);
      waiter(frames);
      }


    void in_med()
      {
      int frames = 58;
      bn::bg_palettes::set_fade(bn::colors::black, 1);
      bn::sprite_palettes::set_fade(bn::colors::black, 1);
      waiter(frames);
      frames = 3;
      bn::bg_palettes::set_fade(bn::colors::black, 0.9);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.9);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.8);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.8);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.7);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.7);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.6);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.6);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.5);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.5);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.4);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.4);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.3);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.3);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.2);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.2);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.1);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.1);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.0);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.0);
      waiter(frames);
      }


    void out_med()
      {
      int frames = 3;
      bn::bg_palettes::set_fade(bn::colors::black, 0.1);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.1);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.2);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.2);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.3);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.3);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.4);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.4);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.5);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.5);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.6);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.6);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.7);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.7);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.8);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.8);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.9);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.9);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 1.0);
      bn::sprite_palettes::set_fade(bn::colors::black, 1.0);
      waiter(frames);
      }


    void in_slow()
      {
      int frames = 58;
      bn::bg_palettes::set_fade(bn::colors::black, 1);
      bn::sprite_palettes::set_fade(bn::colors::black, 1);
      waiter(frames);
      frames = 3;
      bn::bg_palettes::set_fade(bn::colors::black, 0.95);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.95);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.9);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.9);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.85);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.85);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.8);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.8);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.75);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.75);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.7);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.7);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.65);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.65);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.6);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.6);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.55);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.55);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.5);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.5);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.45);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.45);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.4);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.4);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.35);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.35);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.3);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.3);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.25);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.25);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.2);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.2);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.15);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.15);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.1);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.1);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.05);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.05);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.0);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.0);
      waiter(frames);
      }


    void out_slow()
      {
      int frames = 3;
      bn::bg_palettes::set_fade(bn::colors::black, 0.05);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.05);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.1);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.1);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.15);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.15);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.2);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.2);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.25);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.25);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.3);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.3);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.35);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.35);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.4);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.4);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.45);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.45);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.5);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.5);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.55);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.55);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.6);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.6);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.65);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.65);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.7);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.7);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.75);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.75);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.8);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.8);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.85);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.85);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.9);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.9);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 0.95);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.95);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::black, 1.0);
      bn::sprite_palettes::set_fade(bn::colors::black, 0.1);
      waiter(frames);
      }


    void in_white_fast()
      {
      int frames = 58;
      bn::bg_palettes::set_fade(bn::colors::white, 1);
      bn::sprite_palettes::set_fade(bn::colors::white, 1);
      waiter(frames);
      frames = 2;
      bn::bg_palettes::set_fade(bn::colors::white, 0.8);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.8);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::white, 0.6);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.6);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::white, 0.4);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.4);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::white, 0.2);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.2);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::white, 0.0);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.0);
      waiter(frames);
      }


    void out_white_fast()
      {
      int frames = 2;
      bn::bg_palettes::set_fade(bn::colors::white, 0.2);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.2);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::white, 0.4);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.4);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::white, 0.6);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.6);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::white, 0.8);
      bn::sprite_palettes::set_fade(bn::colors::white, 0.8);
      waiter(frames);
      bn::bg_palettes::set_fade(bn::colors::white, 1.0);
      bn::sprite_palettes::set_fade(bn::colors::white, 1.0);
      waiter(frames);
      }
}
