# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.
Requires minimal coding knowledge!
Made for an article in [C-pia! Magazine](https://c-pia.github.io/). 

## By Your Side Demo

[![Sample playthrough](https://img.youtube.com/vi/j8_eqLiX0r8/0.jpg)](https://www.youtube.com/watch?v=j8_eqLiX0r8)

This stripped-down recreation of By Your Side's life simulation routine is used to demonstrate choices, stats, flags, and graphic menus. It's a demonstration of non-linear storytelling.

In By Your Side, the days pass in an endless loop. The decisions you make on a morning and on a night lead to different interactions which change the protagonist's stats. The decisions you make while working through the afternoon will increase your cash. Along the way, flags are raised based on new knowledge or items you uncover, unlocking new scenes.

Much of the story has been removed, and the heroine's sprite expressions were left unprogrammed, but there's ~20 minutes of gameplay to take reference from.

### Changes made to the template for this demo include:

Scenes are programmed in files named like `scenes.h` rather than `main.cpp`. The `main.cpp` loop now comprises the repeating gameplay loop, within which, the usual dialogue blocks are triggered via the `scene::` command. e.g. `scene::gardeninghub` takes the player to the scenes stored in `gardeninghub` of `scenes2.h`. This makes it easier to organize the game's non-linear scenes across smaller individual files instead of having it all packed together in one.

The Pause menu is now accessed during the choice-making menus, and can be used to save and/or load the game.

A choice menu has been added, which allows you to respond to dialogue.

`menu::day` and `menu::night` have been added. The player can decide how to interact with the heroine for a certain time slot. Stats such as the date, your energy, your money, and your relationship level are displayed.

A map menu has been added, which allows you to travel to certain areas of the city.

Skipping is much faster. When R is held, these things will now be skipped: individual character generation, fades, transitions, pauses.

Music playback checks to ensure a track can't be replaced by itself, so if you trigger bgm01 while bgm01 is already playing, the song will continue as is.

The textbox graphics are different. When a name is present, `textbox.bmp` is used. When a name isn't present, we swap the textbox graphic for `textbox2.bmp` to get an extra line of space.

Pressing select no longer hides the background image.

The background graphic used for the livingroom changes to reflect the time of day and in-game progress.

In `texter.h`'s `presets`, a fourth bgpos has been added. When bgpos == 4, the background image will be fully revealed for a full-screen image display.

Added `bn::sound_items` for voice playback.

Added `bn::sound::stop_all();` for voice cancelling.

There are a larger number of sprites, in order to reference the heroine's outfit-changing mechanics in the original game.

`fader::` has several additions.




