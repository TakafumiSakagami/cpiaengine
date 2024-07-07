
#include "bn_sound_actions.h"

#include "bn_sound_item.h"
#include <bn_sound_items.h>

//Sprites
#include <bn_regular_bg_items_e_00.h>
#include <bn_regular_bg_items_e_01.h>
#include <bn_regular_bg_items_e_02.h>
#include <bn_regular_bg_items_e_03.h>
#include <bn_regular_bg_items_e_04.h>
#include <bn_regular_bg_items_e_05.h>
#include <bn_regular_bg_items_e_06.h>
#include <bn_regular_bg_items_e_07.h>
#include <bn_regular_bg_items_e_08.h>
#include <bn_regular_bg_items_e_s_00.h>
#include <bn_regular_bg_items_e_s_01.h>
#include <bn_regular_bg_items_e_s_02.h>
#include <bn_regular_bg_items_e_s_03.h>
#include <bn_regular_bg_items_e_s_04.h>
#include <bn_regular_bg_items_e_s_05.h>
#include <bn_regular_bg_items_e_s_06.h>
#include <bn_regular_bg_items_e_s_07.h>
#include <bn_regular_bg_items_e_s_08.h>
//Backgrounds
#include <bn_regular_bg_items_bg00.h>
#include <bn_regular_bg_items_bg00_lamp.h>
#include <bn_regular_bg_items_bg00_n.h>
#include <bn_regular_bg_items_bg00_n_lamp.h>
#include <bn_regular_bg_items_bg01.h>
#include <bn_regular_bg_items_bg01_a.h>
#include <bn_regular_bg_items_bg01_b.h>
#include <bn_regular_bg_items_bg01_c.h>
#include <bn_regular_bg_items_bg02.h>
#include <bn_regular_bg_items_bg03.h>
#include <bn_regular_bg_items_bg04.h>
#include <bn_regular_bg_items_bg05.h>
#include <bn_regular_bg_items_bg06.h>

namespace scene
{
///////////////////////////////////////////////////////////
/////               Work Assignments                  /////
///////////////                             ///////////////
///////////////////////////////////////////////////////////    

