#ifndef BN_REGULAR_BG_ITEMS_TEXTBOX_H
#define BN_REGULAR_BG_ITEMS_TEXTBOX_H

#include "bn_regular_bg_item.h"

//{{BLOCK(textbox_bn_gfx)

//======================================================================
//
//	textbox_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 22 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 704 + 2048 = 2784
//
//	Time-stamp: 2024-06-16, 19:32:23
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_TEXTBOX_BN_GFX_H
#define GRIT_TEXTBOX_BN_GFX_H

#define textbox_bn_gfxTilesLen 704
extern const bn::tile textbox_bn_gfxTiles[22];

#define textbox_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell textbox_bn_gfxMap[1024];

#define textbox_bn_gfxPalLen 32
extern const bn::color textbox_bn_gfxPal[16];

#endif // GRIT_TEXTBOX_BN_GFX_H

//}}BLOCK(textbox_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item textbox(
            regular_bg_tiles_item(span<const tile>(textbox_bn_gfxTiles, 22), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(textbox_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(textbox_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

