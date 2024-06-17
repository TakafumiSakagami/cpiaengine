#include "bn_core.h"
#include <bn_regular_bg_ptr.h>

namespace panner
{
  int right_to_left(bn::regular_bg_ptr& bgimg)
  {
    bn::fixed x_pos = bgimg.x();
    bn::fixed y_pos = bgimg.y();
      while(true)
      {
        bgimg.set_position(x_pos, y_pos);
        x_pos += 1;
        if (x_pos >= 9)
        {
          break;
        }
        bn::core::update();bn::core::update();

      }
   return(0);
  }
}
