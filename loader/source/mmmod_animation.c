/*

Nintendont (Loader) - Playing Gamecubes in Wii mode on a Wii U

Copyright (C) 2021  drescherflo (send0r)

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation version 2.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

*/

#include <stdio.h>
#include <stdlib.h>
#include <asndlib.h>
#include <mp3player.h>

#include "global.h"

#include "bootanim_audio_mp3.h"
#include "gc0_jpg.h"
#include "gc1_jpg.h"
#include "gc2_jpg.h"
#include "gc3_jpg.h"
#include "gc4_jpg.h"
#include "gc5_jpg.h"
#include "gc6_jpg.h"
#include "gc7_jpg.h"
#include "gc8_jpg.h"
#include "gc9_jpg.h"
#include "gc10_jpg.h"
#include "gc11_jpg.h"
#include "gc12_jpg.h"
#include "gc13_jpg.h"
#include "gc14_jpg.h"
#include "gc15_jpg.h"
#include "gc16_jpg.h"
#include "gc17_jpg.h"
#include "gc18_jpg.h"
#include "gc19_jpg.h"
#include "gc20_jpg.h"
#include "gc21_jpg.h"
#include "gc22_jpg.h"
#include "gc23_jpg.h"
#include "gc24_jpg.h"
#include "gc25_jpg.h"
#include "gc26_jpg.h"
#include "gc27_jpg.h"
#include "gc28_jpg.h"
#include "gc29_jpg.h"
#include "gc30_jpg.h"
#include "gc31_jpg.h"
#include "gc32_jpg.h"
#include "gc33_jpg.h"
#include "gc34_jpg.h"
#include "gc35_jpg.h"
#include "gc36_jpg.h"
#include "gc37_jpg.h"
#include "gc38_jpg.h"
#include "gc39_jpg.h"
#include "gc40_jpg.h"
#include "gc41_jpg.h"
#include "gc42_jpg.h"
#include "gc43_jpg.h"
#include "gc44_jpg.h"
#include "gc45_jpg.h"
#include "gc46_jpg.h"
#include "gc47_jpg.h"
#include "gc48_jpg.h"
#include "gc49_jpg.h"
#include "gc50_jpg.h"
#include "gc51_jpg.h"
#include "gc52_jpg.h"
#include "gc53_jpg.h"
#include "gc54_jpg.h"
#include "gc55_jpg.h"
#include "gc56_jpg.h"
#include "gc57_jpg.h"
#include "gc58_jpg.h"
#include "gc59_jpg.h"
#include "gc60_jpg.h"
#include "gc61_jpg.h"
#include "gc62_jpg.h"
#include "gc63_jpg.h"
#include "gc64_jpg.h"
#include "gc65_jpg.h"
#include "gc66_jpg.h"
#include "gc67_jpg.h"
#include "gc68_jpg.h"
#include "gc69_jpg.h"
#include "gc70_jpg.h"
#include "gc71_jpg.h"
#include "gc72_jpg.h"
#include "gc73_jpg.h"
#include "gc74_jpg.h"
#include "gc75_jpg.h"
#include "gc76_jpg.h"
#include "gc77_jpg.h"
#include "gc78_jpg.h"
#include "gc79_jpg.h"
#include "gc80_jpg.h"
#include "gc81_jpg.h"
#include "gc82_jpg.h"
#include "gc83_jpg.h"
#include "gc84_jpg.h"
#include "gc85_jpg.h"
#include "gc86_jpg.h"
#include "gc87_jpg.h"
#include "gc88_jpg.h"
#include "gc89_jpg.h"
#include "gc90_jpg.h"
#include "gc91_jpg.h"
#include "gc92_jpg.h"
#include "gc93_jpg.h"
#include "gc94_jpg.h"
#include "gc95_jpg.h"
#include "gc96_jpg.h"
#include "gc97_jpg.h"
#include "gc98_jpg.h"
#include "gc99_jpg.h"
#include "gc100_jpg.h"
#include "gc101_jpg.h"
#include "gc102_jpg.h"
#include "gc103_jpg.h"
#include "gc104_jpg.h"
#include "gc105_jpg.h"
#include "gc106_jpg.h"
#include "gc107_jpg.h"
#include "gc108_jpg.h"
#include "gc109_jpg.h"
#include "gc110_jpg.h"
#include "gc111_jpg.h"
#include "gc112_jpg.h"
#include "gc113_jpg.h"
#include "gc114_jpg.h"
#include "gc115_jpg.h"
#include "gc116_jpg.h"
#include "gc117_jpg.h"
#include "gc118_jpg.h"
#include "gc119_jpg.h"
#include "gc120_jpg.h"
#include "gc121_jpg.h"
#include "gc122_jpg.h"
#include "gc123_jpg.h"
#include "gc124_jpg.h"
#include "gc125_jpg.h"
#include "gc126_jpg.h"
#include "gc127_jpg.h"
#include "gc128_jpg.h"
#include "gc129_jpg.h"
#include "gc130_jpg.h"
#include "gc131_jpg.h"
#include "gc132_jpg.h"
#include "gc133_jpg.h"
#include "gc134_jpg.h"
#include "gc135_jpg.h"
#include "gc136_jpg.h"
#include "gc137_jpg.h"
#include "gc138_jpg.h"
#include "gc139_jpg.h"
#include "gc140_jpg.h"
#include "gc141_jpg.h"
#include "gc142_jpg.h"
#include "gc143_jpg.h"
#include "gc144_jpg.h"
#include "gc145_jpg.h"
#include "gc146_jpg.h"
#include "gc147_jpg.h"
#include "gc148_jpg.h"
#include "gc149_jpg.h"
#include "gc150_jpg.h"
#include "gc151_jpg.h"
#include "gc152_jpg.h"
#include "gc151_jpg.h"
#include "gc152_jpg.h"
#include "gc153_jpg.h"
#include "gc154_jpg.h"
#include "gc155_jpg.h"
#include "gc156_jpg.h"
#include "gc157_jpg.h"
#include "gc158_jpg.h"
#include "gc159_jpg.h"
#include "gc160_jpg.h"
#include "gc161_jpg.h"
#include "gc162_jpg.h"
#include "gc163_jpg.h"
#include "gc164_jpg.h"
#include "gc165_jpg.h"
#include "gc166_jpg.h"
#include "gc167_jpg.h"
#include "gc168_jpg.h"
#include "gc169_jpg.h"
#include "gc170_jpg.h"
#include "gc171_jpg.h"
#include "gc172_jpg.h"
#include "gc173_jpg.h"
#include "gc174_jpg.h"
#include "gc175_jpg.h"
#include "gc176_jpg.h"
#include "gc177_jpg.h"
#include "gc178_jpg.h"
#include "gc179_jpg.h"
#include "gc180_jpg.h"
#include "gc181_jpg.h"
#include "gc182_jpg.h"
#include "gc183_jpg.h"
#include "gc184_jpg.h"
#include "gc185_jpg.h"
#include "gc186_jpg.h"
#include "gc187_jpg.h"
#include "gc188_jpg.h"
#include "gc189_jpg.h"
#include "gc190_jpg.h"
#include "gc191_jpg.h"
#include "gc192_jpg.h"
#include "gc193_jpg.h"
#include "gc194_jpg.h"
#include "gc195_jpg.h"
#include "gc196_jpg.h"
#include "gc197_jpg.h"
#include "gc198_jpg.h"
#include "gc199_jpg.h"
#include "gc200_jpg.h"
#include "gc201_jpg.h"
#include "gc202_jpg.h"
#include "gc203_jpg.h"
#include "gc204_jpg.h"
#include "gc205_jpg.h"
#include "gc206_jpg.h"
#include "gc207_jpg.h"
#include "gc208_jpg.h"
#include "gc209_jpg.h"
#include "gc210_jpg.h"
#include "gc211_jpg.h"
#include "gc212_jpg.h"
#include "gc213_jpg.h"
#include "gc214_jpg.h"
#include "gc215_jpg.h"
#include "gc216_jpg.h"
#include "gc217_jpg.h"
#include "gc218_jpg.h"
#include "gc219_jpg.h"
#include "gc220_jpg.h"
#include "gc221_jpg.h"
#include "gc222_jpg.h"
#include "gc223_jpg.h"
#include "gc224_jpg.h"
#include "gc225_jpg.h"
#include "gc226_jpg.h"
#include "gc227_jpg.h"
#include "gc228_jpg.h"
#include "gc229_jpg.h"
#include "gc230_jpg.h"
#include "gc231_jpg.h"
#include "gc232_jpg.h"
#include "gc233_jpg.h"
#include "gc234_jpg.h"
#include "gc235_jpg.h"
#include "gc236_jpg.h"
#include "gc237_jpg.h"
#include "gc238_jpg.h"
#include "gc239_jpg.h"
#include "gc240_jpg.h"
#include "gc241_jpg.h"
#include "gc242_jpg.h"
#include "gc243_jpg.h"
#include "gc244_jpg.h"
#include "gc245_jpg.h"
#include "gc246_jpg.h"
#include "gc247_jpg.h"
#include "gc248_jpg.h"
#include "gc249_jpg.h"
#include "gc250_jpg.h"
#include "gc251_jpg.h"
#include "gc252_jpg.h"
#include "gc253_jpg.h"
#include "gc254_jpg.h"
#include "gc255_jpg.h"
#include "gc256_jpg.h"
#include "gc257_jpg.h"
#include "gc258_jpg.h"
#include "gc259_jpg.h"
#include "gc260_jpg.h"
#include "gc261_jpg.h"
#include "gc262_jpg.h"
#include "gc263_jpg.h"
#include "gc264_jpg.h"
#include "gc265_jpg.h"
#include "gc266_jpg.h"
#include "gc267_jpg.h"
#include "gc268_jpg.h"
#include "gc269_jpg.h"
#include "gc270_jpg.h"
#include "gc271_jpg.h"
#include "gc272_jpg.h"
#include "gc273_jpg.h"
#include "gc274_jpg.h"
#include "gc275_jpg.h"
#include "gc276_jpg.h"
#include "gc277_jpg.h"
#include "gc278_jpg.h"
#include "gc279_jpg.h"
#include "gc280_jpg.h"
#include "gc281_jpg.h"
#include "gc282_jpg.h"
#include "gc283_jpg.h"
#include "gc284_jpg.h"
#include "gc285_jpg.h"
#include "gc286_jpg.h"

