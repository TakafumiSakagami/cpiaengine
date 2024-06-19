# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.
Requires minimal coding knowledge!
Made for an article in [C-pia! Magazine](https://c-pia.github.io/). 

## Kanon Demo

This recreation of Kanon's introduction is used to demonstrate the textbox layout, custom sentence ending symbols, fading to/from white, CG implementation, voices and sound effects, music, and animation sequences. 

### Changes made to the template for this demo include:

`common_fixed_8x16_font.bmp` has been edited to make \` into … .

" has been edited to look slimmer.

Also, | has been changed to an invisible character, to act as a sentence ending symbol.

Added white fades to `transitions.h`.

Added code to `main.cpp`'s loop for white fade handling.

Default fade color changed to white.

`sp01` is now a blank image.

`sp02` and `bg02` removed.

`sp01_fade` images removed from spriter.h.

`cgny01_fade` images added to spriter.h.

`textbox`, `textbox2`, and `kuro` redesigned.

`ctc` and `fastforward` redesigned. 

`bgpos == 1` in presets (`main.cpp`) has been changed to allow for a full-screen background frame.

Moved `start_x` and `click to continue` icon in `texter.h`.

Moved `external_window` default boundaries.

Added `bn::sound_items` for voice playback.



