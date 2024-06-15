
@{{BLOCK(textbox2_bn_gfx)

@=======================================================================
@
@	textbox2_bn_gfx, 256x256@4, 
@	+ palette 16 entries, not compressed
@	+ 13 tiles (t|f|p reduced) not compressed
@	+ regular map (flat), not compressed, 32x32 
@	Total size: 32 + 416 + 2048 = 2496
@
@	Time-stamp: 2024-06-15, 20:14:07
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global textbox2_bn_gfxTiles		@ 416 unsigned chars
	.hidden textbox2_bn_gfxTiles
textbox2_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x10000000,0x00000000,0x30000000,0x30000000,0x30000000
	.word 0x00000000,0x00000000,0x00000000,0x33333330,0x22222222,0x10101012,0x01010102,0x10101012
	.word 0x00000000,0x00000000,0x00000000,0x33333333,0x22222222,0x10101010,0x01010101,0x10101010
	.word 0x00000000,0x00000000,0x00000000,0x10333333,0x02222222,0x32101010,0x32010101,0x32101010
	.word 0x30000000,0x30000000,0x30000000,0x30000000,0x30000000,0x30000000,0x30000000,0x30000000
	.word 0x01010102,0x10101012,0x01010102,0x10101012,0x01010102,0x10101012,0x01010102,0x10101012
	.word 0x01010101,0x10101010,0x01010101,0x10101010,0x01010101,0x10101010,0x01010101,0x10101010

	.word 0x32010101,0x32101010,0x32010101,0x32101010,0x32010101,0x32101010,0x32010101,0x32101010
	.word 0x30000000,0x30000000,0x30000000,0x30000000,0x30000000,0x30000000,0x00000000,0x10000000
	.word 0x01010102,0x10101012,0x01010102,0x10101012,0x01010102,0x10101012,0x22222222,0x33333330
	.word 0x01010101,0x10101010,0x01010101,0x10101010,0x01010101,0x10101010,0x22222222,0x33333333
	.word 0x32010101,0x32101010,0x32010101,0x32101010,0x32010101,0x32101010,0x02222222,0x10333333

	.section .rodata
	.align	2
	.global textbox2_bn_gfxMap		@ 2048 unsigned chars
	.hidden textbox2_bn_gfxMap
textbox2_bn_gfxMap:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0001,0x0002,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0004,0x0000

	.hword 0x0005,0x0006,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0008,0x0000
	.hword 0x0005,0x0006,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0008,0x0000

	.hword 0x0005,0x0006,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0008,0x0000
	.hword 0x0005,0x0006,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0008,0x0000

	.hword 0x0005,0x0006,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0007
	.hword 0x0007,0x0007,0x0007,0x0007,0x0007,0x0007,0x0008,0x0000
	.hword 0x0009,0x000A,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B
	.hword 0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B
	.hword 0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000B
	.hword 0x000B,0x000B,0x000B,0x000B,0x000B,0x000B,0x000C,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.section .rodata
	.align	2
	.global textbox2_bn_gfxPal		@ 32 unsigned chars
	.hidden textbox2_bn_gfxPal
textbox2_bn_gfxPal:
	.hword 0x7C1F,0x34C8,0x263E,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(textbox2_bn_gfx)
