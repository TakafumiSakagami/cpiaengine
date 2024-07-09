
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
/////                     Gardening                   /////
///////////////                             ///////////////
///////////////////////////////////////////////////////////

    void gardeninghub(bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator)
    {
        while(true)
        {
            //Set the scene
            workrng.update();
            spimg.set_visible(false);
            bgpos = 4;                                                                               
            dialogue_layout = 1;         
            presets(textbox, internal_window, external_window);              
            bgimg.set_item(bn::regular_bg_items::bg00);                                             
            spimg.set_item(bn::regular_bg_items::sp01);                                             
            bgimg.set_position(-8, 0);                                                            
            spimg.set_position(0, 48);                                                               
            //Text
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Hmm? Garden?|",
                  "",
                  "",
                  };
              fader::sp01_in(spimg);  
              spimg.set_visible(true);
              bn::sound::stop_all();
              bn::sound_items::z00.play();
                textbox.set_item(bn::regular_bg_items::textbox);
              texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();               
            }
            
            //scenes 
            if (garden < 1)
            {
                energy -= 2;
                garden += 2;
                relationship += 1;        
                findseeds = 1;    
                if(true)
                {
                bn::string_view dialogue_text_lines[] = {
                    "I decide to ask about",
                    "gardening.|",
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
                    "I didn't think you were",
                    "interested in that stuff.|",
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
                    "You",
                    "You're interested in it,",
                    "right?|",
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
                    "So I want to know more",
                    "about it.|",
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
                    "You do?|",
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
                    "Yeah.|",
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
                    "Ehehe~ I'll be the teacher",
                    "then.|",
                    "",
                    "",
                    };
                bn::sound::stop_all();
                bn::sound_items::z43.play();
                texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();
                }
                fade::out_fast();
                bgimg.set_item(bn::regular_bg_items::bg06);
                fade::in_fast();
              if(true)
                {
                bn::string_view dialogue_text_lines[] = {
                    "We head out onto the",
                    "balcony.|",
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
                    "Unfortunately there's not",
                    "much room out here, but`|",
                    "",
                    "",
                    "",
                    };
                bn::sound::stop_all();
                bn::sound_items::z50.play();
                textbox.set_item(bn::regular_bg_items::textbox);
                texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();
                }
              if(true)
                {
                bn::string_view dialogue_text_lines[] = {
                    "Her",
                    "There's enough space for a",
                    "few planties!|",
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
                    "It looks sunny out here at",
                    "least.|",
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
                    "Aah, but that'll burn a",
                    "lot of plants`|",
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
                    "Eeh, they can burn? That",
                    "seems kinda cruel.|",
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
                    "Think of it like eating",
                    "chilli.|",
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
                    "Right. Giant UV deathray",
                    "chilli.|",
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
                    "Mhm, exactly.|",
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
                    "Look look, this is baby",
                    "me.|",
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
                    "She points to a small pot",
                    "of red and pink flowers.|",
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
                    "Her",
                    "Geranium! Doesn't it look",
                    "like me?|",
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
                    "Oooh, you're right. It",
                    "looks like your hair!|",
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
                    "Ah but the redder ones",
                    "look like Euon.|",
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
                    "Euon?|",
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
                    "Uuuh, an old friend. She's",
                    "all red and green.|",
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
                    "Like Euonymus?|",
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
                    "Yeah, I think that was her",
                    "full name.|",
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
                    "Eh wait, how'd you know?|",
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
                    "Oh` I meant the type of",
                    "plant. Euonymus.|",
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
                    "There's a Euon plant",
                    "too!?|",
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
                    "Mhm. Plenty.|",
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
                    "You",
                    "Do I get a plant then`?|",
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
                    "Hmmm` Maybe?|",
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
                    "Eeeeh?|",
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
                    "How about this`|",
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
                    "If you find some seeds,",
                    "we'll plant them here.|",
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
                    "Then whatever grows from",
                    "them will be your plant!|",
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
                    "Sounds fun. I'll keep an",
                    "eye out then` Maybe.|",
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
                    "You better be quick~ It",
                    "might get away from you.|",
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
                    "The seeds will roll in fear",
                    "when they hear me come.|",
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
                    "Oh no! The big scary",
                    "seedgrabber!|",
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
                    "Ahaha, but I'll bring them",
                    "to a nice home. To you.|",
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
                    "I'll take care of them~",
                    "Little baby planties.|",
                    "",
                    "",
                    };
                texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();
                }
              if(true)
                {
                bn::string_view dialogue_text_lines[] = {
                    "We watered the plants.|",
                    "",
                    "",
                    };
                textbox.set_item(bn::regular_bg_items::textbox2);
                texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();
                }
            break;
            }
            else if (seedsget == 1)
            {
                energy -= 1;
                garden += 4;
                relationship += 2;        
                seedsget = 0;     
                protagplant = 1;  
              if(true)
                {
                bn::string_view dialogue_text_lines[] = {
                    "Her",
                    "Oh, did you get the",
                    "seeds?|",
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
                    "Oooh, let's see~ What did",
                    "you get?|",
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
                    "Uuuumm` I'm not sure.|",
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
                    "Then` That might be a",
                    "problem.|",
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
                    "Can't we just grow them",
                    "and see?|",
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
                    "We'll have to.|",
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
                    "I'll just have to take",
                    "special care of it~|",
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
                    "Then it really will be",
                    "like me.|",
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
                    "Ehehe~ Hopefully a mini",
                    "you grows.|",
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
                    "It better not steal any of",
                    "my portions of love.|",
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
                    "You don't get a portion!",
                    "You get it all!|",
                    "",
                    "",
                    };
                texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();
                }
              if(true)
                {
                bn::string_view dialogue_text_lines[] = {
                    "We watered the plants.|",
                    "",
                    "",
                    };
                textbox.set_item(bn::regular_bg_items::textbox2);
                texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();
                }
                
            break;
            }
            else if (garden == 1)
            {
                energy -= 2;
                garden += 2;
                relationship += 1;
             if(true)
                {
               bn::string_view dialogue_text_lines[] = {
                   "Her",
                   "Oh, did you get the",
                   "seeds?|",
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
                   "No? You should hurry!|",
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
                   "There's no rush.|",
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
                   "Isn't gardening all about",
                   "patience?|",
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
                   "True` But`|",
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
                   "But?|",
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
                   "The sun won't shine on us",
                   "forever you know?|",
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
                   "Eeeh? What does that",
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
                   "You",
                   "The sun will always be",
                   "here. At least as long as",
                   "we're here.|",
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
                   "You think?|",
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
                   "It won't just go out.|",
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
                   "It might pop!|",
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
                   "What is it, a bubble!?|",
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
                   "A big burny bubble.|",
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
                   "Anyway, shall we water the",
                   "plants?|",
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
                   "Oh, sure~|",
                   "",
                   "",
                   };
               texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
               bn::core::update();
                }
                fade::out_fast();
                bgimg.set_item(bn::regular_bg_items::bg06);
                fade::in_fast();
             if(true)
                {
               bn::string_view dialogue_text_lines[] = {
                   "We watered the plants.|",
                   "",
                   "",
                   };
                textbox.set_item(bn::regular_bg_items::textbox2);
               texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
               bn::core::update();
                }
            break;
            }
            else if (garden > 1)
            {
                if (garden >= 10)
                {
                    energy = 0;
                    garden += 2;
                    relationship += 2;
                    if(true)
                    {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "You're really getting into",
                          "gardening, aren't you~?|",
                          "",
                          "",
                          };
                textbox.set_item(bn::regular_bg_items::textbox);
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                    }
                fade::out_fast();
                bgimg.set_item(bn::regular_bg_items::bg06);
                fade::in_fast();
                    if(true)
                        {
                      bn::string_view dialogue_text_lines[] = {
                          "We watered the plants.|",
                          "",
                          "",
                          };
                textbox.set_item(bn::regular_bg_items::textbox2);
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                        }
            break;
                    
            }
                else
                {
                    energy = 0;
                    garden += 2;
                    relationship += 1;
                    if(true)
                        {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Time to garden again!|",
                          "",
                          "",
                          };
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                        }
                fade::out_fast();
                bgimg.set_item(bn::regular_bg_items::bg06);
                fade::in_fast();
                    if(true)
                        {
                      bn::string_view dialogue_text_lines[] = {
                          "Her",
                          "Ehehe~|",
                          "",
                          "",
                          };
                        bn::sound::stop_all();
                        bn::sound_items::z43.play();
                textbox.set_item(bn::regular_bg_items::textbox);
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                        }
                    if(true)
                        {
                      bn::string_view dialogue_text_lines[] = {
                          "We watered the plants.|",
                          "",
                          "",
                          };
                textbox.set_item(bn::regular_bg_items::textbox2);
                      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
                      bn::core::update();
                        }
            break;
                    
                }
        } 
        }   
   }
}