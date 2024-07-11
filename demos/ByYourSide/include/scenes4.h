
#include "bn_sound_actions.h"

#include "bn_sound_item.h"
#include <bn_sound_items.h>

#include <bn_regular_bg_items_blank.h>
//Sprites
#include <bn_regular_bg_items_sp01.h>
#include <bn_regular_bg_items_sp02.h>
//Backgrounds
#include <bn_regular_bg_items_bg00.h>
#include <bn_regular_bg_items_bg00_lamp.h>
#include <bn_regular_bg_items_bg00_n.h>
#include <bn_regular_bg_items_bg00_n_lamp.h>
//CGs
#include <bn_regular_bg_items_cg001_a.h>
#include <bn_regular_bg_items_cg001_b.h>
#include <bn_regular_bg_items_cg006_a.h>
#include <bn_regular_bg_items_cg006_b.h>

namespace scene
{

    void sleepy(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator, bn::random& talkrng)
    {
        while(true)
        {
            //RNG
            //talkrng.update();
            workrng.update();
            //talkrng.update();
            int d3roll = talkrng.get_int(1, 3);
            //Set the scene
            energy = 0;
            spimg.set_visible(false);
            bgpos = 4;                                                                       
            dialogue_layout = 1;                                         
            presets(textbox, internal_window, external_window); 
            if (load_des == 0)
            {
            if (lamp == 1){bgimg.set_item(bn::regular_bg_items::bg00_lamp);}
            else{bgimg.set_item(bn::regular_bg_items::bg00);}
            }
            else
            {
            if (lamp == 1){bgimg.set_item(bn::regular_bg_items::bg00_n_lamp);}
            else{bgimg.set_item(bn::regular_bg_items::bg00_n);}
            }
            spimg.set_item(bn::regular_bg_items::sp01);                                             
            bgimg.set_position(-8, 0);                                                              
            spimg.set_position(0, 48);                                                               
            //Text
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Night night~|",
                  "",
                  "",
                  };
              fader::sp01_in(spimg);  
              spimg.set_visible(true);
              bn::sound::stop_all();
              if (d3roll == 1)
              {
              bn::sound_items::z20.play();
              }
              else if (d3roll == 2)
              {
              bn::sound_items::z21.play();
              }
              else
              {
              bn::sound_items::z22.play();
              }
              textbox.set_item(bn::regular_bg_items::textbox);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            break;
        }
    }