  //Work - Eternum (Incessant)
    void working(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {
      if(workflag == "Ducks")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of some",
            "ducks.|",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "River")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of the",
            "river.|",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Shop")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of a",
            "shopfront.|",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Flowers")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of some",
            "flowers.|",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Boats")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of some",
            "boats.|",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Church")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of a",
            "church.|",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Museum")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of the",
            "museum.|",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Bees")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of some",
            "bees.|",
            "",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Supermarket")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of a",
            "supermarket.|",
            "",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Seagulls")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of some",
            "seagulls.|",
            "",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Bridge")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of a",
            "bridge.|",
            "",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
      else if(workflag == "Squirrel")
      {
        bn::string_view dialogue_text_lines[] = {
            "Boss",
            "Get me a picture of a",
            "squirrel.|",
            "",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
      }
  }
    
///////////////////////////////////////////////////////////
/////                   Work - Park                   /////
///////////////                             ///////////////
///////////////////////////////////////////////////////////   
 
    void parkhub(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {
        
    textbox.set_item(bn::regular_bg_items::textbox2);
    if(workflag = "Ducks")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for",
              "some ducks.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "The park isn't the best spot",
              "to look, but they shouldn't",
              "be rare.|",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          money += 25;
          bn::core::update();
            }
        }
    if(workflag = "River")
        {
        if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for a",
              "river.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "Here in the park there are",
              "many little streams.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "That water must come from",
              "somewhere.|",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "So` Maybe there's a river",
              "nearby?|",
              "",
              "",
            };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          money += 25;
          bn::core::update();
            }
        }
    if(workflag = "Shop")
        {
        if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for a",
              "shop.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "For some reason I decided",
              "to go to the park`|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "But aside from a museum",
              "and a play area for kids,",
              "there's nothing here.|",
              "",
              "",
            };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
        } 
    if(workflag = "Flowers")
        {
        if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for",
              "some flowers.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "This park is the biggest",
              "area dedicated to nature",
              "for miles.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "I'm certain there are many",
              "beautiful flowers to",
              "choose from here.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          money += 50;
          bn::core::update();
            }
        if (findseeds == "1" & seedsget == "0")
            {
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Oh! While I'm here`|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "I should get those seeds",
                      "we talked about.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Aha, found some seeds!",
                      "Hope they're good.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  findseeds = 0;
                  seedsget = 1;
                  bn::core::update();
                }
            }
        } 
    if(workflag = "Boats")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for",
              "some boats.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "I remember hearing the",
              "museum has an old one,",
              "so I'll check that out.|",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          money += 25;
          bn::core::update();
            }
            
        }
    if(workflag = "Church")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for a",
              "church.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "If I cut through the park,",
              "on the far side should be",
              "an old church.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "It's a bit out of the way,",
              "but it's the grandest",
              "church around.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          money += 50;
          bn::core::update();
            }
            
        }        
    if(workflag = "Museum")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for a",
              "museum.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "The only museum in the",
              "city is right here, in",
              "this park.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "It's an interesting place,",
              "but I don't have all day.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "I'll just take that",
              "photo.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          money += 50;
          bn::core::update();
            }
            
        }
    if(workflag = "Bees")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for",
              "some bees.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "It's a weird request, but",
              "I figure I can do this",
              "right.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "Where there are flowers",
              "there are bees.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          money += 50;
          bn::core::update();
            }
            
        }
    if(workflag = "Supermarket")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for a",
              "supermarket.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "For some reason I decided",
              "to go to the park`|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "But aside from a museum",
              "and a play area for kids,",
              "there's nothing in here.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }


    }
    if(workflag = "Seagulls")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for",
              "some seagulls.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "When I heard the request",
              "was for an animal, I came",
              "here immediately`|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "But there are no seagulls",
              "here. Maybe we're too far",
              "from the sea?|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
            
        }
    if(workflag = "Bridge")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for",
              "a bridge.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "There are several small",
              "streams in this park.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "To bridge the tiny gap",
              "they made some tiny",
              "bridges.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "They're kinda cute~|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          money += 25;
          bn::core::update();
            }
            
        }
    if(workflag = "Squirrel")
        {
      if(true)
            {
          workflag = 0;
          bn::string_view dialogue_text_lines[] = {
              "I go on the search for",
              "a squirrel.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "When I heard the request",
              "was for an animal, I came",
              "here immediately.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "There are many trees here,",
              "and many playful squirrels",
              "running up and down them.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "It's the perfect",
              "location.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          money += 50;
          bn::core::update();
            }
        }
    if (day >= "32" & day32scene == "0")
        {
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Peekaboo!|",
                  "",
                  "",
                  };
              textbox.set_item(bn::regular_bg_items::textbox2);
              spimg.set_item(bn::regular_bg_items::e_02);  
              spimg.set_visible(true);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Oh, Euon! Don't scare me",
                  "like that!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Whatcha doin'?|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_08);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Just finishing up with",
                  "work. You?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Same. Wanna walk back",
                  "together?|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_03);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Uh` Okay, sure.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I'll stick to flying",
                  "though.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_02);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Hang on, you work? When",
                  "did you get a job?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I don't.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Why did you say \"same\"",
                  "then?|",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Isn't that how humans",
                  "converse?|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_06);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "In the right context`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Close enough.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_03);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Haha, maybe one day you'll",
                  "nail down communication.|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Hey, a fae's best trait is",
                  "the ability to communicate!|",
                  "",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_01);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Reeeaaally? I find that",
                  "hard to believe.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "You don't know about our",
                  "magic?|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_06);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Like the fake magic you",
                  "put on my camera?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "No no, we have real magic",
                  "too!|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Nope. I don't believe",
                  "you.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Rude! Don't underestimate",
                  "a fairy!|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_00);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Did your mum never teach",
                  "you not to cry wolf?|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "As if I'd remember what",
                  "happened so many years ago!|",
                  "",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_01);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Wait, you don't remember",
                  "your parents?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I do! Kinda` But not",
                  "really.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_07);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "How short term is your",
                  "memory`?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Hey! I'm muuuuch older",
                  "than you!|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_01);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "`Right.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "It's true! I'm hundreds of",
                  "years old! Probably!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Probably?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "It's easy to lose track!|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "You're actually` Not a",
                  "kid?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "You thought I was a child",
                  "this entire time?|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_06);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Well` Yeah.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I haven't aged a day since",
                  "we met! You didn't notice?|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Now that you mention it`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Siiigh, you humans`|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_04);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Hey, don't put it like",
                  "that!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "I'm not an example of all",
                  "humanity.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I know. You're friendly.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "`That a compliment to me",
                  "or an insult to humanity?|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Yes.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Okay, nice answer.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "You know, when I was young,",
                  "Earth was very different.|",
                  "",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_04);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "How so?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "You humans were not a new",
                  "sight, but`|", 
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "You were a far cry from",
                  "conquerors of the planet.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "You're` That old?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Yup. Back then` Well,|",
                  "",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_07);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "There used to be so many",
                  "of us.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_04);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "So many fairies across the",
                  "world.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I could sit on a branch or",
                  "fly towards the sun, and`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I could hear them.|",
                  "",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Millions of lives. All of",
                  "them so different.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "That's our magic. The power",
                  "to connect with life.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "So that's your ability to",
                  "communicate`?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "But now the world is",
                  "human. Only that.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_04);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Us fairies hardly belong",
                  "here.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "There's no space for us",
                  "anymore.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Like the birds, or the",
                  "reptiles`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Like the fish, the mammals`",
                  "Even the bugs.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "None of us belong here",
                  "anymore.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "I wouldn't put it like",
                  "that`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "We're dying. Just take a",
                  "look.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_07);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Sometimes I try to believe.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_04);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I'll fly out to nature and",
                  "I sit upon a leaf.|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "I don't hear them",
                  "anymore.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_04);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Instead I hear screaming.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "And 8 billion Humans.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "`I see.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "That's why we all move to",
                  "the cities.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_04);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "To depend on the abundance",
                  "of Humanity.|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "But` At least there's some",
                  "kindness out there.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_s_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Like you.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "So even if the planet dies,",
                  "I'm glad to have met you.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "There's some solace in",
                  "that.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Even if the planet` dies?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Don't worry about it. It's",
                  "not that bad yet.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_02);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Yet?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "And there are other",
                  "planets to move to.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_06);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "It won't be an end",
                  "for humans.|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "`And the fairies?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "`|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_04);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Euon?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Euon",
                  "Ah, this is my stop! Time",
                  "to split.|",
                  "",
                  "",
                  };
              spimg.set_item(bn::regular_bg_items::e_05);  
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "The fairy flies off into",
                  "the trees.|",
                  "",
                  "",
                  };
              textbox.set_item(bn::regular_bg_items::textbox2);
              fader::e_05_out(spimg); 
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "I wonder if fairies can",
                  "cry`|",
                  "",
                  "",
                  };
              textbox.set_item(bn::regular_bg_items::textbox);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "I turn my attention to the",
                  "street leading home.|",
                  "",
                  "",
                  };
              textbox.set_item(bn::regular_bg_items::textbox2);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "The sight of a pink haired",
                  "girl tending to her",
                  "flowers comes to mind.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "I wonder`|",
                  "",
                  "",
                  };
              textbox.set_item(bn::regular_bg_items::textbox);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "How would she respond to",
                  "this kind of conversation?|",
                  "",
                  "",
                  "",
                  };
              textbox.set_item(bn::regular_bg_items::textbox2);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              day32scene = 1;
              bn::core::update();
                }
            }
    
    } 
 
 
///////////////////////////////////////////////////////////
/////                   Work - River                  /////
///////////////                             ///////////////
///////////////////////////////////////////////////////////   
 
     void riversidehub(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {
    if(workflag = "Ducks")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some ducks.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "It only makes sense to",
              "look for them near the",
              "river. That's where they",
              "live.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          //$money += 50
          bn::core::update();
            }
        }        
    if(workflag = "River")
        {
        if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "river.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "It's not much of a search",
              "though. There's a river",
              "right here!|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          //$money += 50
          bn::core::update();
            }
        }
    if(workflag = "Shop")
        {
        if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "shop.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "If I remember correctly,",
              "there are some small",
              "family businesses around",
              "the riverside.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "It's not the best place",
              "for shopping, but it's",
              "useful for people who live",
              "nearby.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          //$money += 25
          bn::core::update();
            }
        if (lamp == "0" & money >= "100")
            {
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "",
                      "While searching, I notice",
                      "a small furniture shop.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "",
                      "A specific lamp in the",
                      "window catches my",
                      "attention.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "Hmm` Maybe we could do",
                      "with an extra light.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "",
                      "The corner of the room",
                      "where the bed sits gets",
                      "very dark sometimes`|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "",
                      "Yeah sure, I'll buy a",
                      "lamp.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  //$lamp = True
                  //$money -= 100
                  bn::core::update();
                }
            }         
        } 
    if(workflag = "Flowers")
        {
        if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some flowers.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "I remember seeing lots of",
              "trees and bushes in this",
              "area.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But now that I'm here, I",
              "realize there aren't",
              "actually any flowers",
              "here.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
        } 
    if(workflag = "Boats")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some boats.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "They have plenty of boats",
              "here. They're some sort of",
              "tourist attraction I",
              "think.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          //$money += 50
          bn::core::update();
            }
            
        }
    if(workflag = "Church")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "church.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But here near the river,",
              "the only buildings are",
              "houses, hotels, and",
              "shops.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "There's no church here.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
            
        }        
    if(workflag = "Museum")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "museum.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But the only museum in the",
              "city is in the park.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "There's no museum out",
              "here.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
            
        }
    if(workflag = "Bees")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some bees.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "It's a weird request, so",
              "I'm not really sure where",
              "to look.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "Are there even any",
              "beehives in the city?|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
            
        }
    if(workflag = "Supermarket")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "supermarket.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "The riverside didn't seem",
              "like too much of a long",
              "shot.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "Though there are many",
              "shops here, there's no",
              "supermarket.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
    }
    if(workflag = "Seagulls")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some seagulls.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "Seagulls love water, I",
              "think. It's in the name at",
              "least`|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "So the riverside seems",
              "like the best spot to find",
              "them.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          //$money += 50
          bn::core::update();
            }    
        }
    if(workflag = "Bridge")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "a bridge.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "This river splits the city",
              "in two.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "And how do you get across",
              "that split?|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "A bridge!|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          //$money += 50
          bn::core::update();
            }    
        }
    if(workflag = "Squirrel")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "a squirrel.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "There are some trees here,",
              "so maybe there'll be some",
              "squirrels?|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "I'm sure I'll find at",
              "least one..|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          //$money += 24
          bn::core::update();
            }
        }    
    }     
 
 
