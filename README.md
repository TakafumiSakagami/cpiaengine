# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.
Requires minimal coding knowledge! ...and Butano.
Made for an article in [C-pia! Magazine](https://c-pia.github.io/). 


## Core loop:

The main gameplay loop is at
    `//scene loop`

* bgpos = 1;
Adjusts the cropping and positioning of the window that contains the background image.
There are several presets by default, stored within the `void presets` area of code in `main.cpp`.
You can change these, or add more.
Only needs to be specified if changed/updated.

* dialogue_layout = 1;
Adjusts the cropping and positioning of the window that contains the textbox image.
There are two presets by default stored within the `void presets` area of code in `main.cpp`.
1 sets it to a conventional dialogue box, while 2 takes up a large amount of the screen.
These values are also checked by `info::info` in `common_info.cpp`, which controls the text positioning.
Only needs to be specified if changed/updated.

* presets(bgpos, dialogue_layout, kuro, textbox, internal_window, external_window);  
This simply triggers the code in `void presets`, enabling the settings made by changing bgpos and dialogue_layout.
Only needs to be specified if changed/updated.


* bgimg.set_item(bn::regular_bg_items::bg01); 
Sets the background image to a `regular_bg_items` object. This is an image file, such as `bg01.bmp`.
Only needs to be specified if changed/updated.

*spimg.set_item(bn::regular_bg_items::sp01);
Sets the character sprite to a `regular_bg_items` object. This is an image file, such as `sp01.bmp`.
Only needs to be specified if changed/updated.

* bgimg.set_position(0, 0);
Sets the X and Y coordinates of the background image.
Only needs to be specified if changed/updated.

* spimg.set_position(0, 0);
Sets the X and Y coordinates of the character sprite.
Only needs to be specified if changed/updated.

* bn::string_view info_text_lines[] = {
Sets the text for the upcoming frame.
By default, there are seven lines to contain text. Lines will only update if they are specified.
e.g., if the fourth line reads "test", it'll remain that way until the fourth line is modified. For that reason, you'll need to write "" on line four whenever you want to clear "test" from the screen.
A fully cleared textbox would look like...

          bn::string_view info_text_lines[] = {
              "",
              "",
              "",
              "",
              "",
              "",
              "",
          };

Only needs to be specified if changed/updated.

* common::info info(info_text_lines, dialogue_layout, text_generator);
Triggers the code in `info::info`, from `common_info.cpp`. This is linked to `common_info.h` in the `include` folder.
This code is used to display, update and clear text. Most importantly, it stores the default positioning data of on-screen text, which may need changing to suit your UI.
Must be specified every time.

* dialogue_text_scene(bgimg, textbox, internal_window, external_window);
Presents the scene you've configured, with textbox formatting.
It's alternative is the `full_text_scene`. One of them must be specified every time.

* full_text_scene(bgimg, kuro, internal_window, external_window);
Presents the scene you've configured, with full-screen text formatting.
It's alternative is the `dialogue_text_scene`. One of them must be specified every time.

* bn::core::update();
Progresses the frame. Think of it as finalizing everything above.
Must be specified every time.


## Finding coordinates for images/text:
In the mGBA emulator, go `tools` > `view map` to find which background each element is on.
Go `Audio/Video` > `Adjust Layer Placement` to move objects around.
Once you've got everything into the right place, note down how many pixels you had to add/remove from each coordinate, and update your `presets` and `info::info` code to match.
