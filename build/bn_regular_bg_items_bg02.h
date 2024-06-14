#ifndef BN_REGULAR_BG_ITEMS_BG02_H
#define BN_REGULAR_BG_ITEMS_BG02_H

#include "bn_regular_bg_item.h"

//{{BLOCK(bg02_bn_gfx)

//======================================================================
//
//	bg02_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 197 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 6304 + 2048 = 8384
//
//	Time-stamp: 2024-06-14, 20:56:43
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BG02_BN_GFX_H
#define GRIT_BG02_BN_GFX_H

#define bg02_bn_gfxTilesLen 6304
extern const bn::tile bg02_bn_gfxTiles[197];

#define bg02_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell bg02_bn_gfxMap[1024];

#define bg02_bn_gfxPalLen 32
extern const bn::color bg02_bn_gfxPal[16];

#endif // GRIT_BG02_BN_GFX_H

//}}BLOCK(bg02_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item bg02(
            regular_bg_tiles_item(span<const tile>(bg02_bn_gfxTiles, 197), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(bg02_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(bg02_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

