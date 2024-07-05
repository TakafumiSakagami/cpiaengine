# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.

Made for an article in the free-to-read [C-pia! Magazine](https://c-pia.github.io/), a mag' all about oldschool games and VNs. We're always looking for writers!

![vol02](https://github.com/TakafumiSakagami/cpiaengine/assets/12238323/7c26fade-af75-4cf9-9643-f177cd00654f)![vol03](https://github.com/TakafumiSakagami/cpiaengine/assets/12238323/599df00b-6f1a-40f5-8922-bc0d7dccef10)![vol04](https://github.com/TakafumiSakagami/cpiaengine/assets/12238323/089ac878-0940-4766-89da-21c27321d34f)

## About

This is a template for the C++ engine Butano, designed to massively reduce the amount of programming knowledge required to make a VN for the GBA, allowing solo creators to focus more on writing and less on learning.

Open source demos are also provided to showcase different features.

![](Dev%20Assets/demo_kanon.png)![](Dev%20Assets/demo_sepia2.png)![](Dev%20Assets/demo_bys.png)

It should be noted that this is written in C++, and... I don't understand a lick of that language. If you're proficient with C++, maybe don't look at this. It might be a disaster, I don't know; all I know is that it works.  

## Getting started

SepiaNVL is effectively a template for Butano, so following [Butano's Getting Started guide](https://gvaliente.github.io/butano/getting_started.html) is how you should begin.

Once you have devkitARM and Butano installed, you can download SepiaNVL as a .zip file and extract it to a convenient location on your computer.

If you extract it to the `Butano` folder (alongside files such as `readme.md`, and folders like `examples`, `games`, and `common`, you're done! Otherwise you will have to edit this line in `makefile` with a text editor:

    LIBBUTANO   	:=  ../butano

You can change `../butano` to the location of the butano folder that contains `butano.mak`. For me, that's `G:\devkitPro\butano\butano`.

With that done, just open up Command Prompt, type `cd G:\devkitPro\butano\cpiaengine` (or wherever you extracted it the .zip to), and if you're on a non-C drive, type the drive you're on, such as `G:`. Press enter after each! Then type `make` and hit enter once again, and `cpiaengine.gba` will magically appear.

That's the hardest part. I promise. Copy the `cpiaengine` folder somewhere, rename it to whatever you want, and now you can begin making your novel! The main script is in `main.cpp` in the `src` folder, and more complex things are in the `include` folder.

Butano comes with plenty of general example projects, but we've added some further demos to show off SepiaNVL specifically, tucked away in the `demos` folder. These examples should help you grow familiar with the overall structure of SepiaNVL projects, and provide code for additional features. Feel free to steal whatever you need from them, code-wise. Don't steal the art or music please...

## The Essentials - Script Converter

A python script for converting written prose into programmed dialogue blocks can be found in the `Dev Assets` folder, along with other conveniences. 

A dialogue block acts as the code for each individual screen of text, and any code that occurs during that screen of text will be written into the dialogue block. They have been designed to be as simple and understandable as possible.

Here is an example:

        if(true)
            {
          bn::string_view dialogue_text_lines[] = {
              "Her",
              "How do you mean?|",
              "",
              "",
              };
          texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
          bn::core::update();
            }

This minimal dialogue block contains only the code required to display text. From there, you can add in visuals or audio, trigger animations, open up menus, or set flags with individual lines of code. Those will be listed below.

More details on the converter script can be found somewhere in the `Dev Assets` folder.

## The Demos

### Kanon

![](Dev%20Assets/demo_kanon.png)

The Kanon demo was built using an early version of SepiaNVL, so it's a bit messy. It recreates the opening dialogue of Key's Kanon, as well as part of the intro movie.

Focus points include: white fades instead of black fades, CGs, transitions, pans, music and voice playback, a namebox-less textbox, and a traditional presentation style.

### By Your Side

![](Dev%20Assets/demo_bys.png)

The By Your Side demo is a recreation of the core gameplay loop of Kyacchi22's By Your Side. It's a menu-based dating sim with a non-linear progression.

Focus points include: a branching script, image menus, choices, stats, flags, rng, save points, CGs, voice playback, and a traditional presentation style.

If you want to organize your scenes using separate files rather than writing everything into `main.cpp`, look here!

# The Template

## main.cpp - Initial settings, flags, and dialogue blocks!

The "gameplay" truly begins at
    `//scene loop`

The following will explain the lines of code written into various dialogue blocks.

### bgpos = 1;
 
Adjusts the cropping and positioning of the window that contains the background image.

There are several presets by default, stored within the `void presets` area of code in `texter.h`.

You can change these, or add more.

Only needs to be specified if changed/updated.


###  dialogue_layout = 1;
 
Adjusts the cropping and positioning of the window that contains the textbox image.

There are two presets by default stored within the `void presets` area of code in `texter.h`.

1 sets it to a conventional dialogue box, while 2 takes up a large amount of the screen.

These values are also checked by `dialogue` in `texter.h`.

Only needs to be specified if changed/updated.

###  presets(bgpos, dialogue_layout, textbox, internal_window, external_window);

This simply triggers the code in `void presets`, which enables the settings made by changing bgpos and dialogue_layout.

Only needs to be specified if the bgpos or dialogue_layout are changed.


###  bgimg.set_item(bn::regular_bg_items::bg01);

For background images.
  
Sets the background image to a `regular_bg_items` object. This is an image file, such as `bg01.bmp`.

Only needs to be specified if changed/updated.

###  spimg.set_item(bn::regular_bg_items::sp01);

For character sprites and CGs.
  
Sets the character sprite to a `regular_bg_items` object. This is an image file, such as `sp01.bmp`.

Only needs to be specified if changed/updated.

###  bgimg.set_position(0, 0);
  
Sets the X and Y coordinates of the background image.

Only needs to be specified if changed/updated.

###  spimg.set_position(0, 0);
  
Sets the X and Y coordinates of the character sprite.

Only needs to be specified if changed/updated.

###  bn::string_view dialogue_text_lines[] = {}
  
Sets the text for the upcoming frame.

By default, there are seven lines to contain text. Lines will only update if they are specified.

e.g., if the fourth line reads "test", it'll remain that way until the fourth line is modified. For that reason, you'll need to write "" on line four whenever you want to prevent "test" from appearing on the screen.

A fully cleared textbox would look like...

          bn::string_view dialogue_text_lines[] = {
              "",
              "",
              "",
              "",
              "",
              "",
              "",
          };

Only needs to be specified if changed/updated... but you should probably leave at least a blank one in every dialogue block, just to be safe.

### fade::in_fast();

Fades the scene in from black. 

Should be placed before `texter::dialogue` to fade in before text displays, or you can place it after to fade into a scene where text is already present.

There is also `fade::in_med();` and `fade::in_slow();`.

_fast = 10 frames = 1/6 of a second.

_med = 30 frames = 1/2 of a second.

_slow = 60 frames = 1 second.

`fade::in` has a 1-second pause before triggering. You can remove this, if you wish, in `transitions.h` by ommitting the first 4 lines of any given `in_` void, you can also make your own.

Only needs to be specified when transitioning from black.

### panner::left_to_right(bgimg);

Triggers the mentioned panner in `panner.h`.

This moves `bgimg` without moving the window containing it, allowing you to pan over a cropped image in a manner reminiscient of Mahoyo or the Tsukihime remake. You can, of course, make your own pans by writing a new one into `panner.h`.

Only needs to be specified when triggering a pan.

### fader::sp01_in(spimg, textbox);

Triggers the mentioned fader in `spriter.h`, which is really just an animation sequence taking up the `spimg` slot (by default). It's very flexible, and basically allows you to animate anything you wish.

You can make custom fades/transitions for `spimg` or `bgimg` in a sprite editor, then build them as preset animations within `spriter.h` to reuse whenever needed.

An example 3-frame fade animation can be made by applying the provided dither patterns over any images you wish to make a fader for. An Aseprite document showing the overlays in use is also provided. Check `Dev_Assets`.

![](Dev%20Assets/doc_sprite_transition_video.gif)

![](Dev%20Assets/sprite_transition1.png)![](Dev%20Assets/sprite_transition2.png)![](Dev%20Assets/sprite_transition3.png)

###  texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
  
Triggers the dialogue creator in `texter.h`.

This code is used to display, update and clear the scene.
It presents the text, the sprites, the backgrounds, and handles pausing and input-checking while dialogue is displayed. From an A-press to progress text, to an R-hold to skip, it all gets handled here!

Most importantly, it stores the default positioning data of on-screen text, as well as the key config, both of which may need changing to suit your needs.

Must be specified every time, otherwise the game will speed over to the next dialogue block.

###  bn::core::update();
  
Progresses the frame by 1. Think of it as finalizing everything above it.

Must be specified every time you wish the game to catch up to the code fed to it.

### fade::out_fast();

Fades the scene out to black.

There is also `fade::out_med();` and `fade::out_slow();`.

_fast = 10 frames = 1/6 of a second.

_med = 30 frames = 1/2 of a second.

_slow = 60 frames = 1 second.

Only needs to be specified when transitioning to black. For white or colored fades, check the Kanon demo; it requires a few extra lines of code.

### frames = 20;

Sets the amount of frames that `waiter` will wait for.

In the above example, he'll wait for 20 frames, or 1/3 of a second.

### waiter(); 

Gives the waiter a job. He will wait for the amount of frames specified in the `frames` flag. I love him.

### Adding new functions

As this Engine is functionally just a template for Butano, you can expand it freely, should you have the knowledge.

In a similar way to how `texter::dialogue` or `fade::in_fast` is handled, you can add almost anything into this loop. A choice, a menu, input, character customization, gameplay segments, etc... Some examples of this can be found in the demo projects.

## main.cpp

Aside from the main loop, there is a lot of other code in here.

### Global Variables

Near the top of the file, you can set up your system flags, default stats, and anything the game would need to remember.

### \#include

If you make any new .cpp or .h files, you'll probably need to include them after the global variables have been set. The By Your Side demo, for example, has `#include "scenes.h"` to include dialogue blocks that are written in a file named `scenes.h`.

Below that, images are defined here. Any backgrounds, sprites, fonts, textboxes, animations, etc... need to be here.

## texter.h

Texter contains the code that handles dialogue rendering, button inputs, and some UI elements.

It takes two default layouts (1 and 2) and configures the screen to fit the chosen layout. Then it renders text fed to it from main.cpp, displaying the dialogue character by character, as sprites.

When a line is complete, the sprites used to build it will be swapped for compressed ones containing multiple characters, to make it harder to hit the sprite limit.

Rendering will continue automatically until fed a sentence ending symbol.

Upon reaching a sentence ending symbol, the game will pause to wait for player input, and display a `click to continue` animation where the sentence ending symbol is.

While this pause for player input is occuring, the player can press B to hide the UI, or Select to hide the background image. Start brings up a pause menu.

While the player is holding fast forward (bound to R by default), these pauses will be ignored. The game will not wait for the player to press A after a sentence ends.

While the player is holding fast forward, a `fast forward` animation will display in the bottom right corner of the screen.

Fast forward cannot be enabled during the pause triggered by a sentence ending symbol.

All of these functions can be changed or removed.

The sentence ending symbol can be found on the line:

     if(last_char == '|') {

By default, this character is |, which with the default font, appears to be invisible. You can change this if you wish, though I suggest retaining a manual sentence ending symbol rather than relying on automation. An example alternative is...

     if(last_char == '!' || last_char == '?' || last_char == '.' || last_char == '|') {

This would break every time the script runs into an exclamation mark, a question mark, a period, or the same | as before. This could be useful for games that use a full-screen textbox and need to break mid-paragraph frequently, but using !, ? and . within quotation marks will cause some problems that don't exist with the manual |-only method.

### Click to Continue

The click-to-continue icon (`ctc.bmp` and `click_to_continue`) is positioned and animated here.

### Fast Forward
The fast forward icon (`fastforward.bmp` and `fast_forward`) is positioned and animated here.

## menu.h

### struct savedata

Remember those global variables we talked about? If any of them are written here, they can be stored into the `savedata` structure. The pause menu further down makes use of this to save and load variables. Butano's sram demo will be useful for understanding it.

The By Your Side demo makes use of save points, but in the template project there's no real functionality to this.

### namespace menu

Here we have `menu::pause`, which is... a pause menu. There's no actual functionality programmed into it, but I added it in for demonstration purposes. The skeleton of saving and loading is here, at least.

`menu::pause` is triggered by `texter::dialogue`, during the input checking portion signaled in-game by the click to continue icon. In some demos, the pause menu is triggered by other means, and in some, it is absent entirely.

If the player presses start, a simple image-based menu will appear. The player's cursor is stored as a value named `menu_pos`, which updates whenever the player presses up or down.

By default, `menu_pos` is set to 1. If the player pressed down twice, `menu_pos` would become 3.

If the player presses A while `menu_pos` is 3, the third option on the menu will be triggered.

### Other menus?

The By Your Side demo has further menus added into this namespace. They're all basically the same code, so comparing them will help you get a clear picture of how to make your own.

## panner.h

The panner feature allows you to pan `bgimg` easily, by prebuilding camera movements as presets. Four simple prebuilt movements are included. `right_to_left`, `left_to_right`, `top_to_bottom` and `bottom to top`.

The built-in pans assume a full-screen image. The screensize is 240 pixels wide and 160 pixels tall, so the pans are designed to never surpass these values.

![](Dev%20Assets/pan_chart.png)

The example background image (bg01) is 256 pixels wide and 256 pixels tall. This gives us 16 extra pixels in width to pan across (256 - 240) and 96 in height (256-160).

The positioning coordinates for the panner begin at the center of the background image. As a result background image ends on the x-axis at -8 pixels and +8 pixels on either side. 16 pixels in total.
On the y-axis, -48 and +48. 96 in total.

If you are using a smaller window for your backgrounds, you can increase the length of these pans by the amount of pixels being cropped. If you had a 10px border, for example, taking up some of the screen space, you could pan a further 10 pixels in either direction.

Similarly, if you're using a larger image, you could write a custom pan that allows for a greater range of movement.

## Finding coordinates for images/text
In the mGBA emulator, go `tools` > `view map` to find which background each element is on.

Go `Audio/Video` > `Adjust Layer Placement` to move objects around.

Once you've got everything into the right place, note down how many pixels you had to add/remove from each coordinate.
