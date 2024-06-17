
#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"

#include "bn_bg_palettes.h"
#include "bn_regular_bg_actions.h"
#include "bn_regular_bg_builder.h"
#include "bn_regular_bg_attributes.h"

#include "bn_regular_bg_animate_actions.h"
#include "bn_regular_bg_position_hbe_ptr.h"

//Place sprites here
#include "bn_regular_bg_items_sp01.h"
#include "bn_regular_bg_items_sp01_fade_01.h"
#include "bn_regular_bg_items_sp01_fade_02.h"
#include "bn_regular_bg_items_sp01_fade_03.h"

namespace fader
{
  int sp01_in(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& textbox)
  {

          spimg.set_visible(true);
          textbox.set_visible(false);
          spimg.set_item(bn::regular_bg_items::sp01_fade_01);
          bn::core::update();bn::core::update();
          bn::core::update();bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp01_fade_02);
          bn::core::update();bn::core::update();
          bn::core::update();bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp01_fade_03);
          bn::core::update();bn::core::update();
          bn::core::update();bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp01);
          textbox.set_visible(true);
          return(0);
  }
}
