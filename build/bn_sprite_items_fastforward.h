#ifndef BN_SPRITE_ITEMS_FASTFORWARD_H
#define BN_SPRITE_ITEMS_FASTFORWARD_H

#include "bn_sprite_item.h"

//{{BLOCK(fastforward_bn_gfx)

//======================================================================
//
//	fastforward_bn_gfx, 16x32@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-06-16, 19:32:23
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FASTFORWARD_BN_GFX_H
#define GRIT_FASTFORWARD_BN_GFX_H

#define fastforward_bn_gfxTilesLen 256
extern const bn::tile fastforward_bn_gfxTiles[8];

#define fastforward_bn_gfxPalLen 32
extern const bn::color fastforward_bn_gfxPal[16];

#endif // GRIT_FASTFORWARD_BN_GFX_H

//}}BLOCK(fastforward_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item fastforward(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(fastforward_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 2), 
            sprite_palette_item(span<const color>(fastforward_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