///////////////////////////////////////////////////////////
/////                    Work - City                  /////
///////////////                             ///////////////
///////////////////////////////////////////////////////////   
 
     void downtownhub(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {
    if(workflag = "Ducks")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some ducks.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But out here in the busy",
              "city streets, ducks will",
              "be a rare sight.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
        }        
    if(workflag = "River")
        {
        if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "river.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But I've gone far in-land.",
              "Why would there be a river",
              "out here?|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
        }
    if(workflag = "Shop")
        {
        if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "shop.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "Downtown is where all the",
              "business happens. There",
              "are shops aplenty.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "Such a selection of",
              "displays, I may as well",
              "take some extra photos.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          //$money += 50
          bn::core::update();
            }     
        } 
    if(workflag = "Flowers")
        {
        if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some flowers.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "City streets aren't",
              "normally where you'd go to",
              "find wild flowers`|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But the boss said nothing",
              "about wild.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "I can just go to a flower",
              "shop!|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          //$money += 25
          bn::core::update();
            }
        } 
    if(workflag = "Boats")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some boats.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But I don't think I'll",
              "find any here. There's no",
              "water in this area.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "Maybe if I'm lucky,",
              "someone will have gotten",
              "shipwrecked here.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "As if!|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }  
        }
    if(workflag = "Church")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "church.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "Amidst all these shops,",
              "there's bound to be a",
              "modern church.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "One of those new ones that",
              "doesn't really look like a",
              "church.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "It's technically still",
              "what the boss asked for.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          //$money += 25
          bn::core::update();
            }
        }        
    if(workflag = "Museum")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "museum.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But the only museum in the",
              "city is in the park.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "There's no museum out",
              "here.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
        }
    if(workflag = "Bees")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some bees.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "It's a weird request, so",
              "I'm not really sure where",
              "to look.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
      if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "Are there even any",
              "beehives in the city?|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
            
        }
    if(workflag = "Supermarket")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for a",
              "supermarket.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "There are multiple to",
              "choose from in this area.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "I may as well take some",
              "extra photos.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome2.png}" with wiperight
          //$money += 50
          bn::core::update();
            }
    }
    if(workflag = "Seagulls")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "some seagulls.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "There are some fish and",
              "chip shops in this area`|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "And if I know anything",
              "about seagulls, they love",
              "fish and chips.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome1.png}" with wiperight
          //$money += 25
          bn::core::update();
            }   
        }
    if(workflag = "Bridge")
        {
        if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "a bridge.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "But this area is one big",
              "grid of streets.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "No gaps. No water. No",
              "clearings.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "",
              "No bridge.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
            }
        }
    if(workflag = "Squirrel")
        {
      if(true)
            {
          //$workflag = 0
          bn::string_view dialogue_text_lines[] = {
              "",
              "I go on the search for",
              "a squirrel.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
        if(true)
                {
          bn::string_view dialogue_text_lines[] = {
              "",
              "There are lots of people",
              "here. Won't they scare",
              "away any squirrels?|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
                }
        if(true)
                {
          bn::string_view dialogue_text_lines[] = {
              "",
              "I don't think I'll find",
              "one here.|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          //centered "{image=Work_Outcome3.png}" with wiperight
          bn::core::update();
                }
        }
    if (tvknowledge == "1" & money >= "100")
        {
            //$tvknowledge = False
            //$laptop = True
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Hey kid.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "On the way back home, a",
                  "rough hand grabs my",
                  "shoulder.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "That camera. How long have",
                  "you had it?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Huh? Uuum` 10 years I",
                  "think. Why?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "You're a catcher? Here in",
                  "the city?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Catcher? What-|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Come with me.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "The man pulls me into a",
                  "shop.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "The inside is full of",
                  "technology, some I've",
                  "never even seen before.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "You the supplier?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Huh?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Guess not. You're a buyer",
                  "then.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "On one of the many",
                  "displays I spot a familiar",
                  "sight.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Ah, so that's where our TV",
                  "came from.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "You bought one of those",
                  "beauties? Rare model. Not",
                  "cheap.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Not me. My girlfriend",
                  "must've bought it.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Yeah? She must have a keen",
                  "eye for technology.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Ahaha, I don't know about",
                  "that.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Tell ya what. We got some",
                  "great gifts here. Spot",
                  "something she might like",
                  "and I'll even wrap it for",
                  "ya.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Pricey stuff though.",
                  "What's her favorite",
                  "color?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Eh? Ah, pink.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Pink eh? How 'bout this",
                  "laptop then?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "The man brings up a small",
                  "portable tv thing, encased",
                  "in pink.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Only costs a thousand.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Laptop? What is it?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "It's a computer. Tool of",
                  "convenience.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "EH? THAT'S A COMPUTER?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "But` It's so small!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Impressive huh? Just a",
                  "hundo and you can have",
                  "it.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "How does it work?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "You just press the power",
                  "button. Then it works",
                  "like` A typewriter.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Ah, but who made it?",
                  "Shouldn't they be on the",
                  "news?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "Nah mate, you won't see",
                  "this stuff in any",
                  "newspapers.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Why not?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "'cause it don't exist yet.",
                  "Like that camera o'",
                  "yours.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "`What?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Man",
                  "You didn't even know?",
                  "Haha, tell ya what. Buy",
                  "the laptop and I'll tell",
                  "ya.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
//CHOICE INSERT POINT
            if(choice == "1")
                {
            ///Buy the laptop:
                //$laptop = True
                //$money -= 100
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "Fine, I'll take it.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "Man",
                      "Pass the cash and we got a",
                      "deal.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "",
                      "I bought the laptop.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "Man",
                      "This stuff is all grabbed,",
                      "y'see. Plucked from a",
                      "place beyond.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "What kind of explanation",
                      "is that?|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "Man",
                      "Sometimes, for the lucky",
                      "folk, the future appears",
                      "to 'em. Sends 'em stuff.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "So this is all future",
                      "technology?|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "Man",
                      "Sure is. Pretty magical,",
                      "ey?|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "So that's it? They just",
                      "appear here?|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "Man",
                      "That's it.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "Well, this laptop thing",
                      "better be worth the money,",
                      "'cause the explanation",
                      "wasn't.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                if(true)
                    {
                  bn::string_view dialogue_text_lines[] = {
                      "Man",
                      "Haha, nice doin' business",
                      "with ya.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                    }
                }
            else
            {
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "I don't really want to",
                      "spend that kind of money.",
                      "Sorry.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Man",
                      "Nah, makes sense. Not much",
                      "use for a laptop in this",
                      "day and age.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "",
                      "I decided not to buy the",
                      "laptop.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
            }
        }
    } 
}