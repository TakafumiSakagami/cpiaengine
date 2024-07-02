//Core
//#include "menu.cpp"

///////////////////////////////////////////
//////////////Note for editors:////////////
//Images are defined here.
//The script is down by "main()"
//Maybe ignore everything else for now.
///////////////////////////////////////////
//Generics
#include <bn_regular_bg_items_kuro.h>
#include <bn_regular_bg_items_siro.h>
//Fonts
#include "common_fixed_8x16_sprite_font.h"
//Images
#include <bn_regular_bg_items_ayu_05.h>
#include <bn_regular_bg_items_demo_01.h>
#include <bn_regular_bg_items_demo_02.h>
#include <bn_regular_bg_items_demo_03.h>
#include <bn_regular_bg_items_demo_04.h>
#include <bn_regular_bg_items_demo_05.h>
#include <bn_regular_bg_items_intro_akiko_01.h>
#include <bn_regular_bg_items_intro_ayu_01.h>
#include <bn_regular_bg_items_intro_ayu_02.h>
#include <bn_regular_bg_items_intro_ayu_03.h>
#include <bn_regular_bg_items_intro_ayu_04.h>
#include <bn_regular_bg_items_intro_ayu_05.h>
#include <bn_regular_bg_items_intro_ayu_06.h>
#include <bn_regular_bg_items_intro_kaori_01.h>
#include <bn_regular_bg_items_intro_logo_01.h>
#include <bn_regular_bg_items_intro_mai_01.h>
#include <bn_regular_bg_items_intro_mai_02.h>
#include <bn_regular_bg_items_intro_mai_03.h>
#include <bn_regular_bg_items_intro_mishio_01.h>
#include <bn_regular_bg_items_intro_mkt_01.h>
#include <bn_regular_bg_items_intro_mkt_02.h>
#include <bn_regular_bg_items_intro_mkt_03.h>
#include <bn_regular_bg_items_intro_nyk_01.h>
#include <bn_regular_bg_items_intro_nyk_02.h>
#include <bn_regular_bg_items_intro_nyk_03.h>
#include <bn_regular_bg_items_intro_obj_01.h>
#include <bn_regular_bg_items_intro_obj_02.h>
#include <bn_regular_bg_items_intro_sayuri_01.h>
#include <bn_regular_bg_items_intro_sor_01.h>
#include <bn_regular_bg_items_intro_sor_02.h>
#include <bn_regular_bg_items_intro_sor_03.h>
#include <bn_regular_bg_items_kan_moj.h>
#include <bn_regular_bg_items_kan_moj1.h>
#include <bn_regular_bg_items_kan_moj2.h>
#include <bn_regular_bg_items_kan_moj3.h>
#include <bn_regular_bg_items_kan_moj3_2.h>
#include <bn_regular_bg_items_kan_moj3_3.h>
#include <bn_regular_bg_items_kan_moj3_4.h>
#include <bn_regular_bg_items_kan_moj3_5.h>
#include <bn_regular_bg_items_logo.h>
#include "bn_regular_bg_items_logo_fade01.h"
#include <bn_regular_bg_items_mai_05.h>
#include <bn_regular_bg_items_mak_05.h>
#include <bn_regular_bg_items_msg_01.h>
#include <bn_regular_bg_items_msg_02.h>
#include <bn_regular_bg_items_msg_03.h>
#include <bn_regular_bg_items_sio_05.h>


namespace video
{
  void op_anim(bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& spimg)
  {
    while(true)
    {
      //fade::out_fast_white();
      bn::music_items::last_regrets.play(0.2, false);
      bgimg.set_item(bn::regular_bg_items::kan_moj);
      fade::in_slow_white();
      int frames = 180;
      fade::waiter(frames);
      fade::out_slow_white();
      bgimg.set_item(bn::regular_bg_items::intro_obj_01);
      fade::in_slow_white();
      panner::bottom_to_top_slow(bgimg);
      fade::out_slow_white();
      bgimg.set_item(bn::regular_bg_items::kan_moj1);
      bgimg.set_position(0, 0);
      fade::in_slow_white();
      frames = 120;
      fade::waiter(frames);
      fade::out_med_white();
      bgimg.set_item(bn::regular_bg_items::intro_logo_01);
      fade::in_med_white();
      fade::waiter(frames);
      fade::out_slow_white();
      bgimg.set_item(bn::regular_bg_items::intro_obj_02);
      fade::in_slow_white();
      panner::bottom_to_top_slow(bgimg);
      spimg.set_position(0, 0);
      spimg.set_item(bn::regular_bg_items::logo_fade01);
      fader::logo(spimg);
      fade::out_fast_white();
      break;
    }
  }

}
