#ifndef BN_REGULAR_BG_ITEMS_KURO_H
#define BN_REGULAR_BG_ITEMS_KURO_H

#include "bn_regular_bg_item.h"

//{{BLOCK(kuro_bn_gfx)

//======================================================================
//
//	kuro_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 9 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 288 + 2048 = 2368
//
//	Time-stamp: 2024-06-17, 03:24:59
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_KURO_BN_GFX_H
#define GRIT_KURO_BN_GFX_H

#define kuro_bn_gfxTilesLen 288
extern const bn::tile kuro_bn_gfxTiles[9];

#define kuro_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell kuro_bn_gfxMap[1024];

#define kuro_bn_gfxPalLen 32
extern const bn::color kuro_bn_gfxPal[16];

#endif // GRIT_KURO_BN_GFX_H

//}}BLOCK(kuro_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item kuro(
            regular_bg_tiles_item(span<const tile>(kuro_bn_gfxTiles, 9), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(kuro_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(kuro_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

