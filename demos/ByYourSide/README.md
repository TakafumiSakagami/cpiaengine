# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.
Requires minimal coding knowledge!
Made for an article in [C-pia! Magazine](https://c-pia.github.io/). 

## By Your Side Demo

This stripped-down recreation of By Your Side's life simulation routine is used to demonstrate choices, stats, flags, and graphic menus.

In By Your Side, the days pass in an endless loop. The decisions you make on a morning and on a night lead to different interactions which change the protagonist's stats. The decisions you make while working through the afternoon will increase your cash. Along the way, flags are raised based on new knowledge or items you uncover, unlocking new scenes.

### Changes made to the template for this demo include:

Scenes are programmed in `scenes.h` rather than `main.cpp`. The `main.cpp` loop now comprises the repeating gameplay loop, within which, the usual dialogue blocks are triggered via the `scene::` command. e.g. `scene::talk1` takes the player to the scenes stored in `talk1` of `scenes.h`. This makes it easier to organize the game's non-linear scenes across smaller individual files instead of having it all packed together in one.

A choice menu has been added, which allows you to respond to dialogue.

A map menu has been added, which allows you to travel to certain areas of the city.

`menu::day` and `menu::night` have been added. The player can decide how to interact with the heroine for a certain time slot. The background changes to reflect the time of day, and stats such as the date, your energy, your money, and your relationship level are displayed.

The Pause menu is now accessed during the choice-making menus, and can be used to save and/or load the game.

In `texter.h`'s `presets`, a fourth bgpos has been added. When bgpos == 4, the background image will be fully revealed for a full-screen image display.

There are a larger number of sprites, in order to reference the heroine's outfit-changing mechanics in the original game.

Added `bn::sound_items` for voice playback.

Added `bn::sound::stop_all();` for voice cancelling.