#include "mmmod_animation.h"

static inline unsigned int image_width(const GRRLIB_texImg *const image, unsigned int screen_width)
{
    return (screen_width - image->w) / 2;
}

static inline unsigned int image_height(const GRRLIB_texImg *const image, unsigned int screen_height)
{
    return (screen_height - image->h) / 2 + 20;
}

void play_bios_animation()
{
    const u8 *animation_frames[] = {
				 gc1_jpg
				, gc2_jpg
				, gc3_jpg
				, gc4_jpg
				, gc5_jpg
				, gc6_jpg
				, gc7_jpg
				, gc8_jpg
				, gc9_jpg
				, gc10_jpg
				, gc11_jpg
				, gc12_jpg
				, gc13_jpg
				, gc14_jpg
				, gc15_jpg
				, gc16_jpg
				, gc17_jpg
				, gc18_jpg
				, gc19_jpg
				, gc20_jpg
				, gc21_jpg
				, gc22_jpg
				, gc23_jpg
				, gc24_jpg
				, gc25_jpg
				, gc26_jpg
				, gc27_jpg
				, gc28_jpg
				, gc29_jpg
				, gc30_jpg
				, gc31_jpg
				, gc32_jpg
				, gc33_jpg
				, gc34_jpg
				, gc35_jpg
				, gc36_jpg
				, gc37_jpg
				, gc38_jpg
				, gc39_jpg
				, gc40_jpg
				, gc41_jpg
				, gc42_jpg
				, gc43_jpg
				, gc44_jpg
				, gc45_jpg
				, gc46_jpg
				, gc47_jpg
				, gc48_jpg
				, gc49_jpg
				, gc50_jpg
				, gc51_jpg
				, gc52_jpg
				, gc53_jpg
				, gc54_jpg
				, gc55_jpg
				, gc56_jpg
				, gc57_jpg
				, gc58_jpg
				, gc59_jpg
				, gc60_jpg
				, gc61_jpg
				, gc62_jpg
				, gc63_jpg
				, gc64_jpg
				, gc65_jpg
				, gc66_jpg
				, gc67_jpg
				, gc68_jpg
				, gc69_jpg
				, gc70_jpg
				, gc71_jpg
				, gc72_jpg
				, gc73_jpg
				, gc74_jpg
				, gc75_jpg
				, gc76_jpg
				, gc77_jpg
				, gc78_jpg
				, gc79_jpg
				, gc80_jpg
				, gc81_jpg
				, gc82_jpg
				, gc83_jpg
				, gc84_jpg
				, gc85_jpg
				, gc86_jpg
				, gc87_jpg
				, gc88_jpg
				, gc89_jpg
				, gc90_jpg
				, gc91_jpg
				, gc92_jpg
				, gc93_jpg
				, gc94_jpg
				, gc95_jpg
				, gc96_jpg
				, gc97_jpg
				, gc98_jpg
				, gc99_jpg
				, gc100_jpg
				, gc101_jpg
				, gc102_jpg
				, gc103_jpg
				, gc104_jpg
				, gc105_jpg
				, gc106_jpg
				, gc107_jpg
				, gc108_jpg
				, gc109_jpg
				, gc110_jpg
				, gc111_jpg
				, gc112_jpg
				, gc113_jpg
				, gc114_jpg
				, gc115_jpg
				, gc116_jpg
				, gc117_jpg
				, gc118_jpg
				, gc119_jpg
				, gc120_jpg
				, gc121_jpg
				, gc122_jpg
				, gc123_jpg
				, gc124_jpg
				, gc125_jpg
				, gc126_jpg
				, gc127_jpg
				, gc128_jpg
				, gc129_jpg
				, gc130_jpg
				, gc131_jpg
				, gc132_jpg
				, gc133_jpg
				, gc134_jpg
				, gc135_jpg
				, gc136_jpg
				, gc137_jpg
				, gc138_jpg
				, gc139_jpg
				, gc140_jpg
				, gc141_jpg
				, gc142_jpg
				, gc143_jpg
				, gc144_jpg
				, gc145_jpg
				, gc146_jpg
				, gc147_jpg
				, gc148_jpg
				, gc149_jpg
				, gc150_jpg
				, gc151_jpg
				, gc152_jpg
				, gc153_jpg
				, gc154_jpg
				, gc155_jpg
				, gc156_jpg
				, gc157_jpg
				, gc158_jpg
				, gc159_jpg
				, gc160_jpg
				, gc161_jpg
				, gc162_jpg
				, gc163_jpg
				, gc164_jpg
				, gc165_jpg
				, gc166_jpg
				, gc167_jpg
				, gc168_jpg
				, gc169_jpg
				, gc170_jpg
				, gc171_jpg
				, gc172_jpg
				, gc173_jpg
				, gc174_jpg
				, gc175_jpg
				, gc176_jpg
				, gc177_jpg
				, gc178_jpg
				, gc179_jpg
				, gc180_jpg
				, gc181_jpg
				, gc182_jpg
				, gc183_jpg
				, gc184_jpg
				, gc185_jpg
				, gc186_jpg
				, gc187_jpg
				, gc188_jpg
				, gc189_jpg
				, gc190_jpg
				, gc191_jpg
				, gc192_jpg
				, gc193_jpg
				, gc194_jpg
				, gc195_jpg
				, gc196_jpg
				, gc197_jpg
				, gc198_jpg
				, gc199_jpg
				, gc200_jpg
				, gc201_jpg
				, gc202_jpg
				, gc203_jpg
				, gc204_jpg
				, gc205_jpg
				, gc206_jpg
				, gc207_jpg
				, gc208_jpg
				, gc209_jpg
				, gc210_jpg
				, gc211_jpg
				, gc212_jpg
				, gc213_jpg
				, gc214_jpg
				, gc215_jpg
				, gc216_jpg
				, gc217_jpg
				, gc218_jpg
				, gc219_jpg
				, gc220_jpg
				, gc221_jpg
				, gc222_jpg
				, gc223_jpg
				, gc224_jpg
				, gc225_jpg
				, gc226_jpg
				, gc227_jpg
				, gc228_jpg
				, gc229_jpg
				, gc230_jpg
				, gc231_jpg
				, gc232_jpg
				, gc233_jpg
				, gc234_jpg
				, gc235_jpg
				, gc236_jpg
				, gc237_jpg
				, gc238_jpg
				, gc239_jpg
				, gc240_jpg
				, gc241_jpg
				, gc242_jpg
				, gc243_jpg
				, gc244_jpg
				, gc245_jpg
				, gc246_jpg
				, gc247_jpg
				, gc248_jpg
				, gc249_jpg
				, gc250_jpg
				, gc251_jpg
				, gc252_jpg
				, gc253_jpg
				, gc254_jpg
				, gc255_jpg
				, gc256_jpg
				, gc257_jpg
				, gc258_jpg
				, gc259_jpg
				, gc260_jpg
				, gc261_jpg
				, gc262_jpg
				, gc263_jpg
				, gc264_jpg
				, gc265_jpg
				, gc266_jpg
				, gc267_jpg
				, gc268_jpg
				, gc269_jpg
				, gc270_jpg
				, gc271_jpg
				, gc272_jpg
				, gc273_jpg
				, gc274_jpg
				, gc275_jpg
				, gc276_jpg
				, gc277_jpg
				, gc278_jpg
				, gc279_jpg
				, gc280_jpg
				, gc281_jpg
				, gc282_jpg
				, gc283_jpg
				, gc284_jpg
				, gc285_jpg
				, gc286_jpg};
    const unsigned int screen_width = rmode->fbWidth;
    const unsigned int screen_height = rmode->efbHeight;

    ASND_Init();
    MP3Player_Init();
    MP3Player_PlayBuffer(bootanim_audio_mp3, bootanim_audio_mp3_size, NULL);

    GRRLIB_texImg *animation_frame = GRRLIB_LoadTextureJPG(gc0_jpg);
    GRRLIB_FillScreen(BLACK);

    int i;
    for (i = 0; i < 286; i++)
    {
        const unsigned int height = image_height(animation_frame, screen_height);
        const unsigned int width = image_width(animation_frame, screen_width);
        GRRLIB_DrawImg(width, height, animation_frame, 0, 1, 1, 0xFFFFFFFF);
        GRRLIB_FreeTexture(animation_frame);
        animation_frame = GRRLIB_LoadTexture(animation_frames[i]); // no need to check for NULL, frames are guaranteed to exist
        GRRLIB_Render();
    }

    const unsigned int last_frame_height = image_height(animation_frame, screen_height);
    const unsigned int last_frame_width = image_width(animation_frame, screen_width);
    for (i = 255; i > 0; i -= 10)
    {
        GRRLIB_DrawImg(last_frame_width, last_frame_height, animation_frame, 0, 1, 1, RGBA(255, 255, 255, i));
        GRRLIB_Render();
    }

    GRRLIB_FreeTexture(animation_frame);
}
