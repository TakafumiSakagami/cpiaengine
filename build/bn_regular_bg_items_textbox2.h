#ifndef BN_REGULAR_BG_ITEMS_TEXTBOX2_H
#define BN_REGULAR_BG_ITEMS_TEXTBOX2_H

#include "bn_regular_bg_item.h"

//{{BLOCK(textbox2_bn_gfx)

//======================================================================
//
//	textbox2_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 13 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 416 + 2048 = 2496
//
//	Time-stamp: 2024-06-17, 03:24:59
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TEXTBOX2_BN_GFX_H
#define GRIT_TEXTBOX2_BN_GFX_H

#define textbox2_bn_gfxTilesLen 416
extern const bn::tile textbox2_bn_gfxTiles[13];

#define textbox2_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell textbox2_bn_gfxMap[1024];

#define textbox2_bn_gfxPalLen 32
extern const bn::color textbox2_bn_gfxPal[16];

#endif // GRIT_TEXTBOX2_BN_GFX_H

//}}BLOCK(textbox2_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item textbox2(
            regular_bg_tiles_item(span<const tile>(textbox2_bn_gfxTiles, 13), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(textbox2_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(textbox2_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

