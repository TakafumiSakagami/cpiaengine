
@{{BLOCK(bg01_bn_gfx)

@=======================================================================
@
@	bg01_bn_gfx, 256x256@4, 
@	+ palette 16 entries, not compressed
@	+ 197 tiles (t|f|p reduced) not compressed
@	+ regular map (flat), not compressed, 32x32 
@	Total size: 32 + 6304 + 2048 = 8384
@
@	Time-stamp: 2024-06-15, 20:14:06
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global bg01_bn_gfxTiles		@ 6304 unsigned chars
	.hidden bg01_bn_gfxTiles
bg01_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33334333,0x33343333,0x33433333,0x34333333,0x43333333,0x33333333,0x33333333,0x33333333
	.word 0x33333433,0x33334333,0x33343333,0x33433333,0x34333333,0x43333334,0x33333343,0x33333433
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333334,0x33333343
	.word 0x33344333,0x33433333,0x34333333,0x43333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33333433,0x33334333,0x33343333,0x33433333,0x34333334,0x43333343,0x33333433,0x33334333
	.word 0x33343333,0x33433333,0x34333333,0x43333333,0x33333333,0x33333333,0x33333333,0x33333333

	.word 0x33333433,0x33334333,0x33343333,0x34433333,0x43333334,0x33333443,0x33334333,0x33343333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333334,0x33333343,0x33333433
	.word 0x33334333,0x33343333,0x33433333,0x34333334,0x43333343,0x33333433,0x33334333,0x33343333
	.word 0x33334333,0x33343333,0x33433334,0x34333343,0x43333433,0x33334333,0x33343333,0x33433333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333334,0x44444443,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44444444,0x33333333
	.word 0x33333333,0x33333344,0x33334433,0x33443333,0x44333333,0x33333334,0x33333443,0x33444333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333334,0x33333443,0x33444333,0x44333333

	.word 0x33333333,0x33333333,0x33333334,0x33333343,0x44444443,0x33333343,0x33333343,0x33333343
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x44444444,0x33333333,0x33333333,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x44444444,0x43333333,0x43333333,0x43333333
	.word 0x33334333,0x33333433,0x33333343,0x33333334,0x33333333,0x33333333,0x33333333,0x43333333
	.word 0x33333333,0x43333333,0x34333333,0x43443333,0x34334333,0x33443433,0x33334343,0x33333434
	.word 0x44333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33333333,0x33333444,0x33344333,0x44433333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33333344,0x33344433,0x34433333,0x43333333,0x33333344,0x33344433,0x44433333,0x33333333

	.word 0x33333333,0x33333333,0x33333333,0x33333344,0x33334433,0x33443333,0x44333333,0x33333344
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333334,0x33333443
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44333333,0x33433333
	.word 0x33333343,0x33333343,0x33333343,0x33333343,0x33333343,0x33333343,0x44444444,0x33333333
	.word 0x43333333,0x43333333,0x43333333,0x43333333,0x43333333,0x43333333,0x44444444,0x34333333
	.word 0x34333333,0x43433333,0x34343333,0x33434333,0x33343443,0x33334334,0x33333443,0x33333334
	.word 0x33333343,0x33333334,0x33333333,0x33333333,0x33333333,0x43333333,0x34433333,0x33343333
	.word 0x33344433,0x34433333,0x43333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333

	.word 0x33444333,0x44333333,0x33333344,0x33334433,0x34443333,0x44333333,0x44333333,0x44333333
	.word 0x33333333,0x33333333,0x33333344,0x33344433,0x34433333,0x43333334,0x33334443,0x33443333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333344,0x33334433,0x33443333
	.word 0x33433333,0x44433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333
	.word 0x33333333,0x44444444,0x44443334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334
	.word 0x33333333,0x44444444,0x44444444,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33333333,0x44444444,0x33344444,0x33343333,0x33343333,0x33343333,0x33343333,0x33343333
	.word 0x33333333,0x44444444,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334

	.word 0x44333333,0x34444444,0x44333333,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333
	.word 0x33333333,0x33333333,0x43333334,0x34433334,0x33343334,0x33334434,0x33333344,0x33333334
	.word 0x33334433,0x33333344,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x44333333,0x44333333,0x44333333,0x44333333,0x44333333,0x44333333,0x44333333,0x44333333
	.word 0x44333334,0x33333443,0x33444333,0x44333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33333334,0x33333443,0x33444333,0x44333333,0x33333444,0x33444333,0x44333333,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333344,0x33344433,0x34433333,0x43333444
	.word 0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433344

	.word 0x33343334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334,0x44443334
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44444444
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44444444,0x33333333,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44444444,0x33343343,0x33343343
	.word 0x33343333,0x33343333,0x33343333,0x33343333,0x33343333,0x33344444,0x33343333,0x33343333
	.word 0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x44444444
	.word 0x34333333,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333,0x34444444
	.word 0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334

	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x43333333,0x34433333,0x33344333
	.word 0x33444433,0x44333333,0x33333444,0x34444333,0x43333333,0x33333333,0x33333333,0x33333333
	.word 0x33333333,0x33333344,0x33444433,0x44333333,0x33333444,0x34444333,0x43333333,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x33333344,0x33444433,0x44333333,0x33333444,0x44444333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333344,0x33444433,0x44333333
	.word 0x44333333,0x44333333,0x44333333,0x44333333,0x44333333,0x44333333,0x44333333,0x44333344
	.word 0x33344344,0x44433344,0x33333344,0x33333344,0x33333344,0x33333344,0x33333344,0x33333344
	.word 0x33434433,0x33443333,0x44333344,0x33344433,0x34433333,0x43333333,0x33333333,0x33333333

	.word 0x33343334,0x44443334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334
	.word 0x33343343,0x33343343,0x33343343,0x33343343,0x33343343,0x33343343,0x33343343,0x33343343
	.word 0x33343333,0x33343333,0x33343333,0x33343333,0x33343333,0x33343333,0x33343333,0x33343333
	.word 0x33333334,0x44444444,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334
	.word 0x34333333,0x34444444,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333
	.word 0x33333334,0x43333334,0x34433334,0x33344334,0x44333434,0x33443344,0x33334434,0x33333344
	.word 0x44333443,0x33443334,0x33334433,0x33333344,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33334444,0x44443333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333

	.word 0x44444433,0x44333333,0x33334444,0x44443333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33333333,0x33333344,0x33444433,0x44333333,0x33344444,0x44433333,0x33333333,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x33333344,0x33444433,0x44333334,0x33344443,0x44433333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333344,0x33444433,0x44333334
	.word 0x33343334,0x33343334,0x33343334,0x33343334,0x44443334,0x33343334,0x44443334,0x33343334
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x44444444,0x33333333,0x44444444,0x33333333
	.word 0x33333334,0x33333334,0x33333334,0x33333334,0x44444444,0x33333334,0x44444444,0x33333334
	.word 0x34333333,0x34333333,0x34333333,0x34333333,0x34444444,0x34333333,0x34444444,0x34333333

	.word 0x33333334,0x33333334,0x33333334,0x33334444,0x44443334,0x33333334,0x33333334,0x33333334
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33334444,0x34443333,0x43333333
	.word 0x33344443,0x44433333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33343334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334
	.word 0x34333333,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x33333333,0x33333333,0x33333333,0x44444444
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x44444444,0x33333333,0x33333333,0x44444444
	.word 0x44443334,0x33343334,0x44443334,0x33343334,0x33343334,0x33343334,0x33343334,0x33343334

	.word 0x44444444,0x33333333,0x44444444,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x44444444,0x33333334,0x44444444,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334
	.word 0x34444444,0x34333333,0x34444444,0x34333333,0x34333333,0x34333333,0x34333333,0x34333333
	.word 0x44444444,0x44444444,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334
	.word 0x44444444,0x44444444,0x33343333,0x33343333,0x33343333,0x33343333,0x33343333,0x33343333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44433333,0x33344444
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44444433,0x33333344,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x43333333,0x34444444,0x33333333,0x44444333

	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x44444444,0x33333333,0x44433333,0x33344444
	.word 0x33333333,0x33333333,0x33333333,0x44443333,0x33334444,0x33333333,0x44444444,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x33333333,0x44444444,0x33333333,0x33333333
	.word 0x33333333,0x33333333,0x44444443,0x33333334,0x44444433,0x33333344,0x33333333,0x33333333
	.word 0x33343333,0x33343333,0x33343333,0x33343333,0x33343433,0x33343433,0x33343333,0x33343333
	.word 0x33333444,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33333334,0x33333334,0x33333334,0x33333334,0x33334444,0x44443334,0x33334444,0x44443334
	.word 0x33343333,0x33343333,0x33343333,0x33343333,0x33343333,0x33343344,0x44444433,0x33333344

	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x43333333,0x43333333
	.word 0x33343343,0x33343343,0x33343343,0x33343343,0x44443344,0x33333333,0x33333333,0x44444444
	.word 0x33343333,0x33343333,0x33343333,0x33343333,0x33344444,0x33343333,0x33343333,0x33344444
	.word 0x44444434,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x43333333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44433333,0x43344433,0x34443344
	.word 0x33333344,0x33333333,0x44333333,0x43444333,0x34443444,0x33334443,0x33333334,0x33333333
	.word 0x44443333,0x34444443,0x33334434,0x33333344,0x33333333,0x33333333,0x33333333,0x33333333

	.word 0x33334444,0x44443334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334,0x33333334
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44333333,0x33444333,0x44333444
	.word 0x33333333,0x33333333,0x44333333,0x33444333,0x44333443,0x33444334,0x33333444,0x33333333
	.word 0x34443333,0x44334443,0x33443334,0x33334443,0x33333334,0x33333333,0x33333333,0x33333333
	.word 0x33444443,0x33443334,0x33443333,0x33443333,0x33443333,0x33443333,0x33443333,0x33443333
	.word 0x33343333,0x33343333,0x33343333,0x33344444,0x33343333,0x33343333,0x33343333,0x33344444
	.word 0x33333334,0x33333434,0x33333434,0x33333434,0x33333334,0x33333334,0x33333334,0x33333334
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x44333333,0x33444333,0x33333444

	.word 0x33333333,0x33333333,0x43333333,0x34443333,0x33334443,0x44433334,0x33344433,0x33334444
	.word 0x44433333,0x33344433,0x44433344,0x33344333,0x33333444,0x33333333,0x33333333,0x33333333
	.word 0x33444333,0x33333444,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x33443333,0x33443333,0x33443333,0x33443333,0x33443333,0x33443333,0x33443333,0x33443333
	.word 0x44443334,0x33343334,0x44443334,0x22243334,0x22244444,0x22222243,0x22222433,0x22222444
	.word 0x44444444,0x33333333,0x44444444,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x44444444,0x33333333,0x44444444,0x22222222,0x22242222,0x22224222,0x22222422,0x22222422
	.word 0x43334444,0x43334333,0x43334444,0x43334222,0x44444222,0x22224222,0x22222422,0x22222422

	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x22224222,0x22222422,0x22222422,0x22222242
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x22222422,0x22222242,0x22222242,0x22222224
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x22222422,0x22222422,0x22222242,0x22222242
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x42222242,0x42222242,0x42222224,0x24222224
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x24222222,0x24222222,0x24222222,0x22422222
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x22422222,0x22422222,0x22422222,0x22422222
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x22242222,0x22242222,0x22242222,0x22242222
	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x42222242,0x42222242,0x22222242,0x22222422

	.word 0x33333333,0x33333333,0x33333333,0x44444444,0x22422222,0x22422222,0x24222224,0x44444444
	.word 0x33343333,0x33343333,0x33343333,0x33344444,0x44444222,0x22224222,0x22242222,0x44444444
	.word 0x44444444,0x33333334,0x44444444,0x22222224,0x22222224,0x22222222,0x22222222,0x44444444
	.word 0x44444444,0x33333333,0x44444444,0x22222222,0x22222222,0x22222222,0x22222222,0x44444444
	.word 0x34444444,0x34333333,0x34444444,0x34222222,0x34222222,0x34222222,0x34222222,0x44444444
	.word 0x33333444,0x34444334,0x43333334,0x33333334,0x33333334,0x33333334,0x33333334,0x44444444
	.word 0x44433333,0x33344433,0x43333344,0x34433333,0x33344433,0x33333344,0x33333333,0x33333333
	.word 0x33443333,0x33443333,0x33443333,0x33443333,0x33443333,0x33333333,0x33333333,0x33333333

	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x43333333,0x34333333,0x33443333,0x33334433
	.word 0x44333333,0x33443333,0x33334333,0x44333443,0x33433334,0x33344333,0x33333443,0x33333334
	.word 0x22222433,0x22222433,0x22222444,0x22222433,0x22222433,0x22222433,0x22222433,0x22222433
	.word 0x22222222,0x22222222,0x42222222,0x42222222,0x24222222,0x22422222,0x42242222,0x34434222
	.word 0x22222242,0x22222224,0x42222222,0x42222222,0x24222222,0x22422222,0x44444444,0x33333333
	.word 0x22222242,0x22222224,0x42222222,0x24222222,0x24222222,0x22422222,0x44444444,0x33333333
	.word 0x22222224,0x22222224,0x42222222,0x24222222,0x24222222,0x22422222,0x44444444,0x33333333
	.word 0x22222224,0x42222224,0x42222222,0x24222222,0x24222222,0x22422222,0x44444444,0x33333333

	.word 0x22222224,0x22222222,0x42222222,0x42222222,0x24222222,0x24222222,0x44444444,0x33333333
	.word 0x22222224,0x42222224,0x42222222,0x42222222,0x24222222,0x24222222,0x44444444,0x33333333
	.word 0x24222224,0x24222222,0x24222222,0x22422222,0x22422222,0x22422222,0x44444444,0x33333333
	.word 0x22422222,0x22422222,0x22422222,0x22242222,0x22242222,0x22242222,0x44444444,0x33333333
	.word 0x22422222,0x22242222,0x22242222,0x22242222,0x22242222,0x22242222,0x44444444,0x33333333
	.word 0x22242222,0x22242222,0x22242222,0x22242222,0x22242222,0x22242222,0x44444444,0x33333333
	.word 0x22224222,0x22242222,0x22242222,0x22242222,0x22242222,0x22242222,0x44444444,0x33333333
	.word 0x42222422,0x34222422,0x34222422,0x34224222,0x34224222,0x44224222,0x44444444,0x34333333

	.word 0x33333333,0x43333333,0x34433333,0x33344333,0x43333433,0x44333344,0x43443333,0x43334433
	.word 0x44333344,0x33443333,0x33334333,0x33333443,0x33333334,0x33333334,0x33333334,0x33333334
	.word 0x22222433,0x22222433,0x22222433,0x22222433,0x42222433,0x34222433,0x33422433,0x33342433
	.word 0x33344222,0x33333422,0x33333342,0x33333334,0x33333333,0x33333333,0x33333333,0x33333333
	.word 0x34333333,0x34333333,0x34333333,0x34333333,0x34333333,0x44333333,0x44333333,0x34333333
	.word 0x33333343,0x33333433,0x33333433,0x33334333,0x33343333,0x33433333,0x33433333,0x34333334
	.word 0x33333333,0x33333333,0x43333333,0x34333333,0x33443333,0x33334433,0x43333344,0x34433333
	.word 0x33334333,0x43333443,0x34433334,0x33343333,0x33334433,0x33333344,0x33333333,0x33333333

	.word 0x43333343,0x43333334,0x43333333,0x43333333,0x43333333,0x43333333,0x43333333,0x43333333
	.word 0x33334433,0x33333433,0x33333433,0x33333433,0x33333433,0x33333433,0x33333343,0x33333334
	.word 0x34333333,0x34333333,0x34333333,0x34444443,0x34333343,0x34333343,0x44333343,0x33333433
	.word 0x43333343,0x43333343,0x33333433,0x33334333,0x33334333,0x33344333,0x33434444,0x34333333
	.word 0x33333333,0x33333333,0x33333334,0x33333343,0x33333433,0x33333433,0x33334333,0x33343333
	.word 0x33334433,0x33334433,0x33334433,0x33334433,0x33334333,0x33333333,0x33333333,0x33333333
	.word 0x33333333,0x33333333,0x33333333,0x33333333,0x44333333,0x33443333,0x33334333,0x43333443
	.word 0x34433333,0x33344333,0x33333443,0x44333334,0x33443333,0x33334333,0x33333443,0x33333334

	.word 0x43333333,0x34333333,0x33433333,0x33343333,0x33334333,0x33333433,0x33333343,0x33333334
	.word 0x33333433,0x33333433,0x33334333,0x33334333,0x33334333,0x33343333,0x33343333,0x33433333
	.word 0x33433333,0x33433333,0x44333334,0x34333334,0x34333343,0x34333433,0x34334333,0x34343333
	.word 0x43333333,0x34433333,0x33343333,0x33334433,0x43333344,0x34433333,0x33343333,0x33334433
	.word 0x34333334,0x33443333,0x33444433,0x33443343,0x33443334,0x33443333,0x33443333,0x33443333
	.word 0x43333334,0x34333334,0x33433334,0x33343334,0x33334334,0x33333434,0x33333344,0x33333334
	.word 0x33433333,0x33433333,0x34333333,0x34333333,0x34333333,0x43333333,0x43333333,0x43333333
	.word 0x34343333,0x44433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333

	.word 0x33333333,0x44444444,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333
	.word 0x33333333,0x33333333,0x44333333,0x33443333,0x33334333,0x33333443,0x44333334,0x33433333
	.word 0x33333443,0x43333334,0x34433333,0x33344333,0x33333433,0x33333344,0x33333333,0x33333333
	.word 0x43333333,0x43333333,0x34333333,0x33433333,0x33343333,0x33334433,0x33333343,0x33333334
	.word 0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x33433333
	.word 0x33334333,0x33334333,0x33334333,0x33343333,0x33343333,0x33343333,0x33433333,0x33433333
	.word 0x44333333,0x33433333,0x33343333,0x33334333,0x33333433,0x33333343,0x33333334,0x33333333
	.word 0x33433333,0x34333333,0x34333333,0x34333333,0x43333333,0x43333333,0x43333333,0x33333333

	.word 0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x44433333,0x33333333,0x33333334
	.word 0x33433333,0x33433333,0x33433333,0x33433333,0x33433333,0x34444444,0x33333333,0x33333333
	.word 0x33443333,0x33443333,0x33443333,0x33443333,0x33443333,0x33443333,0x43443333,0x34443333
	.word 0x34333333,0x33433333,0x33344333,0x33333433,0x33333343,0x33333334,0x33333333,0x33333333
	.word 0x33333334,0x44444443,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333,0x33333333

	.section .rodata
	.align	2
	.global bg01_bn_gfxMap		@ 2048 unsigned chars
	.hidden bg01_bn_gfxMap
bg01_bn_gfxMap:
	.hword 0x0001,0x0001,0x0002,0x0003,0x0004,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0005,0x0006,0x0004,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0007,0x0006,0x0004,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0007,0x0008,0x0009
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0C09,0x000A
	.hword 0x0009,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0404
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0C09
	.hword 0x000A,0x0009,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0404,0x0406

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0C09,0x000B,0x000C,0x000D,0x000D,0x000D,0x000D,0x000D
	.hword 0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D
	.hword 0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x0406,0x0407
	.hword 0x000E,0x000F,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0C04,0x0010,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0012,0x0013,0x0014

	.hword 0x0015,0x0016,0x0017,0x0018,0x0019,0x0001,0x0001,0x0001
	.hword 0x0001,0x001A,0x001B,0x000D,0x000D,0x000D,0x000D,0x000D
	.hword 0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D,0x000D
	.hword 0x000D,0x000D,0x000D,0x000D,0x000D,0x001C,0x001D,0x001E
	.hword 0x0001,0x0001,0x0001,0x001F,0x0020,0x0021,0x0022,0x0001
	.hword 0x0001,0x0023,0x0024,0x0025,0x0025,0x0424,0x0025,0x0025
	.hword 0x0025,0x0025,0x0025,0x0025,0x0025,0x0025,0x0025,0x0025
	.hword 0x0025,0x0025,0x0026,0x0027,0x0C0D,0x0028,0x0029,0x002A

	.hword 0x0C15,0x0001,0x0001,0x0001,0x002B,0x0015,0x002C,0x002D
	.hword 0x002E,0x002F,0x0030,0x0031,0x0031,0x0430,0x0032,0x0032
	.hword 0x0032,0x0032,0x0032,0x0032,0x0033,0x0032,0x0032,0x0032
	.hword 0x0032,0x0032,0x0034,0x0035,0x0031,0x0036,0x0037,0x0038
	.hword 0x0039,0x003A,0x003B,0x003C,0x003D,0x0001,0x0001,0x0001
	.hword 0x003E,0x003F,0x0040,0x0C0D,0x0C0D,0x0440,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0041,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x0043,0x0C0D,0x0044,0x0045,0x0046

	.hword 0x0001,0x0001,0x0001,0x0047,0x0048,0x0049,0x004A,0x004B
	.hword 0x042B,0x0001,0x004C,0x004D,0x004D,0x044C,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0041,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x004E,0x004D,0x004F,0x0050,0x0051
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0052
	.hword 0x042B,0x0001,0x0053,0x0001,0x0001,0x0453,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0041,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x0037,0x0001,0x0054,0x0037,0x0001

	.hword 0x0055,0x0056,0x0011,0x0032,0x0032,0x000D,0x000D,0x0031
	.hword 0x042B,0x0001,0x0057,0x0058,0x0058,0x0457,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0041,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x0059,0x0058,0x005A,0x0037,0x0001
	.hword 0x0001,0x0001,0x0C31,0x0C31,0x0C31,0x0C31,0x0C0D,0x0C0D
	.hword 0x042B,0x0001,0x004C,0x004D,0x004D,0x044C,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0041,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x004E,0x004D,0x004F,0x0037,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x042B,0x0001,0x0053,0x0001,0x0001,0x0453,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0041,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x0037,0x0001,0x0054,0x005B,0x005C
	.hword 0x005D,0x000D,0x005E,0x005F,0x0060,0x0061,0x0062,0x0063
	.hword 0x042B,0x0001,0x084C,0x0C4D,0x0C4D,0x0C4C,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0041,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x084E,0x0C4D,0x084F,0x0037,0x0064

	.hword 0x0C5E,0x0C0D,0x0C31,0x0065,0x0001,0x0001,0x0001,0x0001
	.hword 0x042B,0x0001,0x0053,0x0001,0x0001,0x0453,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0041,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x0037,0x0001,0x0054,0x0066,0x0067
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x042B,0x0068,0x0057,0x0058,0x0058,0x0457,0x0056,0x0056
	.hword 0x0056,0x0056,0x0056,0x0056,0x0069,0x0056,0x0056,0x0056
	.hword 0x0056,0x0056,0x006A,0x0059,0x0058,0x005A,0x0037,0x006B

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x006C,0x006D
	.hword 0x006E,0x006F,0x0053,0x0001,0x0001,0x0453,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0042,0x0037,0x0001,0x0054,0x0037,0x0070
	.hword 0x0001,0x0001,0x0001,0x0001,0x0071,0x0072,0x0073,0x0074
	.hword 0x0001,0x0001,0x0053,0x0001,0x0001,0x0453,0x0055,0x0055
	.hword 0x0055,0x0055,0x0055,0x0055,0x0055,0x0055,0x0055,0x0055
	.hword 0x0055,0x0055,0x0075,0x0037,0x0001,0x0054,0x0037,0x0076

	.hword 0x0001,0x0077,0x0078,0x0079,0x007A,0x0001,0x0001,0x007B
	.hword 0x0001,0x0001,0x007C,0x007D,0x007E,0x007F,0x0080,0x0080
	.hword 0x0081,0x0082,0x0083,0x0084,0x0085,0x0086,0x0486,0x0485
	.hword 0x0087,0x0088,0x0089,0x008A,0x008B,0x008C,0x0035,0x008D
	.hword 0x008E,0x0C77,0x047B,0x0001,0x0001,0x0001,0x0001,0x008F
	.hword 0x0090,0x0091,0x0092,0x0093,0x0094,0x0095,0x0096,0x0097
	.hword 0x0098,0x0099,0x009A,0x009B,0x009C,0x009D,0x009E,0x049C
	.hword 0x009F,0x046C,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x047B,0x0001,0x0001,0x0001,0x0C2A,0x00A0
	.hword 0x00A1,0x0001,0x00A2,0x00A3,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x00A4,0x00A5,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x047B,0x0001,0x006C,0x00A6,0x00A7,0x00A8
	.hword 0x0037,0x0001,0x00A9,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x00AA,0x00AB,0x00AC,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x00AD,0x00AE,0x00AF,0x0C38,0x0001,0x0437
	.hword 0x0037,0x00B0,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x00B1,0x0C04,0x00B2,0x0C32,0x0C32,0x0C32,0x0C32,0x0C32
	.hword 0x0001,0x0038,0x00B3,0x00B4,0x0001,0x0001,0x0001,0x0437
	.hword 0x00B5,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x00B6,0x0001,0x00B7,0x00B8,0x0C0D,0x0C0D,0x0C0D,0x0C0D

	.hword 0x00B9,0x00BA,0x0415,0x007B,0x0001,0x0001,0x0001,0x00BB
	.hword 0x0C6C,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0CB6,0x00BC,0x00BC,0x0001,0x0001,0x0001,0x0001
	.hword 0x0C38,0x0001,0x0001,0x007B,0x0001,0x0001,0x00B0,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x00BD,0x00BC,0x00BC,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x007B,0x006C,0x00BE,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x00BF,0x00C0,0x00C1,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x00C2,0x00C3,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x00C4,0x0C0D,0x0C0D,0x0C0D,0x0C0D,0x0C0D

	.section .rodata
	.align	2
	.global bg01_bn_gfxPal		@ 32 unsigned chars
	.hidden bg01_bn_gfxPal
bg01_bn_gfxPal:
	.hword 0x03E0,0x0421,0x26CF,0x6B5A,0x0421,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(bg01_bn_gfx)
