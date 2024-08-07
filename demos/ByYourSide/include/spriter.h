
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
#include "bn_regular_bg_items_blank.h"
#include "bn_regular_bg_items_sp01.h"
#include "bn_regular_bg_items_sp01_fade1.h"
#include "bn_regular_bg_items_sp01_fade2.h"
#include "bn_regular_bg_items_sp01_fade3.h"
#include "bn_regular_bg_items_sp08.h"
#include "bn_regular_bg_items_sp08_fade1.h"
#include "bn_regular_bg_items_sp08_fade2.h"
#include "bn_regular_bg_items_sp08_fade3.h"
#include "bn_regular_bg_items_cg006_a.h"
#include "bn_regular_bg_items_cg006_a_fade1.h"
#include "bn_regular_bg_items_cg006_a_fade2.h"
#include "bn_regular_bg_items_cg006_a_fade3.h"
#include "bn_regular_bg_items_e_05.h"
#include "bn_regular_bg_items_e_05_fade1.h"
#include "bn_regular_bg_items_e_05_fade2.h"
#include "bn_regular_bg_items_e_05_fade3.h"

namespace fader
{
  int sp01_in(bn::regular_bg_ptr& spimg)
  {
         if(! bn::keypad::r_held())
         {
          spimg.set_visible(true);
          spimg.set_item(bn::regular_bg_items::sp01_fade1);
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp01_fade2);
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp01_fade3);
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp01);
          return(0);
         }
         else{spimg.set_item(bn::regular_bg_items::sp01); return(0);}
  }
  int sp08_in(bn::regular_bg_ptr& spimg)
  {
         if(! bn::keypad::r_held())
         {
          spimg.set_visible(true);
          spimg.set_item(bn::regular_bg_items::sp08_fade1);
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp08_fade2);
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp08_fade3);
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::sp08);
          return(0);
         }
         else{spimg.set_item(bn::regular_bg_items::sp08); return(0);}
  }
  int cg006_in(bn::regular_bg_ptr& spimg)
  {
         if(! bn::keypad::r_held())
         {
          spimg.set_visible(true);
          spimg.set_item(bn::regular_bg_items::cg006_a_fade1);
          bn::core::update();
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::cg006_a_fade2);
          bn::core::update();
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::cg006_a_fade3);
          bn::core::update();
          bn::core::update();
          spimg.set_item(bn::regular_bg_items::cg006_a);
          return(0);
         }
         else{spimg.set_item(bn::regular_bg_items::cg006_a); return(0);}
  }
  int e_05_out(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& textbox)
  {
         if(! bn::keypad::r_held())
         {
          spimg.set_visible(true);
          textbox.set_visible(false);
          spimg.set_item(bn::regular_bg_items::e_05_fade3);
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          spimg.set_item(bn::regular_bg_items::e_05_fade2);
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          spimg.set_item(bn::regular_bg_items::e_05_fade1);
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          bn::core::update(); bn::core::update();
          spimg.set_item(bn::regular_bg_items::blank);
          textbox.set_visible(true);
          spimg.set_visible(false);
          return(0);
         }
         else{spimg.set_item(bn::regular_bg_items::blank); spimg.set_visible(false); return(0);}
  }
}
