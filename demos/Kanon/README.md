# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.
Requires minimal coding knowledge!
Made for an article in [C-pia! Magazine](https://c-pia.github.io/). 

## Kanon Demo

This recreation of Kanon's introduction is used to demonstrate the textbox layout, custom sentence ending symbols, fading to/from white, CG implementation, voices and sound effects, music, and animation sequences. 

### Changes made to the template for this demo include:

Uses an older version of the template project. This means that...

Variables such as `bgpos` and `frames` are not global, and have to be mentioned constantly. It's a bit messier looking as a result.

There is no pause menu implemented, and certain scripts look a bit different without `menu.h`'s presence. Notably, `void presets` from `texter.h` is stored in `main.cpp` instead.

The textbox, rather than being the singular `bn::regular_bg_ptr textbox` that switches between `textbox.bmp` and `kuro.bmp` on demand, is split into `bn::regular_bg_ptr textbox` and `bn::regular_bg_ptr kuro`. As a result, many commands that demanded a mention of `textbox` in the template will (here, in the Kanon demo) also require mention of `kuro`. 

...I don't think there's any functional difference, so go with whichever you prefer aesthetically.

That's the outdated stuff out of the way! New things are:

Added white fades to `transitions.h`.

Added code to `main.cpp`'s loop for white fade handling.

Default fade color changed to white.

`sp01` is now a blank image.

`sp02` and `bg02` removed.

`sp01_fade` images removed from `spriter.h`.

`cgny01_fade` images added to `spriter.h`.

`logo` added to `spriter.h`.

`textbox`, `textbox2`, and `kuro` redesigned.

`ctc` and `fastforward` redesigned. 

`bgpos == 1` in presets (`main.cpp`) has been changed to allow for a full-screen background frame.

Repositioned `start_x` and `click to continue` icon in `texter.h`.

Repositioned `external_window` default boundaries.

Added `bn::sound_items` for voice playback.

Added `bn::sound::stop_all();` for voice cancelling.

Added `op_anim.h` for the opening animation.

Added slower versions of pans in `panner.h`.


