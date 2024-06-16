
@{{BLOCK(fastforward_bn_gfx)

@=======================================================================
@
@	fastforward_bn_gfx, 16x32@4, 
@	+ palette 16 entries, not compressed
@	+ 8 tiles not compressed
@	Total size: 32 + 256 = 288
@
@	Time-stamp: 2024-06-16, 19:32:23
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global fastforward_bn_gfxTiles		@ 256 unsigned chars
	.hidden fastforward_bn_gfxTiles
fastforward_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00001000,0x00032000,0x00322000,0x03222000,0x32222000,0x22222000
	.word 0x00000000,0x00000000,0x00000010,0x00000320,0x00003220,0x00032220,0x00322220,0x03222223
	.word 0x12222000,0x31222000,0x03122000,0x00312000,0x00031000,0x00001000,0x00000000,0x00000000
	.word 0x03122223,0x00312220,0x00031220,0x00003120,0x00000310,0x00000010,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00002000,0x00020000,0x00202000,0x02020000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000020,0x00000200,0x00002020,0x00020200
	.word 0x20202000,0x02020000,0x30202000,0x03020000,0x00302000,0x00030000,0x00001000,0x00000000
	.word 0x00202020,0x03020203,0x00302020,0x00030200,0x00003020,0x00000300,0x00000010,0x00000000

	.section .rodata
	.align	2
	.global fastforward_bn_gfxPal		@ 32 unsigned chars
	.hidden fastforward_bn_gfxPal
fastforward_bn_gfxPal:
	.hword 0x03E0,0x24E1,0x7BDC,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(fastforward_bn_gfx)
