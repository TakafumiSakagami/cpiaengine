#ifndef BN_REGULAR_BG_ITEMS_SP01_FADE_03_H
#define BN_REGULAR_BG_ITEMS_SP01_FADE_03_H

#include "bn_regular_bg_item.h"

//{{BLOCK(sp01_fade_03_bn_gfx)

//======================================================================
//
//	sp01_fade_03_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 391 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 12512 + 2048 = 14592
//
//	Time-stamp: 2024-06-17, 04:09:38
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_SP01_FADE_03_BN_GFX_H
#define GRIT_SP01_FADE_03_BN_GFX_H

#define sp01_fade_03_bn_gfxTilesLen 12512
extern const bn::tile sp01_fade_03_bn_gfxTiles[391];

#define sp01_fade_03_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell sp01_fade_03_bn_gfxMap[1024];

#define sp01_fade_03_bn_gfxPalLen 32
extern const bn::color sp01_fade_03_bn_gfxPal[16];

#endif // GRIT_SP01_FADE_03_BN_GFX_H

//}}BLOCK(sp01_fade_03_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item sp01_fade_03(
            regular_bg_tiles_item(span<const tile>(sp01_fade_03_bn_gfxTiles, 391), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(sp01_fade_03_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(sp01_fade_03_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif
