
#include "bn_sound_actions.h"

#include "bn_sound_item.h"
#include <bn_sound_items.h>

//Sprites
#include <bn_regular_bg_items_sp01.h>
#include <bn_regular_bg_items_sp02.h>
//Backgrounds
#include <bn_regular_bg_items_bg00.h>
#include <bn_regular_bg_items_bg00_n.h>
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

    void talk1(int date, int energy, int money, int relationship, int day19scene, int laptop, int bgpos, int dialogue_layout, bn::regular_bg_ptr& spimg, bn::regular_bg_ptr& bgimg, bn::regular_bg_ptr& textbox, bn::rect_window& internal_window, bn::rect_window& external_window, bn::sprite_text_generator& text_generator, bn::random& talkrng)
    {
        while(true)
        {
            //RNG
            talkrng.update();
            //talkrng.update();
            int d10roll = talkrng.get_int(1, 6);
            talkrng.update();
            //Set the scene
            spimg.set_visible(false);
            bgpos = 4;                                                                                //Back panel settings
            dialogue_layout = 1;                                                                      //Set layout. 1 = textbox, 2 = fullscreen
            presets(bgpos, dialogue_layout, textbox, internal_window, external_window);               //Code to trigger settings
            bgimg.set_item(bn::regular_bg_items::bg00);                                               //Set background to bg01
            spimg.set_item(bn::regular_bg_items::sp01);                                               //Set sprite to sp01
            bgimg.set_position(-8, 0);                                                                //Set background position
            spimg.set_position(0, 48);                                                                //Set sprite position
            //Text
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Hmm? You want to talk?|",
                  "",
                  "",
                  };
              spimg.set_visible(true);
              bn::sound::stop_all();
              bn::sound_items::z00.play();
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
        }

        //scenes
        if (date >= 19 && day19scene == 0)
        {
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Oh, by the way`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "I walk over to the table",
                  "and look through a small",
                  "pile of papers.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "Flicking through them all,",
                  "I happen upon a signed",
                  "envelope.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "The name scribed atop the",
                  "seal is an all too",
                  "familiar one.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "Ida` My mother.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "I open it up and skim",
                  "through the letter.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "It's the typical update",
                  "letter.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "Stuff about people in the",
                  "village and what they're",
                  "up to.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "Some words asking about",
                  "city life. A bit about the",
                  "news`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "Nothing interesting,",
                  "but there's a tinge of",
                  "nostalgia embedded within",
                  "this familiar handwriting.|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Ah` It's just an update",
                  "letter. She sends these",
                  "sometimes.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "I place the letter aside.",
                  "I can store it somewhere",
                  "later.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Ahaha, probably. But she's",
                  "always been good at",
                  "staying too busy to think.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "She volunteers for community",
                  "activities, and spends her time",
                  "getting caught up in books.|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "She likes romance stories",
                  "mostly. And books with",
                  "inspiring female leads`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "When she was younger she",
                  "really liked this one",
                  "book`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "My gran` Her mom` She",
                  "used to read it to her",
                  "when she was a child.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "And so when I was born,",
                  "she really wanted to name",
                  "me after it.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Ehehe, the classic name",
                  "discussions. That must be",
                  "a hard thing to decide on.|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z42.play();
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Eeh, come on! What if we",
                  "woke up tomorrow and there",
                  "was a baby between us?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "And then give the baby a",
                  "name! So what would you",
                  "name it?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Uuuuum` I've never",
                  "really thought about this",
                  "kind of thing before.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "She gets close and",
                  "whispers a name into my",
                  "ear`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "So, what's your family",
                  "like? Any interesting",
                  "stories?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "Mhm! She's why I'm here",
                  "today. She made me who I",
                  "am.|",
                  "",
                  "",
                  };
              bn::sound::stop_all();
              bn::sound_items::z10.play();
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "No no, not that kind of",
                  "mature. Like a grumpy old",
                  "lady.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "She had charisma, and she",
                  "was funny, but she always",
                  "had bags under her eyes.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "What did she do? Did she",
                  "have a stressful job or",
                  "something?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "She went from place to",
                  "place, meeting new people",
                  "and learning new things.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "It's like` Before then I",
                  "didn't realize how big it",
                  "was.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "There were more people and",
                  "places out there than I ",
                  "could imagine.|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "I realized that my",
                  "existence was just a small",
                  "part of something more.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "That there was something",
                  "for me to find`|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "When I look at you, I feel",
                  "a warmth. Something I",
                  "can't describe.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "It fills me up entirely.",
                  "Every dream and every",
                  "desire`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "How could I ever miss",
                  "anyone when everything I",
                  "need is right here?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "You've already stolen my",
                  "heart! You don't need to",
                  "keep doing it!|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Okay maybe we don't do",
                  "that all the time` But",
                  "umm`|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "You",
                  "Oh, easy! Let's go out",
                  "together. Wanna see a",
                  "movie?|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "",
                  "I spent the rest of my",
                  "morning dizzy from",
                  "blushing so much.|",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
              bn::core::update();
            }
            break;
        }

        if (d10roll == 1)
        {
            bn::string_view dialogue_text_lines[] = {
              "Her",
              "Oh, did you hear about",
              "Gaulle?|",
              "",
              "",
              };
            texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
            bn::core::update();
            bn::string_view dialogue_text_lines[] = {
              "Her",
              "Another veto apparently.|",
              "",
              "",
              "",
              "",
              };
            texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
            bn::core::update();
            break;
        }

        if (d10roll == 2)
        {
        bn::string_view dialogue_text_lines[] = {
            "Her",
            "Do you still have that red",
            "dress?|",
            "",
            "",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();
        bn::string_view dialogue_text_lines[] = {
            "Her",
            "You looked soo good in it.|",
            "",
            "",
            "",
            };
        texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
        bn::core::update();        
        break;
        }

        if (d10roll == 3)
        {
            if(true)
            {
              bn::string_view dialogue_text_lines[] = {
                  "Her",
                  "The neighbours have this",
                  "big plantie on the balcony!|",
                  "",
                  "",
                  "",
                  };
              texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();
            }
            break;
        }

        if (d10roll == 4)
        {
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
          texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
          texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }
            break;
        }
   
        if (d10roll == 5 && laptop == 1)
            {
            if(true)
                {
                bn::string_view dialogue_text_lines[] = {
                    "You",
                    "So this is the laptop?|",
                    "",
                    "",
                    };
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
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
                texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);
                bn::core::update();
                }
            break;
        }
        }
    }
}