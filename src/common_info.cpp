/*
 * Copyright (c) 2020-2024 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#include "common_info.h"

#include "bn_keypad.h"
#include "bn_colors.h"
#include "bn_display.h"
#include "bn_sprite_text_generator.h"
#include "bn_sprite_palette_ptr.h"

namespace common
{
namespace
{
    constexpr bn::fixed y_inc = 16;
    constexpr bn::fixed lb = 16;
    constexpr bn::fixed start_x = -94;
    constexpr bn::fixed start_y = -lb * 3;
    constexpr bn::fixed text_x_limit = 208;
}

info::info(const bn::span<const bn::string_view>& text_lines,
           bn::sprite_text_generator& text_generator)
{
    bn::vector<bn::sprite_ptr, 32> text_sprites;
    bn::fixed y = start_y;

    if(! text_lines.empty())
    {
        bn::fixed info_y = start_y + (y_inc * 9);

        if(text_lines.size() == 1)
        {


            text_generator.generate(start_x, info_y, text_lines[0], _text_sprites);

        }
        else
        {
            for(const bn::string_view& text_line : text_lines)
            {
                text_generator.generate(start_x, y, text_line, _text_sprites);
                y += y_inc;
            }
        }
    }
    text_sprites.clear();

}

}
