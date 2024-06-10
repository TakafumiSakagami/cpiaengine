#ifndef BN_SPRITE_ITEMS_FONT01_H
#define BN_SPRITE_ITEMS_FONT01_H

#include "bn_sprite_item.h"

//{{BLOCK(font01_bn_gfx)

//======================================================================
//
//	font01_bn_gfx, 16x1504@4, 
//	+ palette 16 entries, not compressed
//	+ 376 tiles not compressed
//	Total size: 32 + 12032 = 12064
//
//	Time-stamp: 2024-06-09, 02:28:35
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FONT01_BN_GFX_H
#define GRIT_FONT01_BN_GFX_H

#define font01_bn_gfxTilesLen 12032
extern const bn::tile font01_bn_gfxTiles[376];

#define font01_bn_gfxPalLen 32
extern const bn::color font01_bn_gfxPal[16];

#endif // GRIT_FONT01_BN_GFX_H

//}}BLOCK(font01_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item font01(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(font01_bn_gfxTiles, 376), bpp_mode::BPP_4, compression_type::NONE, 94), 
            sprite_palette_item(span<const color>(font01_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

