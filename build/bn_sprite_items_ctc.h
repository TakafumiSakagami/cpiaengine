#ifndef BN_SPRITE_ITEMS_CTC_H
#define BN_SPRITE_ITEMS_CTC_H

#include "bn_sprite_item.h"

//{{BLOCK(ctc_bn_gfx)

//======================================================================
//
//	ctc_bn_gfx, 16x32@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles not compressed
//	Total size: 32 + 256 = 288
//
//	Time-stamp: 2024-06-17, 03:24:59
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_CTC_BN_GFX_H
#define GRIT_CTC_BN_GFX_H

#define ctc_bn_gfxTilesLen 256
extern const bn::tile ctc_bn_gfxTiles[8];

#define ctc_bn_gfxPalLen 32
extern const bn::color ctc_bn_gfxPal[16];

#endif // GRIT_CTC_BN_GFX_H

//}}BLOCK(ctc_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item ctc(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(ctc_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE, 2), 
            sprite_palette_item(span<const color>(ctc_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

