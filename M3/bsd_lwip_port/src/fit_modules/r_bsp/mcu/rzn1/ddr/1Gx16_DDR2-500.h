/***********************************************************************************************************************
 * DISCLAIMER
 * This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
 * other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
 * applicable laws, including copyright laws.
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
 * THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
 * EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
 * SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS
 * SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
 * this software. By using this software, you agree to the additional terms and conditions found by accessing the
 * following link:
 * http://www.renesas.com/disclaimer
 *
 * Copyright (C) 2019 Renesas Electronics Corporation. All rights reserved.
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * $Revision: 1322 $
 * $Date: 2019-03-02 01:34:20 +0000 (Sat, 02 Mar 2019) $
 *
 * PROJECT NAME :  RZ/N1 bare metal Drivers
 * FILE         :  1Gx16_DDR2-500.h
 * Description  :  Driver interface functions
 *
 * (C) Copyright Renesas Electronics Europe Ltd. 2019. All Rights Reserved
 **********************************************************************************************************************/

#define            DDR_CTL_00_DATA 0x00000400
#define            DDR_CTL_01_DATA 0x00000000
#define            DDR_CTL_02_DATA 0x00000000
#define            DDR_CTL_03_DATA 0x00000000
#define            DDR_CTL_04_DATA 0x00000000
#define            DDR_CTL_05_DATA 0x00000000
#define            DDR_CTL_06_DATA 0x00000000
#define            DDR_CTL_07_DATA 0x0000c350
#define            DDR_CTL_08_DATA 0x00000000
#define            DDR_CTL_09_DATA 0x00000000
#define            DDR_CTL_10_DATA 0x00006402
#define            DDR_CTL_11_DATA 0x080000c8
#define            DDR_CTL_12_DATA 0x02040003
#define            DDR_CTL_13_DATA 0x020c0f03
#define            DDR_CTL_14_DATA 0x02020d04
#define            DDR_CTL_15_DATA 0x00445c03
#define            DDR_CTL_16_DATA 0x04000303
#define            DDR_CTL_17_DATA 0x01010004
#define            DDR_CTL_18_DATA 0x00050308
#define            DDR_CTL_19_DATA 0x01000000
#define            DDR_CTL_20_DATA 0x07990020
#define            DDR_CTL_21_DATA 0x00000005
#define            DDR_CTL_22_DATA 0x00000002
#define            DDR_CTL_23_DATA 0x00060002
#define            DDR_CTL_24_DATA 0x002300c8
#define            DDR_CTL_25_DATA 0x00010000
#define            DDR_CTL_26_DATA 0x00030300
#define            DDR_CTL_27_DATA 0x00000000
#define            DDR_CTL_28_DATA 0x00000000
#define            DDR_CTL_29_DATA 0x00000000
#define            DDR_CTL_30_DATA 0x00000000
#define            DDR_CTL_31_DATA 0x00064300
#define            DDR_CTL_32_DATA 0x00000046
#define            DDR_CTL_33_DATA 0x00000000
#define            DDR_CTL_34_DATA 0x00460643
#define            DDR_CTL_35_DATA 0x00000000
#define            DDR_CTL_36_DATA 0x00010000
#define            DDR_CTL_37_DATA 0x00000000
#define            DDR_CTL_38_DATA 0x00000000
#define            DDR_CTL_39_DATA 0x00000000
#define            DDR_CTL_40_DATA 0x00000000
#define            DDR_CTL_41_DATA 0x00000000
#define            DDR_CTL_42_DATA 0x00000000
#define            DDR_CTL_43_DATA 0x00000000
#define            DDR_CTL_44_DATA 0x00000000
#define            DDR_CTL_45_DATA 0x00000000
#define            DDR_CTL_46_DATA 0x00000000
#define            DDR_CTL_47_DATA 0x00000000
#define            DDR_CTL_48_DATA 0x03000000
#define            DDR_CTL_49_DATA 0xffff0a01
#define            DDR_CTL_50_DATA 0x01010101
#define            DDR_CTL_51_DATA 0x01010101
#define            DDR_CTL_52_DATA 0x01030101
#define            DDR_CTL_53_DATA 0x0c030000
#define            DDR_CTL_54_DATA 0x00000000
#define            DDR_CTL_55_DATA 0x00000100
#define            DDR_CTL_56_DATA 0x00000000
#define            DDR_CTL_57_DATA 0x00000000
#define            DDR_CTL_58_DATA 0x00000000
#define            DDR_CTL_59_DATA 0x00000000
#define            DDR_CTL_60_DATA 0x00000000
#define            DDR_CTL_61_DATA 0x00000000
#define            DDR_CTL_62_DATA 0x01000000
#define            DDR_CTL_63_DATA 0x05030200
#define            DDR_CTL_64_DATA 0x01000105
#define            DDR_CTL_65_DATA 0x00000000
#define            DDR_CTL_66_DATA 0x02020202
#define            DDR_CTL_67_DATA 0x00000600
#define            DDR_CTL_68_DATA 0x00000000
#define            DDR_CTL_69_DATA 0x00000000
#define            DDR_CTL_70_DATA 0x00000000
#define            DDR_CTL_71_DATA 0x00280d00
#define            DDR_CTL_72_DATA 0x00000000
#define            DDR_CTL_73_DATA 0x00000100
#define            DDR_CTL_74_DATA 0x00010001
#define            DDR_CTL_75_DATA 0x00000000
#define            DDR_CTL_76_DATA 0x00000000
#define            DDR_CTL_77_DATA 0x00000000
#define            DDR_CTL_78_DATA 0x00000000
#define            DDR_CTL_79_DATA 0x001b1b00
#define            DDR_CTL_80_DATA 0x00000001
#define            DDR_CTL_81_DATA 0x00000000
#define            DDR_CTL_82_DATA 0x00000000
#define            DDR_CTL_83_DATA 0x00011b1b
#define            DDR_CTL_84_DATA 0x00000000
#define            DDR_CTL_85_DATA 0x00000000
#define            DDR_CTL_86_DATA 0x001b1b00
#define            DDR_CTL_87_DATA 0x02020001
#define            DDR_CTL_88_DATA 0x00020200
#define            DDR_CTL_89_DATA 0x02000202
#define            DDR_CTL_90_DATA 0x01000002
#define            DDR_CTL_91_DATA 0x00000000
#define            DDR_CTL_92_DATA 0x0003ffff
#define            DDR_CTL_93_DATA 0x00000000
#define            DDR_CTL_94_DATA 0x0003ffff
#define            DDR_CTL_95_DATA 0x00000000
#define            DDR_CTL_96_DATA 0x0003ffff
#define            DDR_CTL_97_DATA 0x00000000
#define            DDR_CTL_98_DATA 0x0003ffff
#define            DDR_CTL_99_DATA 0x00000000
#define           DDR_CTL_100_DATA 0x0003ffff
#define           DDR_CTL_101_DATA 0x00000000
#define           DDR_CTL_102_DATA 0x0003ffff
#define           DDR_CTL_103_DATA 0x00000000
#define           DDR_CTL_104_DATA 0x0003ffff
#define           DDR_CTL_105_DATA 0x00000000
#define           DDR_CTL_106_DATA 0x0003ffff
#define           DDR_CTL_107_DATA 0x00000000
#define           DDR_CTL_108_DATA 0x0003ffff
#define           DDR_CTL_109_DATA 0x00000000
#define           DDR_CTL_110_DATA 0x0003ffff
#define           DDR_CTL_111_DATA 0x00000000
#define           DDR_CTL_112_DATA 0x0003ffff
#define           DDR_CTL_113_DATA 0x00000000
#define           DDR_CTL_114_DATA 0x0003ffff
#define           DDR_CTL_115_DATA 0x00000000
#define           DDR_CTL_116_DATA 0x0003ffff
#define           DDR_CTL_117_DATA 0x00000000
#define           DDR_CTL_118_DATA 0x0003ffff
#define           DDR_CTL_119_DATA 0x00000000
#define           DDR_CTL_120_DATA 0x0003ffff
#define           DDR_CTL_121_DATA 0x00000000
#define           DDR_CTL_122_DATA 0x0003ffff
#define           DDR_CTL_123_DATA 0x00000000
#define           DDR_CTL_124_DATA 0x0003ffff
#define           DDR_CTL_125_DATA 0x00000000
#define           DDR_CTL_126_DATA 0x0003ffff
#define           DDR_CTL_127_DATA 0x00000000
#define           DDR_CTL_128_DATA 0x0003ffff
#define           DDR_CTL_129_DATA 0x00000000
#define           DDR_CTL_130_DATA 0x0003ffff
#define           DDR_CTL_131_DATA 0x00000000
#define           DDR_CTL_132_DATA 0x0003ffff
#define           DDR_CTL_133_DATA 0x00000000
#define           DDR_CTL_134_DATA 0x0003ffff
#define           DDR_CTL_135_DATA 0x00000000
#define           DDR_CTL_136_DATA 0x0003ffff
#define           DDR_CTL_137_DATA 0x00000000
#define           DDR_CTL_138_DATA 0x0003ffff
#define           DDR_CTL_139_DATA 0x00000000
#define           DDR_CTL_140_DATA 0x0003ffff
#define           DDR_CTL_141_DATA 0x00000000
#define           DDR_CTL_142_DATA 0x0003ffff
#define           DDR_CTL_143_DATA 0x00000000
#define           DDR_CTL_144_DATA 0x0003ffff
#define           DDR_CTL_145_DATA 0x00000000
#define           DDR_CTL_146_DATA 0x0003ffff
#define           DDR_CTL_147_DATA 0x00000000
#define           DDR_CTL_148_DATA 0x0003ffff
#define           DDR_CTL_149_DATA 0x00000000
#define           DDR_CTL_150_DATA 0x0003ffff
#define           DDR_CTL_151_DATA 0x00000000
#define           DDR_CTL_152_DATA 0x0003ffff
#define           DDR_CTL_153_DATA 0x00000000
#define           DDR_CTL_154_DATA 0x0003ffff
#define           DDR_CTL_155_DATA 0x00000000
#define           DDR_CTL_156_DATA 0x0003ffff
#define           DDR_CTL_157_DATA 0x00000000
#define           DDR_CTL_158_DATA 0x0003ffff
#define           DDR_CTL_159_DATA 0x00000000
#define           DDR_CTL_160_DATA 0x0003ffff
#define           DDR_CTL_161_DATA 0x00000000
#define           DDR_CTL_162_DATA 0x0003ffff
#define           DDR_CTL_163_DATA 0x00000000
#define           DDR_CTL_164_DATA 0x0003ffff
#define           DDR_CTL_165_DATA 0x00000000
#define           DDR_CTL_166_DATA 0x0003ffff
#define           DDR_CTL_167_DATA 0x00000000
#define           DDR_CTL_168_DATA 0x0003ffff
#define           DDR_CTL_169_DATA 0x00000000
#define           DDR_CTL_170_DATA 0x0003ffff
#define           DDR_CTL_171_DATA 0x00000000
#define           DDR_CTL_172_DATA 0x0003ffff
#define           DDR_CTL_173_DATA 0x00000000
#define           DDR_CTL_174_DATA 0x0003ffff
#define           DDR_CTL_175_DATA 0x00000000
#define           DDR_CTL_176_DATA 0x0003ffff
#define           DDR_CTL_177_DATA 0x00000000
#define           DDR_CTL_178_DATA 0x0003ffff
#define           DDR_CTL_179_DATA 0x00000000
#define           DDR_CTL_180_DATA 0x0003ffff
#define           DDR_CTL_181_DATA 0x00000000
#define           DDR_CTL_182_DATA 0x0003ffff
#define           DDR_CTL_183_DATA 0x00000000
#define           DDR_CTL_184_DATA 0x0003ffff
#define           DDR_CTL_185_DATA 0x00000000
#define           DDR_CTL_186_DATA 0x0003ffff
#define           DDR_CTL_187_DATA 0x00000000
#define           DDR_CTL_188_DATA 0x0003ffff
#define           DDR_CTL_189_DATA 0x00000000
#define           DDR_CTL_190_DATA 0x0003ffff
#define           DDR_CTL_191_DATA 0x00000000
#define           DDR_CTL_192_DATA 0x0003ffff
#define           DDR_CTL_193_DATA 0x00000000
#define           DDR_CTL_194_DATA 0x0003ffff
#define           DDR_CTL_195_DATA 0x00000000
#define           DDR_CTL_196_DATA 0x0003ffff
#define           DDR_CTL_197_DATA 0x00000000
#define           DDR_CTL_198_DATA 0x0003ffff
#define           DDR_CTL_199_DATA 0x00000000
#define           DDR_CTL_200_DATA 0x0003ffff
#define           DDR_CTL_201_DATA 0x00000000
#define           DDR_CTL_202_DATA 0x0003ffff
#define           DDR_CTL_203_DATA 0x00000000
#define           DDR_CTL_204_DATA 0x0003ffff
#define           DDR_CTL_205_DATA 0x00000000
#define           DDR_CTL_206_DATA 0x0003ffff
#define           DDR_CTL_207_DATA 0x00000000
#define           DDR_CTL_208_DATA 0x0003ffff
#define           DDR_CTL_209_DATA 0x00000000
#define           DDR_CTL_210_DATA 0x0003ffff
#define           DDR_CTL_211_DATA 0x00000000
#define           DDR_CTL_212_DATA 0x0003ffff
#define           DDR_CTL_213_DATA 0x00000000
#define           DDR_CTL_214_DATA 0x0003ffff
#define           DDR_CTL_215_DATA 0x00000000
#define           DDR_CTL_216_DATA 0x0003ffff
#define           DDR_CTL_217_DATA 0x00000000
#define           DDR_CTL_218_DATA 0x0303ffff
#define           DDR_CTL_219_DATA 0xffffffff
#define           DDR_CTL_220_DATA 0x00030f0f
#define           DDR_CTL_221_DATA 0xffffffff
#define           DDR_CTL_222_DATA 0x00030f0f
#define           DDR_CTL_223_DATA 0xffffffff
#define           DDR_CTL_224_DATA 0x00030f0f
#define           DDR_CTL_225_DATA 0xffffffff
#define           DDR_CTL_226_DATA 0x00030f0f
#define           DDR_CTL_227_DATA 0xffffffff
#define           DDR_CTL_228_DATA 0x00030f0f
#define           DDR_CTL_229_DATA 0xffffffff
#define           DDR_CTL_230_DATA 0x00030f0f
#define           DDR_CTL_231_DATA 0xffffffff
#define           DDR_CTL_232_DATA 0x00030f0f
#define           DDR_CTL_233_DATA 0xffffffff
#define           DDR_CTL_234_DATA 0x00030f0f
#define           DDR_CTL_235_DATA 0xffffffff
#define           DDR_CTL_236_DATA 0x00030f0f
#define           DDR_CTL_237_DATA 0xffffffff
#define           DDR_CTL_238_DATA 0x00030f0f
#define           DDR_CTL_239_DATA 0xffffffff
#define           DDR_CTL_240_DATA 0x00030f0f
#define           DDR_CTL_241_DATA 0xffffffff
#define           DDR_CTL_242_DATA 0x00030f0f
#define           DDR_CTL_243_DATA 0xffffffff
#define           DDR_CTL_244_DATA 0x00030f0f
#define           DDR_CTL_245_DATA 0xffffffff
#define           DDR_CTL_246_DATA 0x00030f0f
#define           DDR_CTL_247_DATA 0xffffffff
#define           DDR_CTL_248_DATA 0x00030f0f
#define           DDR_CTL_249_DATA 0xffffffff
#define           DDR_CTL_250_DATA 0x00030f0f
#define           DDR_CTL_251_DATA 0xffffffff
#define           DDR_CTL_252_DATA 0x00030f0f
#define           DDR_CTL_253_DATA 0xffffffff
#define           DDR_CTL_254_DATA 0x00030f0f
#define           DDR_CTL_255_DATA 0xffffffff
#define           DDR_CTL_256_DATA 0x00030f0f
#define           DDR_CTL_257_DATA 0xffffffff
#define           DDR_CTL_258_DATA 0x00030f0f
#define           DDR_CTL_259_DATA 0xffffffff
#define           DDR_CTL_260_DATA 0x00030f0f
#define           DDR_CTL_261_DATA 0xffffffff
#define           DDR_CTL_262_DATA 0x00030f0f
#define           DDR_CTL_263_DATA 0xffffffff
#define           DDR_CTL_264_DATA 0x00030f0f
#define           DDR_CTL_265_DATA 0xffffffff
#define           DDR_CTL_266_DATA 0x00030f0f
#define           DDR_CTL_267_DATA 0xffffffff
#define           DDR_CTL_268_DATA 0x00030f0f
#define           DDR_CTL_269_DATA 0xffffffff
#define           DDR_CTL_270_DATA 0x00030f0f
#define           DDR_CTL_271_DATA 0xffffffff
#define           DDR_CTL_272_DATA 0x00030f0f
#define           DDR_CTL_273_DATA 0xffffffff
#define           DDR_CTL_274_DATA 0x00030f0f
#define           DDR_CTL_275_DATA 0xffffffff
#define           DDR_CTL_276_DATA 0x00030f0f
#define           DDR_CTL_277_DATA 0xffffffff
#define           DDR_CTL_278_DATA 0x00030f0f
#define           DDR_CTL_279_DATA 0xffffffff
#define           DDR_CTL_280_DATA 0x00030f0f
#define           DDR_CTL_281_DATA 0xffffffff
#define           DDR_CTL_282_DATA 0x00030f0f
#define           DDR_CTL_283_DATA 0xffffffff
#define           DDR_CTL_284_DATA 0x00030f0f
#define           DDR_CTL_285_DATA 0xffffffff
#define           DDR_CTL_286_DATA 0x00030f0f
#define           DDR_CTL_287_DATA 0xffffffff
#define           DDR_CTL_288_DATA 0x00030f0f
#define           DDR_CTL_289_DATA 0xffffffff
#define           DDR_CTL_290_DATA 0x00030f0f
#define           DDR_CTL_291_DATA 0xffffffff
#define           DDR_CTL_292_DATA 0x00030f0f
#define           DDR_CTL_293_DATA 0xffffffff
#define           DDR_CTL_294_DATA 0x00030f0f
#define           DDR_CTL_295_DATA 0xffffffff
#define           DDR_CTL_296_DATA 0x00030f0f
#define           DDR_CTL_297_DATA 0xffffffff
#define           DDR_CTL_298_DATA 0x00030f0f
#define           DDR_CTL_299_DATA 0xffffffff
#define           DDR_CTL_300_DATA 0x00030f0f
#define           DDR_CTL_301_DATA 0xffffffff
#define           DDR_CTL_302_DATA 0x00030f0f
#define           DDR_CTL_303_DATA 0xffffffff
#define           DDR_CTL_304_DATA 0x00030f0f
#define           DDR_CTL_305_DATA 0xffffffff
#define           DDR_CTL_306_DATA 0x00030f0f
#define           DDR_CTL_307_DATA 0xffffffff
#define           DDR_CTL_308_DATA 0x00030f0f
#define           DDR_CTL_309_DATA 0xffffffff
#define           DDR_CTL_310_DATA 0x00030f0f
#define           DDR_CTL_311_DATA 0xffffffff
#define           DDR_CTL_312_DATA 0x00030f0f
#define           DDR_CTL_313_DATA 0xffffffff
#define           DDR_CTL_314_DATA 0x00030f0f
#define           DDR_CTL_315_DATA 0xffffffff
#define           DDR_CTL_316_DATA 0x00030f0f
#define           DDR_CTL_317_DATA 0xffffffff
#define           DDR_CTL_318_DATA 0x00030f0f
#define           DDR_CTL_319_DATA 0xffffffff
#define           DDR_CTL_320_DATA 0x00030f0f
#define           DDR_CTL_321_DATA 0xffffffff
#define           DDR_CTL_322_DATA 0x00030f0f
#define           DDR_CTL_323_DATA 0xffffffff
#define           DDR_CTL_324_DATA 0x00030f0f
#define           DDR_CTL_325_DATA 0xffffffff
#define           DDR_CTL_326_DATA 0x00030f0f
#define           DDR_CTL_327_DATA 0xffffffff
#define           DDR_CTL_328_DATA 0x00030f0f
#define           DDR_CTL_329_DATA 0xffffffff
#define           DDR_CTL_330_DATA 0x00030f0f
#define           DDR_CTL_331_DATA 0xffffffff
#define           DDR_CTL_332_DATA 0x00030f0f
#define           DDR_CTL_333_DATA 0xffffffff
#define           DDR_CTL_334_DATA 0x00030f0f
#define           DDR_CTL_335_DATA 0xffffffff
#define           DDR_CTL_336_DATA 0x00030f0f
#define           DDR_CTL_337_DATA 0xffffffff
#define           DDR_CTL_338_DATA 0x00030f0f
#define           DDR_CTL_339_DATA 0xffffffff
#define           DDR_CTL_340_DATA 0x00030f0f
#define           DDR_CTL_341_DATA 0xffffffff
#define           DDR_CTL_342_DATA 0x00030f0f
#define           DDR_CTL_343_DATA 0xffffffff
#define           DDR_CTL_344_DATA 0x00030f0f
#define           DDR_CTL_345_DATA 0xffffffff
#define           DDR_CTL_346_DATA 0x32030f0f
#define           DDR_CTL_347_DATA 0x01320001
#define           DDR_CTL_348_DATA 0x00013200
#define           DDR_CTL_349_DATA 0x00000132
#define           DDR_CTL_350_DATA 0x00000000
#define           DDR_CTL_351_DATA 0x001e0000
#define           DDR_CTL_352_DATA 0x0f320000
#define           DDR_CTL_353_DATA 0x02000020
#define           DDR_CTL_354_DATA 0x02000200
#define           DDR_CTL_355_DATA 0x000003cc
#define           DDR_CTL_356_DATA 0x00004bfa
#define           DDR_CTL_357_DATA 0x020a0403
#define           DDR_CTL_358_DATA 0x000a0a01
#define           DDR_CTL_359_DATA 0x00000000
#define           DDR_CTL_360_DATA 0x00000000
#define           DDR_CTL_361_DATA 0x04038000
#define           DDR_CTL_362_DATA 0x07030a07
#define           DDR_CTL_363_DATA 0x00ffff19
#define           DDR_CTL_364_DATA 0x000f0010
#define           DDR_CTL_365_DATA 0x00000000
#define           DDR_CTL_366_DATA 0x00000000
#define           DDR_CTL_367_DATA 0x00000000
#define           DDR_CTL_368_DATA 0x00000000
#define           DDR_CTL_369_DATA 0x00000000
#define           DDR_CTL_370_DATA 0x00000204
#define           DDR_CTL_371_DATA 0x00000000
#define           DDR_CTL_372_DATA 0x00000000
#define           DDR_CTL_373_DATA 0x00000001
#define           DDR_CTL_374_DATA 0x00000000
