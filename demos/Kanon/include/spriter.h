
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
#include "bn_regular_bg_items_cgny01.h"
#include "bn_regular_bg_items_cgny01_fade01.h"
#include "bn_regular_bg_items_cgny01_fade02.h"
#include "bn_regular_bg_items_cgny01_fade03.h"
#include "bn_regular_bg_items_logo.h"
#include "bn_regular_bg_items_logo_fade01.h"
#include "bn_regular_bg_items_logo_fade02.h"
#include "bn_regular_bg_items_logo_fade03.h"

namespace fader
{
  int cgny01_in(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& textbox)
  {

          spimg.set_visible(true);
          textbox.set_visible(false);
          spimg.set_item(bn::regular_bg_items::cgny01_fade01);
          bn::core::update();bn::core::update();
          bn::core::update();bn::core::update();
          spimg.set_item(bn::regular_bg_items::cgny01_fade02);
          bn::core::update();bn::core::update();
          bn::core::update();bn::core::update();
          spimg.set_item(bn::regular_bg_items::cgny01_fade03);
          bn::core::update();bn::core::update();
          bn::core::update();bn::core::update();
          spimg.set_item(bn::regular_bg_items::cgny01);
          textbox.set_visible(true);
          return(0);
  }
    int logo(bn::regular_bg_ptr& spimg)
    {

            spimg.set_item(bn::regular_bg_items::logo_fade01);
            spimg.set_visible(true);
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            spimg.set_item(bn::regular_bg_items::logo_fade02);
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            spimg.set_item(bn::regular_bg_items::logo_fade03);
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            spimg.set_item(bn::regular_bg_items::logo);
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            spimg.set_item(bn::regular_bg_items::logo_fade03);
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            spimg.set_item(bn::regular_bg_items::logo_fade02);
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            spimg.set_item(bn::regular_bg_items::logo_fade01);
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            bn::core::update();bn::core::update();
            spimg.set_visible(false);
            return(0);
    }
}
