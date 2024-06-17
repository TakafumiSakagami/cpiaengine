#ifndef BN_REGULAR_BG_ITEMS_DRAGON_H
#define BN_REGULAR_BG_ITEMS_DRAGON_H

#include "bn_regular_bg_item.h"

//{{BLOCK(dragon_bn_gfx)

//======================================================================
//
//	dragon_bn_gfx, 256x1024@4, 
//	+ palette 16 entries, not compressed
//	+ 1024 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x128 
//	Total size: 32 + 32768 + 8192 = 40992
//
//	Time-stamp: 2024-06-17, 03:40:26
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_DRAGON_BN_GFX_H
#define GRIT_DRAGON_BN_GFX_H

#define dragon_bn_gfxTilesLen 32768
extern const bn::tile dragon_bn_gfxTiles[1024];

#define dragon_bn_gfxMapLen 8192
extern const bn::regular_bg_map_cell dragon_bn_gfxMap[4096];

#define dragon_bn_gfxPalLen 32
extern const bn::color dragon_bn_gfxPal[16];

#endif // GRIT_DRAGON_BN_GFX_H

//}}BLOCK(dragon_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item dragon(
            regular_bg_tiles_item(span<const tile>(dragon_bn_gfxTiles, 1024), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(dragon_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(dragon_bn_gfxMap[0], size(32, 32), compression_type::NONE, 4, false));
}

#endif

