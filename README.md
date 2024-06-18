# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.
Requires minimal coding knowledge!
Made for an article in [C-pia! Magazine](https://c-pia.github.io/). 

![](Dev%20Assets/demo_kanon.png)![](Dev%20Assets/demo_sepia2.png)![](Dev%20Assets/demo_sepia.png)

## Getting started

SepiaNVL is effectively a template for Butano, so following [Butano's Getting Started guide](https://gvaliente.github.io/butano/getting_started.html) is how you should begin.

Butano comes with plenty of general example projects, but we've added some further demos to show off SepiaNVL specifically. Feel free to steal whatever you need from them, code-wise. Don't steal the art or music please...

It should be noted that this is written in C++, and... I don't understand a lick of that language. If you're proficient with C++, maybe don't look at this. It might be a disaster, I don't know; all I know is that it works. 


## main.cpp

The main gameplay loop is at
    `//scene loop`

### bgpos = 1;
 
Adjusts the cropping and positioning of the window that contains the background image.

There are several presets by default, stored within the `void presets` area of code in `main.cpp`.

You can change these, or add more.

Only needs to be specified if changed/updated.


###  dialogue_layout = 1;
 
Adjusts the cropping and positioning of the window that contains the textbox image.

There are two presets by default stored within the `void presets` area of code in `main.cpp`.

1 sets it to a conventional dialogue box, while 2 takes up a large amount of the screen.

These values are also checked by `dialogue` in `texter.h`.

Only needs to be specified if changed/updated.

###  presets(bgpos, dialogue_layout, kuro, textbox, internal_window, external_window);

This simply triggers the code in `void presets`, enabling the settings made by changing bgpos and dialogue_layout.

Only needs to be specified if changed/updated.


###  bgimg.set_item(bn::regular_bg_items::bg01);
  
Sets the background image to a `regular_bg_items` object. This is an image file, such as `bg01.bmp`.

Only needs to be specified if changed/updated.

###  spimg.set_item(bn::regular_bg_items::sp01);
  
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

Only needs to be specified if changed/updated.

### fade::in_fast();

Fades the scene in from black. 

Should be placed before `common::info info` to fade in before text displays, or you can place it before a `_text_scene` to fade into a scene where text is already present.

There is also `fade::in_med();` and `fade::in_slow();`.

_fast = 10 frames = 1/6 of a second.

_med = 30 frames = 1/2 of a second.

_slow = 60 frames = 1 second.

`fade::in` has a 1-second pause before triggering. You can remove this, if you wish, in `transitions.h` by ommitting the first 4 lines of any given `in_` void and making `frames = 2;` into `int frames = 2;`.

Only needs to be specified when transitioning from black.

### panner::left_to_right(bgimg);

Triggers the mentioned panner in `panner.h`.

This moves `bgimg` without moving the window containing it.

Only needs to be specified when triggering a pan.

### fader::sp01_in(spimg, textbox);

Triggers the mentioned fader in `spriter.h`.

You can make custom fades/transitions for `spimg` or `bgimg` in a sprite editor, then build them as preset animations within `spriter.h` to reuse whenever needed.

An example 3-frame fade animation can be made by applying the provided dither patterns over any images you wish to make a fader for. An Aseprite document showing the overlays in use is also provided.

![](Dev%20Assets/sprite_transition1.png)![](Dev%20Assets/sprite_transition2.png)![](Dev%20Assets/sprite_transition3.png)

###  texter::dialogue(dialogue_text_lines, dialogue_layout, bgimg, kuro, textbox, internal_window, external_window, text_generator);
  
Triggers the dialogue creator in `texter.h`.

This code is used to display, update and clear the scene.
It presents the text, the sprites, the backgrounds, and handles pausing and input-checking. From an A-press to progress text, to an R-hold to skip, it all gets handled here!

Most importantly, it stores the default positioning data of on-screen text, as well as the key config, both of which may need changing to suit your needs.

Must be specified every time.

###  bn::core::update();
  
Progresses the frame. Think of it as finalizing everything above.

Must be specified every time.

### fade::out_fast();

Fades the scene out to black.

There is also `fade::out_med();` and `fade::out_slow();`.

_fast = 10 frames = 1/6 of a second.

_med = 30 frames = 1/2 of a second.

_slow = 60 frames = 1 second.

Only needs to be specified when transitioning to black.

### frames = 20;

Sets the amount of frames that `waiter` will wait for.

In the above example, he'll wait for 20 frames, or 1/3 of a second.

### waiter(frames); 

Gives the waiter a job. He will wait for the amount of frames specified in the `frames` flag.  

### Adding new functions

As this Engine is functionally just a template for Butano, you can expand it freely, should you have the knowledge.

In a similar way to how texter:dialogue is handled, you can add almost anything into this loop. A choice, a menu, input, character customization, gameplay segments, etc... 

## texter.h

Texter contains the code that handles dialogue rendering, button inputs, and some UI elements.

It takes two default layouts (1 and 2) and configures the screen to fit the chosen layout. Then it renders text fed to it from main.cpp, displaying the dialogue character by character, as sprites.

When a line is complete, the sprites used to build it will be swapped for compressed ones containing multiple characters, to make it harder to hit the sprite limit.

Rendering will continue automatically until fed an exclamation mark, a question mark, a quotation mark, or a period. These are sentence ending symbols.

Upon reaching a sentence ending symbol, the game will pause to wait for player input, and display a `click to continue` animation to the right of the sentence ending symbol.

While this pause for player input is occuring, the player can press B to hide the UI, or Select to hide the background image.

While the player is holding fast forward (bound to R by default), these pauses will be ignored. The game will not wait for the player to press A after a sentence ends.

While the player is holding fast forward, a `fast forward` animation will display in the bottom right corner of the screen.

Fast forward cannot be enabled during the pause triggered by a sentence ending symbol.

### Click to Continue

The click-to-continue icon (`ctc.bmp` and `click_to_continue`) is positioned and animated here.

### Fast Forward
The fast forward icon (`fastforward.bmp` and `fast_forward`) is positioned and animated here.

## panner.h

The panner feature allows you to pan `bgimg` easily, by prebuilding camera movements as presets. Four simple prebuilt movements are included. `right_to_left`, `left_to_right`, `top_to_bottom` and `bottom to top`.

The built-in pans assume a full-screen image. The screensize is 240 pixels wide and 160 pixels tall, so the pans are designed to never surpass these values.

![](Dev%20Assets/pan_chart.png)

The example background image (bg01) is 256 pixels wide and 256 pixels tall. This gives us 16 extra pixels in width to pan across (256 - 240) and 96 in height (256-160).

The positioning coordinates for the panner begin at the center of the background image. As a result background image ends on the x-axis at -8 pixels and +8 pixels on either side. 16 pixels in total.
On the y-axis, -48 and +48. 96 in total.

If you are using a smaller window for your backgrounds, you can increase the length of these pans by the amount of pixels being cropped. If you had a 10px border, for example, taking up some of the screen space, you could pan a further 10 pixels in either direction.



## Finding coordinates for images/text
In the mGBA emulator, go `tools` > `view map` to find which background each element is on.

Go `Audio/Video` > `Adjust Layer Placement` to move objects around.

Once you've got everything into the right place, note down how many pixels you had to add/remove from each coordinate.