///////////////////////////////////////////////////////////
/////                  Night Chat                   /////
///////////////                             ///////////////
///////////////////////////////////////////////////////////

    void nighttalk1(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator, bn::random& talkrng)
    {
        while(true)
        {
            //RNG
            talkrng.update();
            workrng.update();
            //talkrng.update();
            int d10roll = talkrng.get_int(1, 6);
            int d3roll = talkrng.get_int(1, 3);
            talkrng.update();
            //Set the scene
            energy = 0;
            spimg.set_visible(false);
            spimg.set_item(bn::regular_bg_items::blank);
            bgpos = 4;                                                                       
            dialogue_layout = 1;                                         
            presets(textbox, internal_window, external_window); 
            if (load_des == 0)
            {
            if (lamp == 1){bgimg.set_item(bn::regular_bg_items::bg00_lamp);}
            else{bgimg.set_item(bn::regular_bg_items::bg00);}
            }
            else
            {
            if (lamp == 1){bgimg.set_item(bn::regular_bg_items::bg00_n_lamp);}
            else{bgimg.set_item(bn::regular_bg_items::bg00_n);}
            }                                          
            bgimg.set_position(-8, 0);              
            //Text
            if (relationship >= 20 && hugscene == 0)
            { 
                spimg.set_position(0, 0);  
                hugscene = 1;
                bn::core::update();
                if(true)
                    {
                bn::string_view dialogue_text_lines[] = {
                    "Her",
                    "Daaaarling! I'm tiiiired!|",
                    "",
                    "",
                    };
                fader::cg006_in(spimg);  
                bgimg.set_item(bn::regular_bg_items::cg006_a);
                spimg.set_item(bn::regular_bg_items::blank);
                spimg.set_visible(false);
                textbox.set_item(bn::regular_bg_items::textbox);
                texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();   
                    }   
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "Aww, then go to sleep.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "But I want snuggles!|",
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
                      "O- Oh. Then I'll come to",
                      "bed with you.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "Daaaarling!|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "It's fine. We can snuggle",
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
                      "You",
                      "Your back will ache if we",
                      "don't go to bed.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "We snuggle now. It's",
                      "fine.|",
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
                      "But we might get a cold if",
                      "we fall asleep here.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "Mmmm~ Is fine.|",
                      "",
                      "",
                      };
                  bgimg.set_item(bn::regular_bg_items::cg006_b);
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "You",
                      "Ah` She's definitely",
                      "falling asleep.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "My daaaahhhlliiin~ Ehehe~|",
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
                      "She's already dreaming!|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "Lah-ZZZZzzzzzzzz|",
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
                      "Pffft, I wish I could fall",
                      "asleep that easily.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }
                if(true)
                {
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "Lah` You`|",
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
                      "`Yeah. I love you too.|",
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
                      "Come on sleeping beauty.",
                      "Let's go to bed.|",
                      "",
                      "",
                      };
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                  energy = 0;
                  relationship += 2;
                }
            break;
            }
            else
            {
                if(true)
                {                                                              
                  spimg.set_position(0, 48);  
                  bn::string_view dialogue_text_lines[] = {
                      "Her",
                      "Darling~|",
                      "",
                      "",
                      };
                  fader::sp01_in(spimg);  
                  spimg.set_visible(true);
                  bn::sound::stop_all();
                  if (d3roll == 1)
                      {
                      bn::sound_items::z30.play();
                      }
                      else if (d3roll == 2)
                      {
                      bn::sound_items::z31.play();
                      }
                      else
                      {
                      bn::sound_items::z32.play();
                      }
                  textbox.set_item(bn::regular_bg_items::textbox);
                  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                  bn::core::update();
                }  
                //Scenes
                if (d10roll == 1)
                {
                   d10roll = talkrng.get_int(2, 6);
                   talkrng.update();
                   if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Ehehe~|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z42.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "You're in a good mood",
                          "tonight.|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "Did something happen?|",
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
                          "Her",
                          "It's a starry night",
                          "tonight.|",
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
                          "Just that?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Just that.|",
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
                          "Eeeh, that's enough to",
                          "make you happy?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Mhm. Stars are like",
                          "ascended cute girls~|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z11.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "They're looking down at",
                          "us.|",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "What kind of theory is",
                          "that?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "A cute one~|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    break;
                }

                else if (d10roll == 2)
                {
                   d10roll = talkrng.get_int(3, 6);
                   talkrng.update();
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "What do you think affects",
                          "the dreams we have?|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z50.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "Heh? Where'd this come",
                          "from?|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Well` I haven't really had",
                          "a nice dream in a while.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "How about you? Any",
                          "beautiful dreams lately?|",
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
                          "I don't know. Probably,",
                          "but I'll have forgotten.|",
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
                          "Most of my dreams are",
                          "like normal days of life.|",
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
                          "Oh but sometimes I dream of",
                          "you. That's always fun.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Ah, I used to dream of you",
                          "before we lived together!|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Not much since`|",
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
                          "Yeah, it's the same for",
                          "me.|",
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
                          "Maybe we don't dream of",
                          "each other because`|",
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
                          "We spend so much time",
                          "together?|",
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
                          "Her",
                          "Truuueee!|",
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
                          "Her",
                          "If I missed you more, I may",
                          "dream about you more!|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "But wait! That defeats the",
                          "entire purpose!|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "My 100 percent darling",
                          "life will be impossible!|",
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
                          "But if it means I get to",
                          "live every day with you`|",
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
                          "Then I guess I prefer",
                          "that over sweet dreams.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Ehehe, romantic~|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z43.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Then I'll save up all my",
                          "dream power to visit you.|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "That'd be nice. I'll do",
                          "the same.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                break;
                }

                else if (d10roll == 3)
                {
                   d10roll = talkrng.get_int(3, 6);
                   talkrng.update();
                   if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Darling came from the",
                          "countryside, right?|",
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
                          "Yeah, a little village to",
                          "the north.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Oooh, what was it like?|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z51.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "I guess` Like any other",
                          "village?|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Which is?|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z02.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "You've never been to a",
                          "village?|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "I'm stuck with this city",
                          "life`|",
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
                          "You'd suit village life",
                          "better.|",
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
                          "You don't seem like a city",
                          "type of girl.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Mhm, I've always wanted to",
                          "visit one.|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z11.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "We could go on a trip",
                          "someday.|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "I'll show you my old home.|",
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
                          "Her",
                          "That'd be fun~|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Will you introduce me to",
                          "your family?|",
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
                          "If they're there.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Ehehe, good~|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z42.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    break;
                }

                else if (d10roll == 4)
                {
                   d10roll = talkrng.get_int(4, 6);
                   talkrng.update();
                   if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "We should get some new",
                          "pillows.|",
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
                          "Eh? We already have",
                          "plenty.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Not enough.|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z03.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "We have` 12? 13 maybe?|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Not enough!|",
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
                          "And the ones you buy have",
                          "those sequins on.|",
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
                          "How do you even lay on",
                          "those?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "You don't! They're",
                          "decorative!|",
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
                          "Eeeh, we don't have the",
                          "space for decorations.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Uuuuuu~!|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z50.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "Fiiine. I'll buy some",
                          "tomorrow.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Yay~ Thanks darling~|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z41.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    break;
                }

                else if (d10roll == 5)
                    {
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "And you go`. There!|",
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
                          "What are you doing?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Hmm? Oh darling, lookie!|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z00.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Tada~ It's my cuddle",
                          "collection!|",
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
                          "Aaah, stuffed toys. You",
                          "collect them?|",
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
                          "There's quite a lot here.|",
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
                          "Her",
                          "Only 29 so far. I'll get",
                          "more eventually~|",
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
                          "Are they all from",
                          "something?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Nope.|",
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
                          "Do they have names?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Yup~|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z13.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "Then` Who is this?|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "That's Neddy the donkey!|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "He's actually a finger",
                          "puppet.|",
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
                          "Eeeh? Then` What about",
                          "this?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "That's Cactopi! Is a cute",
                          "lil cactus baby~|",
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
                          "Pfft, look at its beady",
                          "eyes.|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "They're cute!|",
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
                          "Does it come with real",
                          "needles?|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "That wouldn't be very",
                          "cuddly`|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      bn::sound_items::z50.play();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "You",
                          "Ahaha, guess not.|",
                          "",
                          "",
                          };
                      bn::sound::stop_all();
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "And this one is Hops~",
                          "A hoola-hooping bunny!|",
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
                          "Her",
                          "And this one is Flake.",
                          "A talking ice cream!|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "And this one is Batter.",
                          "It's a fishie~|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "And this one is`|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                    break;
                }
            }
        }
    }
    void night1(bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {  
        bn::core::update();
        while(true)
        {
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "",
                  "",
                  "",
                  "",
                  "",
                  "",
                  };
              fade::in_fast();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Hey darling, do you like",
                  "it?|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z30.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Hmm?|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bgimg.set_item(bn::regular_bg_items::cg001_b);
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "The house!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "It looks so good now that",
                  "it's furnished, right?|",
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
                  "Yeah, it's great.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "It was a big empty space",
                  "when we got here, but now",
                  "it looks small and homely.|",
                  "",
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
                  "You",
                  "It's a big change.|",
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
                  "Though some of the",
                  "furniture looks strange.|",
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
                  "I'll have to ask her about",
                  "that TV`|",
                  "",
                  "",
                  };
              tvflag = 1;
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Hey darling`|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z33.play();
              textbox.set_item(bn::regular_bg_items::textbox);
              bgimg.set_item(bn::regular_bg_items::cg001_a);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Hmm?|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "You need me, right?|",
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
                  "Huh, need you?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "To live.|",
                  "",
                  "",
                  };
              bgimg.set_item(bn::regular_bg_items::cg001_b);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Of course. What makes you",
                  "ask that?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "I just wanted to make",
                  "sure.|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z03.play();
              bgimg.set_item(bn::regular_bg_items::cg001_a);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Hmm, well` I can",
                  "understand that.|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Sometimes I feel the same.",
                  "Like`|",
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
                  "Why did you pick me? Am I",
                  "good enough?|",
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
                  "Things like that`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Then we both feel the same",
                  "way.|",
                  "",
                  "",
                  };
              bgimg.set_item(bn::regular_bg_items::cg001_b);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Yeah, it's strange` But I",
                  "guess that's love.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Ehehe, lovey dovey~|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z43.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Ah, but why did you pick",
                  "me?|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Eeeeh` I've told you",
                  "already.|",
                  "",
                  "",
                  };
              bgimg.set_item(bn::regular_bg_items::cg001_a);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "You have?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "All the time! We're the",
                  "same, right?|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z11.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Heh? We're totally",
                  "different!|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "But look at you`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Long dark hair that hates",
                  "uniformity`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Lips that curve quicker to",
                  "disgust than anything else.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Eyes that look lost.",
                  "Tired. Lonely.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "And then` Deep down I see",
                  "a sparkle.|",
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
                  "A sparkle? What does that",
                  "mean?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "A little sparkle that keeps",
                  "you alive in this world.|",
                  "",
                  "",
                  "",
                  };
              bgimg.set_item(bn::regular_bg_items::cg001_b);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Like hope?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Yeah, maybe. I want to be",
                  "that sparkle for you and`|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z03.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "I want you to be that",
                  "sparkle for me.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Shining together` Just",
                  "like this.|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "So we can continue to",
                  "live?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "So we can continue to",
                  "live.|",
                  "",
                  "",
                  };
              bgimg.set_item(bn::regular_bg_items::cg001_a);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Then` I'll try to shine as",
                  "bright as I can.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Ehehe, the hair might get",
                  "in the way though.|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z40.play();
              bgimg.set_item(bn::regular_bg_items::cg001_b);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Pfft, maybe!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Hey, darling`|",
                  "",
                  "",
                  };
              bgimg.set_item(bn::regular_bg_items::cg001_a);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Hmm?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Thanks for living with",
                  "me.|",
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
                  "Yeah, you too. Thank you.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Let's stay like this`|",
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
                  "Forever?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Ehehe~|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z42.play();
              bgimg.set_item(bn::regular_bg_items::cg001_b);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            break;
        }
    }
}
