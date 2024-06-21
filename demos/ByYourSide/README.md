# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.
Requires minimal coding knowledge!
Made for an article in [C-pia! Magazine](https://c-pia.github.io/). 

## By Your Side Demo

This stripped-down recreation of By Your Side's life simulation routine is used to demonstrate choices, stats, flags, and graphic menus.

In By Your Side, the days pass in an endless loop. The decisions you make on a morning and on a night lead to different interactions which change the protagonist's hidden stats. The decisions you make while working through the afternoon and evening will increase your cash.

### Changes made to the template for this demo include:

A choice menu has been added, which allows you to respond to dialogue.

A map menu has been added, which allows you to travel to certain areas of the city.

A "talk to" menu has been added where you can decide how to interact with the heroine for a certain time slot. The background changes to reflect the time of day.

There are a larger number of sprites, in order to reference the heroine's outfit-changing mechanics in the original game.

Added `bn::sound_items` for voice playback.

Added `bn::sound::stop_all();` for voice cancelling.




