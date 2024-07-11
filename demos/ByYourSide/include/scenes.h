
#include "bn_sound_actions.h"

#include "bn_sound_item.h"
#include <bn_sound_items.h>

//Sprites
#include <bn_regular_bg_items_sp01.h>
#include <bn_regular_bg_items_sp02.h>
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
/////                  Daytime Chat                   /////
///////////////                             ///////////////
///////////////////////////////////////////////////////////

    void talk1(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator, bn::random& talkrng)
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
                  "Hmm? You want to talk?|",
                  "",
                  "",
                  };
              fader::sp01_in(spimg);  
              spimg.set_visible(true);
              bn::sound::stop_all();
              if (d3roll == 1)
              {
              bn::sound_items::z00.play();
              }
              else if (d3roll == 2)
              {
              bn::sound_items::z01.play();
              }
              else
              {
              bn::sound_items::z02.play();
              }
                textbox.set_item(bn::regular_bg_items::textbox);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }

///////////////////////////////////////////////////////////
/////               Learn about the TV                /////
///////////////                             ///////////////
///////////////////////////////////////////////////////////    

        if (tvflag == 1)
        {
            tvflag = 2;
            tvknowledge = 1;
            energy -= 1;
            relationship += 3;
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Hey, isn't this TV`",
                  "Weird?|",
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
                  "Her",
                  "How do you mean?|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z01.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Well, look at it`|",
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
                  "Mhm.|",
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
                  "You don't think it's",
                  "strange?|",
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
                  "Not really. It's a normal",
                  "TV.|",
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
                  "That's not right, is it?",
                  "TVs aren't that thin`|",
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
                  "And they don't come with",
                  "little stands like that.|",
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
                  "But it's a box with a",
                  "screen.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "Huh, there aren't even any",
                  "dials. It really is",
                  "strange.|",
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
                  "Where'd you find it?|",
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
                  "Her",
                  "Huh? Where'd I find it?|",
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
                  "That's what I asked.|",
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
                  "Uuuuh`|",
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
                  "I can't remember!|",
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
                  "There's that terrible",
                  "memory again.|",
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
                  "Ehehe~ It's a forever",
                  "problem.|",
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
                  "You should really try and",
                  "fix that.|",
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
                  "Memory loss isn't a normal",
                  "thing at your age.|",
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
                  "Uuuu, that's fine. I'm not",
                  "normal anyway!|",
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
                  "Anyway, it's a colour",
                  "television too.|",
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
                  "Not many places around here",
                  "sell those kinds.|",
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
                  "Yeah?|",
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
                  "We'd have to go into the",
                  "city center for all the",
                  "new fancy stuff.|",
                  "",
                  "",
                  };
                textbox.set_item(bn::regular_bg_items::textbox2);
              bn::sound::stop_all();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            if(true)
                {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Maybe I'll ask around next",
                  "time I head down town.|",
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
                  "Her",
                  "Will you get me a present",
                  "on the way?|",
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
                  "Sure, just put the money",
                  "for it in our account.|",
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
                  "Eeeh, stingy!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
                }
            break;
    }

        //Other scenes
        else if (date >= 5 && day19scene == 0)
        {
            day19scene = 1;
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Oh, by the way`|",
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
                  "You",
                  "Yeah?|",
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
                  "We got some mail earlier.|",
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
                  "Oh? Important mail?|",
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
                  "Maybe~ The sender had your",
                  "surname.|",
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
                  "Where is it? I'll check it",
                  "out.|",
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
                  "On the table~|",
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
                  "Thanks.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "I walk over to the table",
                  "and look through a small",
                  "pile of papers.|",
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
                  "Flicking through them all,",
                  "I happen upon a signed",
                  "envelope.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "The name scribed atop the",
                  "seal is an all too",
                  "familiar one.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Ida` My mother.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "I open it up and skim",
                  "through the letter.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "It's the typical update",
                  "letter.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Stuff about people in the",
                  "village and what they're",
                  "up to.|",
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
                  "Some words asking about",
                  "city life. A bit about the",
                  "news`|",
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
                  "Nothing interesting, but`|",
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
                  "There's a tinge of",
                  "nostalgia embedded within",
                  "this familiar handwriting.|",
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
                  "So? How is it?|",
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
                  "You",
                  "It's just an update letter.",
                  "She sends these sometimes.|",
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
                  "I see~|",
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
                  "I place the letter aside.",
                  "I can store it somewhere",
                  "later.|",
                  "",
                  "",
                  "",
                  };
              bn::sound::stop_all();
                textbox.set_item(bn::regular_bg_items::textbox2);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Do you miss her?|",
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
                  "You",
                  "Kinda` But not really.|",
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
                  "Then` Does she miss you?|",
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
                  "Ahaha, probably.|",
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
                  "But she's always been good",
                  "at being too busy to think.|",
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
                  "How so?|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z01.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "She volunteers for community",
                  "activities`|",
                  "",
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
                  "That, and spends her time",
                  "getting caught up in books.|",
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
                  "Community activities` It",
                  "sounds nice, village life.|",
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
                  "It'd suit you~|",
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
                  "What kinds of books does",
                  "she read?|",
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
                  "Aah, typical mom stuff.|",
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
                  "She likes romance stories",
                  "mostly.|",
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
                  "And books with inspiring",
                  "female leads`|",
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
                  "When she was younger she",
                  "really liked one book`|",
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
                  "My gran` Her mom` used",
                  "to read it to her.|",
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
                  "That was when she was a ",
                  "child, of course.|",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "When I was born, she wanted",
                  "to give me a name from it.|",
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
                  "Anne if I was female.",
                  "Edward if I were male.|",
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
                  "Of course my dad wasn't",
                  "fond of either.|",
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
                  "Ehehe, the classic name",
                  "discussions.|",
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
                  "Her",
                  "That must be a hard thing",
                  "to decide on.|",
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
                  "Oh, if you had a kid, what",
                  "would you name it?|",
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
                  "I really can't imagine",
                  "having a kid`|",
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
                  "Eeh, come on!|",
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
                  "What if we woke up tomorrow", 
                  "with a baby between us?|",
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
                  "I'd question reality`|",
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
                  "And then give the baby a",
                  "name, right?|",
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
                  "So what would you name it?|",
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
                  "Uuuuum`|",
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
                  "I've never thought about",
                  "this kind of thing before.|",
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
                  "Never?|",
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
                  "Never.|",
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
                  "Uuu, fine. Then I'll tell",
                  "you mine!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "She closes in and",
                  "whispers a name into my",
                  "ear`|",
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
                  "Her",
                  "Ehehe~ What do you think?|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z40.play();
                textbox.set_item(bn::regular_bg_items::textbox);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "`Rejected.|",
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
                  "EEEEH!? WHY?|",
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
                  "We're not naming them",
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
                  "Her",
                  "Ehehe, now we're like",
                  "parents~|",
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
                  "Ahaha~|",
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
                  "So, what's your family",
                  "like?|",
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
                  "Any interesting stories?|",
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
                  "Eh? Me?|",
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
                  "Yeah. Come on, spill the",
                  "beans~|",
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
                  "I prefer my beans unspilt!|",
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
                  "Mom? Dad? Anything?|",
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
                  "Hmm` Then`|",
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
                  "I had like` An older",
                  "sister.|",
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
                  "Oooh, you did?|",
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
                  "Mhm! She's why I'm here",
                  "today.|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z10.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "She made me who I am.|",
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
                  "And your parents didn't?|",
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
                  "Pffft! Shush you!|",
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
                  "What was she like?|",
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
                  "Hmm` Mature.|",
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
                  "Classic older sister",
                  "material.|",
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
                  "Not that kind of mature!",
                  "Like a grumpy old lady.|",
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
                  "Seriously?|",
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
                  "She had charisma, and she",
                  "was funny, but`|",
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
                  "She always had bags under",
                  "her eyes.|",
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
                  "And she always looked`",
                  "Very very tired.|",
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
                  "Ah, but she was inspiring!|",
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
                  "What did she do? A",
                  "stressful job or something?|",
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
                  "Hmm` She traveled.|",
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
                  "What kind of job is",
                  "that`?|",
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
                  "She went from place to",
                  "place.|",
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
                  "Meeting new people and",
                  "and learning new things.|",
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
                  "She taught me a lot about",
                  "the world.|",
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
                  "It's like`|", 
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
                  "Before then, I didn't ",
                  "realize how big it was.|",
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
                  "There are more people and",
                  "places than I can imagine.|",
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
                  "That's right, you've",
                  "always been a city girl.|",
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
                  "Mhm, so the stories that",
                  "she would tell me`|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z12.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "They let me imagine a",
                  "world beyond my own.|",
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
                  "I realize that I'm just a",
                  "small bit of something more.|",
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
                  "That there's something",
                  "more for me to find`|",
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
                  "She sounds nice.|",
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
                  "Yeah` She was.|",
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
                  "So, role reversal! Do you",
                  "miss her?|",
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
                  "Question thief!|",
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
                  "Ahaha~|",
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
                  "I do, sometimes` But`|",
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
                  "But?|",
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
                  "You're here.|",
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
                  "When I look at you, I feel",
                  "a warmth.|",
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
                  "Something I can't describe.|",
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
                  "It fills me up entirely.|",
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
                  "Every dream and every",
                  "desire`|",
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
                  "That's what I see when",
                  "I look at you.|",
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
                  "How could I ever miss",
                  "anyone`|",
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
                  "Everything I need is right",
                  "in front of me.|",
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
                  "`!|",
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
                  "Ehehe, you're blushing.|",
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
                  "No I'm not!|",
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
                  "Yes you aaare!|",
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
                  "You've already stolen my",
                  "heart!|",
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
                  "You don't need to keep",
                  "doing it!|",
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
                  "I've got to make sure I",
                  "got everything~|",
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
                  "You did! There's nothing",
                  "left!|",
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
                  "Reeeaaally?|",
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
                  "It's true.|",
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
                  "Prove it.|",
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
                  "How?|",
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
                  "`Tell me you love me.|",
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
                  "I do that all the time! I",
                  "loooove you!|",
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
                  "Ehehe~ Then` Kiss me.|",
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
                  "Okay maybe we don't do that",
                  "all the time` But umm`|",
                  "",
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
                  "Pfft, so shy! Come come.|",
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
                  "Aaah fine! But don't try",
                  "to suffocate me this time!|",
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
                  "I never try to do that!",
                  "`Not intentionally.|",
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
                  "Suuuure you don't.|",
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
                  "Shhh, kissy time.|",
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
                  "You- MMM!|",
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
                  "Mwah!|",
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
                  "Haah! You surprised me!|",
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
              bn::sound_items::z40.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Anyway! There's your",
                  "proof!|",
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
                  "But` I initiated it. You",
                  "need to initiate!|",
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
                  "Eh? Then`|",
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
                  "We've already kissed. The",
                  "next task is harder!|",
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
                  "Eeeh? When did this become",
                  "such a large quest?|",
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
                  "Ask me on a date!|",
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
                  "Oh, easy! Let's go out",
                  "together. Wanna see a film?|",
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
                  "`Too casual.|",
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
                  "Eeeh, but that's how I",
                  "always do it!|",
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
                  "How about` You ask me to",
                  "marry you?|",
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
                  "`!|",
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
                  "You're blushing again!|",
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
                  "No I'm nooot!|",
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
                  "Ehehe, I was joking",
                  "though~|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z41.play();
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Haah! Don't shock me like",
                  "that.|",
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
                  "But I wouldn't say no~|",
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
                  "`!|",
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
                  "Pffft, so shhyyyy!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "I spent the rest of my",
                  "morning dizzy from",
                  "blushing so much.|",
                  "",
                  "",
                  "",
                  };
                textbox.set_item(bn::regular_bg_items::textbox2);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            break;
        }

        else if (d10roll == 1)
        {
           d10roll = talkrng.get_int(2, 6);
           talkrng.update();
           if(true)
            {
            bn::string_view dialogue_text_lines[] = {
              "Her",
              "Oh, did you hear about",
              "Gaulle?|",
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
              "Her",
              "Another veto apparently.|",
              "",
              "",
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
            "Do you still have that red",
            "dress?|",
            "",
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
            "Her",
            "You looked soo good in it.|",
            "",
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
                  "The neighbours have this",
                  "big plant on the balcony!|",
                  "",
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
                    "Her",
                    "It hasn't been trimmed",
                    "for months!|",
                    "",
                    "",
                    "",
                    "",
                    };
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
              "Ugh, who decided cooking",
              "broadcasts should exist?|",
              "",
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
              "Her",
              "The eating sounds drive",
              "me crazy!|",
              "",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
            break;
        }

        else if (d10roll == 5 && laptop == 1)
            {
            if(true)
                {
                bn::string_view dialogue_text_lines[] = {
                    "You",
                    "So this is the laptop?|",
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
                    "Her",
                    "Mhm.|",
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
                    "What does it even do?|",
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
                    "All kinds of things.|",
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
                    "Like`?|",
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
                    "Uuumm` You can write stuff",
                    "on it. Listen to music`|",
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
                    "Oh, you can look at",
                    "pictures!|",
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
                    "You could even edit them!|",
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
                    "Eeeh? In a little box like",
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
                    "Mhm.|",
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
                    "That's pretty amazing`|",
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
                    "It's not really that",
                    "amazing though.|",
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
                    "But wasn't it made by",
                    "people?|",
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
                    "How do people figure out",
                    "how to make this stuff?|",
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
                    "Hmm` Aliens?|",
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
                    "Haha, but really.|",
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
                    "Just think. Not long ago,",
                    "we didn't have TVs at all`|",
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
                    "We didn't have cameras",
                    "either.|",
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
                    "True`|",
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
                    "We didn't know how to copy",
                    "documents automatically.|",
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
                    "Then poof, it all",
                    "appears.|",
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
                    "But it's a series of",
                    "steps.|",
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
                    "I imagine once you've",
                    "figured out photography`|",
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
                    "You",
                    "Making a TV isn't too",
                    "crazy.|",
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
                    "And then turning a TV",
                    "into` well`|",
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
                    "Whatever this laptop",
                    "thing is`|",
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
                    "Same with cars, right?|",
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
                    "They're this big unmoving",
                    "box with a window`|",
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
                    "Behind it, an unmoving",
                    "person hovering inside.|",
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
                    "Four little circles at the",
                    "bottom are all that move.|",
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
                    "It's like seeing a box",
                    "float along the ground`|",
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
                    "But when you look all the",
                    "parts, it makes sense.|",
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
                    "Darling` You think about",
                    "things in weird ways.|",
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
                    "EH? But it's true!|",
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
                    "Next time you see a car,",
                    "look at it like that.|",
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
                    "But even with all that",
                    "said`|",
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
                    "This laptop proves there's",
                    "a lot more potential`|",
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
                    "So until we fulfil all of",
                    "that potential`|",
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
                    "You won't call anything",
                    "amazing?|",
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
                    "There's a lot more to",
                    "discover.|",
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
                    "But it comes off the back",
                    "of our previous ones.|",
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
                    "Maybe the amazing part is",
                    "the entire process.|",
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
                    "Oh! You can process files",
                    "too, with the laptop.|",
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
                    "Eh? What does that even",
                    "mean!?|",
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
                    "This laptop thing is a",
                    "growing mystery`|",
                    "",
                    "",
                    };
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
                  "Oooh, this Mr. Weirdlove",
                  "movie sounds interesting.|",
                  "",
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
                  "Her",
                  "Can we go see it?|",
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
                  "Weirdlove? Sounds weird,",
                  "love.|",
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
                  "Awwwn, you called me",
                  "love!|",
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
                  "It was for the joke!|",
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
                  "Say it again!|",
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
                  "Eh? No! You're making it",
                  "embarrassing!|",
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
                  "Eeeeh? There's nothing to",
                  "be embarrassed about~|",
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
                  "Look look. It's just us.|",
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
                  "There's no one else here~|",
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
                  "S- So!?|",
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
                  "Daaaaaarling~!|",
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
                  "I'll start a snuggle war",
                  "if you keep pushing it.|",
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
                  "Yay~ Let's do it!|",
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
