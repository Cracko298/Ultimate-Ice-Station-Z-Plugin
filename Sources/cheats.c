#include "cheats.h"
#include <stdbool.h>
#include "hid.h"
#include "values.h"
#include <string.h>

u32 offset = 0;
u32 data = 0;
u32 patch_address = 0;

void	All_Status_Max(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x0483614, 0x3B9AC9FF);
	WRITEU32(offset + 0x0483620, 0x3B9AC9FF);
	WRITEU32(offset + 0x048361C, 0x3B9AC9FF);
	WRITEU32(offset + 0x0483628, 0x3B9AC9FF);
	WRITEU32(offset + 0x0483624, 0x461C3C00);
	WRITEU32(offset + 0x042C6AC, 0xFF001200);
	WRITEU32(offset + 0x0418740, 0xFF001200);
	WRITEU8(offset + 0x0483658, 0x00000000);
	offset = 0;
	data = 0;
	offset = 0x00000000;
	WRITEU32(offset + 0x03B65A8, 0x200A2E6F);
	WRITEU32(offset + 0x011B884, 0x63617243);
	WRITEU32(offset + 0x03B6598, 0x61657243);
	WRITEU32(offset + 0x03B65A4, 0x6B636172);
	WRITEU32(offset + 0x011B888, 0x00006F6B);
	WRITEU32(offset + 0x03B65A0, 0x43207942);
	WRITEU32(offset + 0x03B659C, 0x20646574);
	offset = 0;
	data = 0;
	offset = 0x30000000;
	WRITEU8(offset + 0x044E374, 0x00000001);
	WRITEU8(offset + 0x044E194, 0x00000001);
	offset = 0;
	data = 0;
	offset = 0x30000000;
	WRITEU32(offset + 0x0392490, 0xFFFFFFFF);
	WRITEU32(offset + 0x03925A8, 0x00000000);
	WRITEU32(offset + 0x03925B8, 0x00000000);
	WRITEU32(offset + 0x0392588, 0x00000000);
	WRITEU32(offset + 0x0392598, 0x00000000);
	WRITEU32(offset + 0x0392BD0, 0xFFFFFFFF);
	WRITEU32(offset + 0x0392CC8, 0x00000000);
	WRITEU32(offset + 0x0392CD8, 0x00000000);
	WRITEU32(offset + 0x0392CE8, 0x00000000);
	WRITEU32(offset + 0x03931E0, 0xFFFFFFFF);
	WRITEU32(offset + 0x03932D8, 0x00000000);
	WRITEU32(offset + 0x03932E8, 0x00000000);
	WRITEU32(offset + 0x03932F8, 0x00000000);
	WRITEU32(offset + 0x0393308, 0x00000000);
	WRITEU32(offset + 0x0393920, 0xFFFFFFFF);
	WRITEU32(offset + 0x0393A28, 0x00000000);
	WRITEU32(offset + 0x0393A38, 0x00000000);
	WRITEU32(offset + 0x0393A48, 0x00000000);
	WRITEU32(offset + 0x0393A18, 0x00000000);
	WRITEU32(offset + 0x0394060, 0xFFFFFFFF);
	WRITEU32(offset + 0x0394158, 0x00000000);
	WRITEU32(offset + 0x0394168, 0x00000000);
	WRITEU32(offset + 0x0394188, 0x00000000);
	WRITEU32(offset + 0x0394178, 0x00000000);
	WRITEU32(offset + 0x03947A0, 0xFFFFFFFF);
	WRITEU32(offset + 0x0394898, 0x00000000);
	WRITEU32(offset + 0x03948A8, 0x00000000);
	WRITEU32(offset + 0x03948B8, 0x00000000);
	WRITEU32(offset + 0x03948C8, 0x00000000);
	WRITEU32(offset + 0x03948D8, 0x00000000);
	offset = 0;
	data = 0;
	offset = 0x08000000;
	WRITEU32(offset + 0x00120A4, 0x6B636148);
	WRITEU32(offset + 0x00120A8, 0x79422073);
	WRITEU32(offset + 0x00120AC, 0x7243203A);
	WRITEU32(offset + 0x00120B0, 0x6F6B6361);
	WRITEU32(offset + 0x00120B4, 0x00383932);
	offset = 0;
	data = 0;
}

void	Max_Health(void)
{
	WRITEU32(offset + 0x0483614, 0x3B9AC9FF);
}

void	Max_Food(void)
{
	WRITEU32(offset + 0x048361C, 0x3B9AC9FF);
}

void	Max_Water(void)
{
	WRITEU32(offset + 0x0483620, 0x3B9AC9FF);
}

void	Max_Battery(void)
{
	WRITEU32(offset + 0x0483628, 0x3B9AC9FF);
}

void	Always_Day_vOne(void)
{
	WRITEU32(offset + 0x0418740, 0xFF001200);
}

void	Always_Day_vTwo(void)
{
	WRITEU32(offset + 0x0418740, 0xFFFF1200);
}

void	Always_Day_vThree(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x042C6AC, 0xFF001200);
	offset = 0;
	data = 0;
}

void	Always_Night_vOne(void)
{
	WRITEU32(offset + 0x0418740, 0xFF0F1200);
}

void	Max_Weather(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x0483624, 0x461C3C00);
	offset = 0;
	data = 0;
}

void	Gun_Anti_Crash(void)
{
	WRITEU32(offset + 0x016BB10, 0xE59600E0);
	WRITEU32(offset + 0x016BB4C, 0x00000000);
}

void	See_All_Names(void)
{
	offset = 0x00483740;
	for (int i = 0; i < 0x00000010; i++)
	{
		WRITEU8(offset + 0x0000000, 0x00000001);
		offset += 0x00000848;
	}
}

void	See_Through_Walls(void)
{
	offset = 0x08000000;
	if (is_pressed(0x00000800))
	{
		WRITEU32(offset + 0x084248C, 0x00000000);
		WRITEU32(offset + 0x080688C, 0x00000000);
		WRITEU32(offset + 0x0806894, 0x00000000);
		WRITEU32(offset + 0x0842484, 0x00000000);
		offset = 0;
		data = 0;
	}
}

void	Always_Refresh_Server_Button(void)
{
	offset = 0x30000000;
	WRITEU8(offset + 0x044E374, 0x00000001);
	WRITEU8(offset + 0x044E194, 0x00000001);
	offset = 0;
	data = 0;
}

void	Custom_Status_Colors(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x0392490, 0xFFFFFFFF);
	WRITEU32(offset + 0x03925A8, 0x00000000);
	WRITEU32(offset + 0x03925B8, 0x00000000);
	WRITEU32(offset + 0x0392588, 0x00000000);
	WRITEU32(offset + 0x0392598, 0x00000000);
	WRITEU32(offset + 0x0392BD0, 0xFFFFFFFF);
	WRITEU32(offset + 0x0392CC8, 0x00000000);
	WRITEU32(offset + 0x0392CD8, 0x00000000);
	WRITEU32(offset + 0x0392CE8, 0x00000000);
	WRITEU32(offset + 0x03931E0, 0xFFFFFFFF);
	WRITEU32(offset + 0x03932D8, 0x00000000);
	WRITEU32(offset + 0x03932E8, 0x00000000);
	WRITEU32(offset + 0x03932F8, 0x00000000);
	WRITEU32(offset + 0x0393308, 0x00000000);
	WRITEU32(offset + 0x0393920, 0xFFFFFFFF);
	WRITEU32(offset + 0x0393A28, 0x00000000);
	WRITEU32(offset + 0x0393A38, 0x00000000);
	WRITEU32(offset + 0x0393A48, 0x00000000);
	WRITEU32(offset + 0x0393A18, 0x00000000);
	WRITEU32(offset + 0x0394060, 0xFFFFFFFF);
	WRITEU32(offset + 0x0394158, 0x00000000);
	WRITEU32(offset + 0x0394168, 0x00000000);
	WRITEU32(offset + 0x0394188, 0x00000000);
	WRITEU32(offset + 0x0394178, 0x00000000);
	WRITEU32(offset + 0x03947A0, 0xFFFFFFFF);
	WRITEU32(offset + 0x0394898, 0x00000000);
	WRITEU32(offset + 0x03948A8, 0x00000000);
	WRITEU32(offset + 0x03948B8, 0x00000000);
	WRITEU32(offset + 0x03948C8, 0x00000000);
	WRITEU32(offset + 0x03948D8, 0x00000000);
	offset = 0;
	data = 0;
}

void	Snow_Plough_Drop(void)
{
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A0009D);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	Snowcat_Drop(void)
{
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A00011);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	Helicopter_Drop(void)
{
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A00010);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	Snowmobile_Drop(void)
{
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A0000F);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	Dog_Sled_Drop(void)
{
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A0009B);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	Big_Boat_Drop(void)
{
	WRITEU32(offset + 0x0000000, 0x00000000);
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A0009E);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	Small_Boat_Drop(void)
{
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A0000E);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	Normal_Door_Drop(void)
{
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A00001);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	Steel_Door_Drop(void)
{
	WRITEU32(offset + 0x024E138, 0xEB04C44E);
	WRITEU32(offset + 0x037F278, 0xE3A00004);
	WRITEU32(offset + 0x037F27C, 0xE12FFF1E);
}

void	No_Reload(void)
{
	offset = 0x00000000;
	if (READU32(offset + 0x0429610) != 0x00000000)
	{
		offset = READU32(offset + 0x0429610);
		WRITEU16(offset + 0x00000C8, 0x00000000);
		offset = 0;
		data = 0;
	}
	offset = 0x00000000;
	if (READU32(offset + 0x042964C) != 0x00000000)
	{
		offset = READU32(offset + 0x042964C);
		WRITEU16(offset + 0x00000C8, 0x00000000);
		offset = 0;
		data = 0;
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429688) != 0x00000000)
	{
		offset = READU32(offset + 0x0429688);
		WRITEU16(offset + 0x00000C8, 0x00000000);
		offset = 0;
		data = 0;
	}
	offset = 0x00000000;
	if (READU32(offset + 0x04296C4) != 0x00000000)
	{
		offset = READU32(offset + 0x04296C4);
		WRITEU16(offset + 0x00000C8, 0x00000000);
		offset = 0;
		data = 0;
	}
	offset = 0x00000000;
	if (READU32(offset + 0x0429700) != 0x00000000)
	{
		offset = READU32(offset + 0x0429700);
		WRITEU16(offset + 0x00000C8, 0x00000000);
		offset = 0;
		data = 0;
	}
	offset = 0x00000000;
	WRITEU8(offset + 0x0490848, 0x00000003);
	WRITEU8(offset + 0x04908C4, 0x00000003);
	WRITEU8(offset + 0x0490940, 0x00000003);
	WRITEU8(offset + 0x04909BC, 0x00000003);
	WRITEU8(offset + 0x0490A38, 0x00000003);
	WRITEU8(offset + 0x0490AB4, 0x00000003);
	WRITEU8(offset + 0x0490B30, 0x00000003);
	WRITEU8(offset + 0x0490BAC, 0x00000003);
	WRITEU8(offset + 0x0490C28, 0x00000003);
	WRITEU8(offset + 0x0490CA4, 0x00000003);
	WRITEU8(offset + 0x0490D20, 0x00000003);
	WRITEU8(offset + 0x0490D9C, 0x00000003);
	WRITEU8(offset + 0x0490E18, 0x00000003);
	WRITEU8(offset + 0x0490E94, 0x00000003);
	WRITEU8(offset + 0x0490F10, 0x00000003);
	WRITEU8(offset + 0x0490F8C, 0x00000003);
	WRITEU8(offset + 0x0491008, 0x00000003);
	WRITEU8(offset + 0x0491084, 0x00000003);
	WRITEU8(offset + 0x0491100, 0x00000003);
	WRITEU8(offset + 0x049117C, 0x00000003);
	WRITEU8(offset + 0x04911F8, 0x00000003);
	WRITEU8(offset + 0x0491274, 0x00000003);
	WRITEU8(offset + 0x04912F0, 0x00000003);
	WRITEU8(offset + 0x049136C, 0x00000003);
	WRITEU8(offset + 0x04913E8, 0x00000003);
	WRITEU8(offset + 0x0491464, 0x00000003);
	WRITEU8(offset + 0x04914E0, 0x00000003);
	WRITEU8(offset + 0x049155C, 0x00000003);
	WRITEU8(offset + 0x04915D8, 0x00000003);
	WRITEU8(offset + 0x0491654, 0x00000003);
	WRITEU8(offset + 0x04916D0, 0x00000003);
	WRITEU8(offset + 0x049174C, 0x00000003);
	WRITEU8(offset + 0x04917C8, 0x00000003);
	WRITEU8(offset + 0x0491844, 0x00000003);
	WRITEU8(offset + 0x04918C0, 0x00000003);
	WRITEU8(offset + 0x049193C, 0x00000003);
	WRITEU8(offset + 0x04919B8, 0x00000003);
	WRITEU8(offset + 0x0491A34, 0x00000003);
	WRITEU8(offset + 0x0491AA8, 0x00000003);
	WRITEU8(offset + 0x0491AB0, 0x00000003);
	WRITEU8(offset + 0x0491B2C, 0x00000003);
	WRITEU8(offset + 0x0491BA8, 0x00000003);
	WRITEU8(offset + 0x0491C24, 0x00000003);
	WRITEU8(offset + 0x0491CA0, 0x00000003);
	WRITEU8(offset + 0x0491D1C, 0x00000003);
	WRITEU8(offset + 0x0491D98, 0x00000003);
	WRITEU8(offset + 0x0491E14, 0x00000003);
	WRITEU8(offset + 0x0491E90, 0x00000003);
	WRITEU8(offset + 0x0491F0C, 0x00000003);
	WRITEU8(offset + 0x0491F88, 0x00000003);
	WRITEU8(offset + 0x0492004, 0x00000003);
	WRITEU8(offset + 0x0492080, 0x00000003);
	WRITEU8(offset + 0x04920FC, 0x00000003);
	WRITEU8(offset + 0x0492178, 0x00000003);
	WRITEU8(offset + 0x04921F4, 0x00000003);
	WRITEU8(offset + 0x0492270, 0x00000003);
	WRITEU8(offset + 0x04922EC, 0x00000003);
	WRITEU8(offset + 0x0492368, 0x00000003);
	WRITEU8(offset + 0x04923E4, 0x00000003);
	WRITEU8(offset + 0x0492460, 0x00000003);
	WRITEU8(offset + 0x04924DC, 0x00000003);
	WRITEU8(offset + 0x0492558, 0x00000003);
	WRITEU8(offset + 0x04925D4, 0x00000003);
	WRITEU8(offset + 0x0492650, 0x00000003);
	WRITEU8(offset + 0x04926CC, 0x00000003);
	WRITEU8(offset + 0x0492748, 0x00000003);
	WRITEU8(offset + 0x04927C4, 0x00000003);
	WRITEU8(offset + 0x0492840, 0x00000003);
	WRITEU8(offset + 0x04928BC, 0x00000003);
	WRITEU8(offset + 0x0492938, 0x00000003);
	WRITEU8(offset + 0x04929B4, 0x00000003);
	WRITEU8(offset + 0x0492A30, 0x00000003);
	WRITEU8(offset + 0x0492AAC, 0x00000003);
	WRITEU8(offset + 0x0492B28, 0x00000003);
	WRITEU8(offset + 0x0492BA4, 0x00000003);
	WRITEU8(offset + 0x0492C20, 0x00000003);
	WRITEU8(offset + 0x0492C9C, 0x00000003);
	WRITEU8(offset + 0x0492D18, 0x00000003);
	WRITEU8(offset + 0x0492D94, 0x00000003);
	WRITEU8(offset + 0x0492E10, 0x00000003);
	WRITEU8(offset + 0x0492E8C, 0x00000003);
	WRITEU8(offset + 0x0492F08, 0x00000003);
	WRITEU8(offset + 0x0492F84, 0x00000003);
	WRITEU8(offset + 0x0493000, 0x00000003);
	WRITEU8(offset + 0x049307C, 0x00000003);
	WRITEU8(offset + 0x04930F8, 0x00000003);
	WRITEU8(offset + 0x0493174, 0x00000003);
	WRITEU8(offset + 0x04931F0, 0x00000003);
	WRITEU8(offset + 0x049326C, 0x00000003);
	WRITEU8(offset + 0x04932E8, 0x00000003);
	WRITEU8(offset + 0x0493364, 0x00000003);
	WRITEU8(offset + 0x049345C, 0x00000003);
	WRITEU8(offset + 0x04934D8, 0x00000003);
	WRITEU8(offset + 0x04935D0, 0x00000003);
	WRITEU8(offset + 0x049364C, 0x00000003);
	WRITEU8(offset + 0x04936C8, 0x00000003);
	WRITEU8(offset + 0x0493744, 0x00000003);
	WRITEU8(offset + 0x04937C0, 0x00000003);
	WRITEU8(offset + 0x049383C, 0x00000003);
	WRITEU8(offset + 0x04938B8, 0x00000003);
	WRITEU8(offset + 0x0493934, 0x00000003);
	WRITEU8(offset + 0x04939B0, 0x00000003);
	WRITEU8(offset + 0x0493A2C, 0x00000003);
	WRITEU8(offset + 0x0493B24, 0x00000003);
	WRITEU8(offset + 0x0493BA0, 0x00000003);
	WRITEU8(offset + 0x0493C1C, 0x00000003);
	WRITEU8(offset + 0x0493C98, 0x00000003);
	WRITEU8(offset + 0x0493D14, 0x00000003);
	WRITEU8(offset + 0x0493D90, 0x00000003);
	WRITEU8(offset + 0x0493E0C, 0x00000003);
	WRITEU8(offset + 0x0493E88, 0x00000003);
	WRITEU8(offset + 0x0493F04, 0x00000003);
	WRITEU8(offset + 0x0493F80, 0x00000003);
	WRITEU8(offset + 0x0493FFC, 0x00000003);
	WRITEU8(offset + 0x0494078, 0x00000003);
	WRITEU8(offset + 0x04940F4, 0x00000003);
	WRITEU8(offset + 0x0494170, 0x00000003);
	WRITEU8(offset + 0x04941EC, 0x00000003);
	WRITEU8(offset + 0x0494268, 0x00000003);
	WRITEU8(offset + 0x04942E4, 0x00000003);
	WRITEU8(offset + 0x0494360, 0x00000003);
	WRITEU8(offset + 0x04943DC, 0x00000003);
	WRITEU8(offset + 0x0494458, 0x00000003);
	WRITEU8(offset + 0x04944D4, 0x00000003);
	WRITEU8(offset + 0x0494550, 0x00000003);
	WRITEU8(offset + 0x04945CC, 0x00000003);
	WRITEU8(offset + 0x0494648, 0x00000003);
	WRITEU8(offset + 0x04946C4, 0x00000003);
	WRITEU8(offset + 0x0494740, 0x00000003);
	WRITEU8(offset + 0x04947BC, 0x00000003);
	WRITEU8(offset + 0x0494838, 0x00000003);
	WRITEU8(offset + 0x04948B4, 0x00000003);
	WRITEU8(offset + 0x0494930, 0x00000003);
	WRITEU8(offset + 0x04949AC, 0x00000003);
	WRITEU8(offset + 0x0494A28, 0x00000003);
	WRITEU8(offset + 0x0494AA4, 0x00000003);
	WRITEU8(offset + 0x0494B20, 0x00000003);
	WRITEU8(offset + 0x0494B9C, 0x00000003);
	WRITEU8(offset + 0x0494C18, 0x00000003);
	WRITEU8(offset + 0x0494C94, 0x00000003);
	WRITEU8(offset + 0x0494D10, 0x00000003);
	WRITEU8(offset + 0x0494D8C, 0x00000003);
	WRITEU8(offset + 0x0494E08, 0x00000003);
	WRITEU8(offset + 0x0494E84, 0x00000003);
	WRITEU8(offset + 0x0494F00, 0x00000003);
	WRITEU8(offset + 0x0494F7C, 0x00000003);
	WRITEU8(offset + 0x0494FF8, 0x00000003);
	WRITEU8(offset + 0x0495074, 0x00000003);
	WRITEU8(offset + 0x04950F0, 0x00000003);
	WRITEU8(offset + 0x049516C, 0x00000003);
	WRITEU8(offset + 0x04951E8, 0x00000003);
	WRITEU8(offset + 0x0495264, 0x00000003);
	WRITEU8(offset + 0x04952E0, 0x00000003);
	WRITEU8(offset + 0x049535C, 0x00000003);
	WRITEU8(offset + 0x04953D8, 0x00000003);
	WRITEU8(offset + 0x0495454, 0x00000003);
	WRITEU8(offset + 0x04954D0, 0x00000003);
	WRITEU8(offset + 0x049554C, 0x00000003);
	WRITEU8(offset + 0x04955C8, 0x00000003);
	WRITEU8(offset + 0x0495644, 0x00000003);
	WRITEU8(offset + 0x04956C0, 0x00000003);
	WRITEU8(offset + 0x049573C, 0x00000003);
	WRITEU8(offset + 0x04957B8, 0x00000003);
	WRITEU8(offset + 0x0495834, 0x00000003);
	WRITEU8(offset + 0x04958B0, 0x00000003);
	WRITEU8(offset + 0x049592C, 0x00000003);
	WRITEU8(offset + 0x04959A8, 0x00000003);
	WRITEU8(offset + 0x0495A24, 0x00000003);
	WRITEU8(offset + 0x0495AA0, 0x00000003);
	WRITEU8(offset + 0x0495B1C, 0x00000003);
	WRITEU8(offset + 0x0495B98, 0x00000003);
	WRITEU8(offset + 0x0495C14, 0x00000003);
	WRITEU8(offset + 0x0495C90, 0x00000003);
	WRITEU8(offset + 0x0495D0C, 0x00000003);
	WRITEU8(offset + 0x0495D88, 0x00000003);
	WRITEU8(offset + 0x0495E04, 0x00000003);
	WRITEU8(offset + 0x0495E80, 0x00000003);
	WRITEU8(offset + 0x0495EFC, 0x00000003);
	WRITEU8(offset + 0x0495F78, 0x00000003);
	WRITEU8(offset + 0x0495FF4, 0x00000003);
	WRITEU8(offset + 0x0496070, 0x00000003);
	WRITEU8(offset + 0x04960EC, 0x00000003);
	WRITEU8(offset + 0x0496168, 0x00000003);
	WRITEU8(offset + 0x04961E4, 0x00000003);
	WRITEU8(offset + 0x0496260, 0x00000003);
	WRITEU8(offset + 0x04962DC, 0x00000003);
	WRITEU8(offset + 0x0496358, 0x00000003);
	WRITEU8(offset + 0x04963D4, 0x00000003);
	WRITEU8(offset + 0x0496450, 0x00000003);
	WRITEU8(offset + 0x04964CC, 0x00000003);
	WRITEU8(offset + 0x0496548, 0x00000003);
	WRITEU8(offset + 0x04965C4, 0x00000003);
	WRITEU8(offset + 0x0496640, 0x00000003);
	WRITEU8(offset + 0x04966BC, 0x00000003);
	WRITEU8(offset + 0x0496738, 0x00000003);
	WRITEU8(offset + 0x04967B4, 0x00000003);
	WRITEU8(offset + 0x0496830, 0x00000003);
	WRITEU8(offset + 0x04968AC, 0x00000003);
	WRITEU8(offset + 0x0496928, 0x00000003);
	WRITEU8(offset + 0x04969A4, 0x00000003);
	WRITEU8(offset + 0x0496A20, 0x00000003);
	WRITEU8(offset + 0x0496A9C, 0x00000003);
	WRITEU8(offset + 0x0496B18, 0x00000003);
	WRITEU8(offset + 0x0496B94, 0x00000003);
	WRITEU8(offset + 0x0496C10, 0x00000003);
	WRITEU8(offset + 0x0496C8C, 0x00000003);
	WRITEU8(offset + 0x0496D08, 0x00000003);
	WRITEU8(offset + 0x0496D84, 0x00000003);
	WRITEU8(offset + 0x0496E00, 0x00000003);
	WRITEU8(offset + 0x0496E7C, 0x00000003);
	WRITEU8(offset + 0x0496EF8, 0x00000003);
	WRITEU8(offset + 0x0496F74, 0x00000003);
	WRITEU8(offset + 0x0496FF0, 0x00000003);
	WRITEU8(offset + 0x049706C, 0x00000003);
	WRITEU8(offset + 0x04970E8, 0x00000003);
	WRITEU8(offset + 0x0497164, 0x00000003);
	WRITEU8(offset + 0x04971E0, 0x00000003);
	WRITEU8(offset + 0x049725C, 0x00000003);
	WRITEU8(offset + 0x04972D8, 0x00000003);
	WRITEU8(offset + 0x0497354, 0x00000003);
	WRITEU8(offset + 0x04973D0, 0x00000003);
	WRITEU8(offset + 0x049744C, 0x00000003);
	WRITEU8(offset + 0x04974C8, 0x00000003);
	WRITEU8(offset + 0x0497544, 0x00000003);
	WRITEU8(offset + 0x04975C0, 0x00000003);
	WRITEU8(offset + 0x049763C, 0x00000003);
	WRITEU8(offset + 0x04976B8, 0x00000003);
	WRITEU8(offset + 0x0497734, 0x00000003);
	WRITEU8(offset + 0x04977B0, 0x00000003);
	WRITEU8(offset + 0x049782C, 0x00000003);
	WRITEU8(offset + 0x04978A8, 0x00000003);
	WRITEU8(offset + 0x0497924, 0x00000003);
	WRITEU8(offset + 0x04979A0, 0x00000003);
	WRITEU8(offset + 0x0497A1C, 0x00000003);
	WRITEU8(offset + 0x0497A98, 0x00000003);
	WRITEU8(offset + 0x0497B14, 0x00000003);
	WRITEU8(offset + 0x0497B90, 0x00000003);
	WRITEU8(offset + 0x0497C0C, 0x00000003);
	WRITEU8(offset + 0x0497C88, 0x00000003);
	WRITEU8(offset + 0x0497D04, 0x00000003);
	WRITEU8(offset + 0x0497D80, 0x00000003);
	WRITEU8(offset + 0x0497DFC, 0x00000003);
	WRITEU8(offset + 0x0497E78, 0x00000003);
	WRITEU8(offset + 0x0497EF4, 0x00000003);
	WRITEU8(offset + 0x0497F70, 0x00000003);
	WRITEU8(offset + 0x0497FEC, 0x00000003);
	WRITEU8(offset + 0x0498068, 0x00000003);
	WRITEU8(offset + 0x04980E4, 0x00000003);
	WRITEU8(offset + 0x0498160, 0x00000003);
	WRITEU8(offset + 0x04981DC, 0x00000003);
	WRITEU8(offset + 0x0498258, 0x00000003);
	WRITEU8(offset + 0x04982D4, 0x00000003);
	WRITEU8(offset + 0x0498350, 0x00000003);
	WRITEU8(offset + 0x04983CC, 0x00000003);
	WRITEU8(offset + 0x0498448, 0x00000003);
	WRITEU8(offset + 0x04984C4, 0x00000003);
	WRITEU8(offset + 0x0498540, 0x00000003);
	WRITEU8(offset + 0x04985BC, 0x00000003);
	WRITEU8(offset + 0x0498638, 0x00000003);
	WRITEU8(offset + 0x04986B4, 0x00000003);
	WRITEU8(offset + 0x0498730, 0x00000003);
	WRITEU8(offset + 0x04987AC, 0x00000003);
	WRITEU8(offset + 0x0498828, 0x00000003);
	WRITEU8(offset + 0x04988A4, 0x00000003);
	WRITEU8(offset + 0x0498920, 0x00000003);
	WRITEU8(offset + 0x049899C, 0x00000003);
	WRITEU8(offset + 0x0498A18, 0x00000003);
	WRITEU8(offset + 0x0498A94, 0x00000003);
	WRITEU8(offset + 0x0498B10, 0x00000003);
	WRITEU8(offset + 0x0498B8C, 0x00000003);
	WRITEU8(offset + 0x0498C08, 0x00000003);
	WRITEU8(offset + 0x0498C84, 0x00000003);
	WRITEU8(offset + 0x0498D00, 0x00000003);
	WRITEU8(offset + 0x0498D7C, 0x00000003);
	WRITEU8(offset + 0x0498DF8, 0x00000003);
	WRITEU8(offset + 0x0498E74, 0x00000003);
	WRITEU8(offset + 0x0498EF0, 0x00000003);
	WRITEU8(offset + 0x0498F6C, 0x00000003);
	WRITEU8(offset + 0x0498FE8, 0x00000003);
	WRITEU8(offset + 0x0499064, 0x00000003);
	WRITEU8(offset + 0x04990E0, 0x00000003);
	WRITEU8(offset + 0x049915C, 0x00000003);
	WRITEU8(offset + 0x04991D8, 0x00000003);
	WRITEU8(offset + 0x0499254, 0x00000003);
	WRITEU8(offset + 0x04992D0, 0x00000003);
	WRITEU8(offset + 0x049934C, 0x00000003);
	WRITEU8(offset + 0x04993C8, 0x00000003);
	WRITEU8(offset + 0x0499444, 0x00000003);
	WRITEU8(offset + 0x04994C0, 0x00000003);
	WRITEU8(offset + 0x049953C, 0x00000003);
	WRITEU8(offset + 0x04995B8, 0x00000003);
	offset = 0;
	data = 0;
	offset = 0x00000000;
	WRITEU32(offset + 0x04296F4, 0x0000270F);
	offset = 0;
	data = 0;
}

void	Rapid_Fire(void)
{
	if (READU32(offset + 0x0429610) != 0x00000000)
	{
		offset = READU32(offset + 0x0429610);
		WRITEU32(offset + 0x000006D, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x042964D) != 0x00000000)
	{
		offset = READU32(offset + 0x042964D);
		WRITEU32(offset + 0x000006D, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x0429688) != 0x00000000)
	{
		offset = READU32(offset + 0x0429688);
		WRITEU32(offset + 0x000006D, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x04296C4) != 0x00000000)
	{
		offset = READU32(offset + 0x04296C4);
		WRITEU32(offset + 0x000006C, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x0429700) != 0x00000000)
	{
		offset = READU32(offset + 0x0429700);
		WRITEU32(offset + 0x000006C, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x0429610) != 0x00000000)
	{
		offset = READU32(offset + 0x0429610);
		WRITEU32(offset + 0x000006C, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x042964C) != 0x00000000)
	{
		offset = READU32(offset + 0x042964C);
		WRITEU32(offset + 0x000006C, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x0429688) != 0x00000000)
	{
		offset = READU32(offset + 0x0429688);
		WRITEU32(offset + 0x000006C, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x04296C4) != 0x00000000)
	{
		offset = READU32(offset + 0x04296C4);
		WRITEU32(offset + 0x000006C, 0x00000000);
		offset = 0;
		data = 0;
	}
	if (READU32(offset + 0x0429700) != 0x00000000)
	{
		offset = READU32(offset + 0x0429700);
		WRITEU32(offset + 0x000006C, 0x00000000);
		offset = 0;
		data = 0;
	}
}

void	No_Recoil(void)
{
	if (is_pressed(0x00000100))
	{
		WRITEU32(offset + 0x0482FE4, 0x00000000);
		WRITEU32(offset + 0x0482FE4, 0xAF7419B8);
		offset = 0;
		data = 0;
	}
}

void	All_Ammo_Generator(void)
{
	offset = 0x00000000;
	if (is_pressed(0x00000001))
	{
		WRITEU8(offset + 0x042972D, 0x0000000F);
		WRITEU32(offset + 0x0429730, 0x0000270F);
		WRITEU32(offset + 0x0000000, 0x00000000);
		WRITEU8(offset + 0x042990D, 0x00000010);
		WRITEU32(offset + 0x0429910, 0x0000270F);
		WRITEU8(offset + 0x0429AED, 0x00000013);
		WRITEU32(offset + 0x0429AF0, 0x0000270F);
		WRITEU8(offset + 0x0429769, 0x00000012);
		WRITEU32(offset + 0x042976C, 0x0000270F);
		WRITEU8(offset + 0x0429949, 0x00000011);
		WRITEU32(offset + 0x042994C, 0x0000270F);
		offset = 0;
		data = 0;
	}
}

void	Chat_Spammer(void)
{
	if (is_pressed(0x00000002))
	{
		WRITEU32(offset + 0x0429CDC, 0x00080001);
		for (int i = 0; i < 0x00000005; i++)
		{
			data = READU32(offset + 0x00000024);
			WRITEU32(offset + 0x00000044, data);
			continue;
		}
		offset = 0x00000000;
		WRITEU32(offset + 0x0429F5C, 0x00000002);
	}
	if (is_pressed(0x00000002))
	{
		WRITEU32(offset + 0x0429CDC, 0x00080001);
		for (int i = 0; i < 0x00000005; i++)
		{
			data = READU32(offset + 0x00000024);
			WRITEU32(offset + 0x00000044, data);
			continue;
		}
		offset = 0x00000000;
		WRITEU32(offset + 0x0429F5C, 0x00000002);
	}
}

void	Uppercase_Lowercase_Keyboard(void)
{
	if (is_pressed(0x00000040))
	{
		if (READU16(offset + 0x0429F44) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F44, 0x00000041);
		}
		if (READU16(offset + 0x0429F44) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F44, 0x00000042);
		}
		if (READU16(offset + 0x0429F44) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F44, 0x00000043);
		}
		if (READU16(offset + 0x0429F44) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F44, 0x00000044);
		}
		if (READU16(offset + 0x0429F44) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F44, 0x00000045);
		}
		if (READU16(offset + 0x0429F44) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F44, 0x00000046);
		}
		if (READU16(offset + 0x0429F44) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F44, 0x00000047);
		}
		if (READU16(offset + 0x0429F44) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F44, 0x00000048);
		}
		if (READU16(offset + 0x0429F44) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F44, 0x00000049);
		}
		if (READU16(offset + 0x0429F44) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F44, 0x0000004A);
		}
		if (READU16(offset + 0x0429F44) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F44, 0x0000004B);
		}
		if (READU16(offset + 0x0429F44) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F44, 0x0000004C);
		}
		if (READU16(offset + 0x0429F44) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F44, 0x0000004D);
		}
		if (READU16(offset + 0x0429F44) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F44, 0x0000004E);
		}
		if (READU16(offset + 0x0429F44) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F44, 0x0000004F);
		}
		if (READU16(offset + 0x0429F44) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F44, 0x00000050);
		}
		if (READU16(offset + 0x0429F44) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F44, 0x00000051);
		}
		if (READU16(offset + 0x0429F44) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F44, 0x00000052);
		}
		if (READU16(offset + 0x0429F44) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F44, 0x00000053);
		}
		if (READU16(offset + 0x0429F44) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F44, 0x00000054);
		}
		if (READU16(offset + 0x0429F44) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F44, 0x00000055);
		}
		if (READU16(offset + 0x0429F44) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F44, 0x00000056);
		}
		if (READU16(offset + 0x0429F44) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F44, 0x00000057);
		}
		if (READU16(offset + 0x0429F44) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F44, 0x00000058);
		}
		if (READU16(offset + 0x0429F44) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F44, 0x00000059);
		}
		if (READU16(offset + 0x0429F44) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F44, 0x0000005A);
		}
		if (READU16(offset + 0x0429F45) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F45, 0x00000041);
		}
		if (READU16(offset + 0x0429F45) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F45, 0x00000042);
		}
		if (READU16(offset + 0x0429F45) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F45, 0x00000043);
		}
		if (READU16(offset + 0x0429F45) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F45, 0x00000044);
		}
		if (READU16(offset + 0x0429F45) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F45, 0x00000045);
		}
		if (READU16(offset + 0x0429F45) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F45, 0x00000046);
		}
		if (READU16(offset + 0x0429F45) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F45, 0x00000047);
		}
		if (READU16(offset + 0x0429F45) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F45, 0x00000048);
		}
		if (READU16(offset + 0x0429F45) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F45, 0x00000049);
		}
		if (READU16(offset + 0x0429F45) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F45, 0x0000004A);
		}
		if (READU16(offset + 0x0429F45) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F45, 0x0000004B);
		}
		if (READU16(offset + 0x0429F45) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F45, 0x0000004C);
		}
		if (READU16(offset + 0x0429F45) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F45, 0x0000004D);
		}
		if (READU16(offset + 0x0429F45) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F45, 0x0000004E);
		}
		if (READU16(offset + 0x0429F45) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F45, 0x0000004F);
		}
		if (READU16(offset + 0x0429F45) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F45, 0x00000050);
		}
		if (READU16(offset + 0x0429F45) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F45, 0x00000051);
		}
		if (READU16(offset + 0x0429F45) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F45, 0x00000052);
		}
		if (READU16(offset + 0x0429F45) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F45, 0x00000053);
		}
		if (READU16(offset + 0x0429F45) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F45, 0x00000054);
		}
		if (READU16(offset + 0x0429F45) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F45, 0x00000055);
		}
		if (READU16(offset + 0x0429F45) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F45, 0x00000056);
		}
		if (READU16(offset + 0x0429F45) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F45, 0x00000057);
		}
		if (READU16(offset + 0x0429F45) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F45, 0x00000058);
		}
		if (READU16(offset + 0x0429F45) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F45, 0x00000059);
		}
		if (READU16(offset + 0x0429F45) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F45, 0x0000005A);
		}
		if (READU16(offset + 0x0429F46) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F46, 0x00000041);
		}
		if (READU16(offset + 0x0429F46) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F46, 0x00000042);
		}
		if (READU16(offset + 0x0429F46) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F46, 0x00000043);
		}
		if (READU16(offset + 0x0429F46) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F46, 0x00000044);
		}
		if (READU16(offset + 0x0429F46) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F46, 0x00000045);
		}
		if (READU16(offset + 0x0429F46) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F46, 0x00000046);
		}
		if (READU16(offset + 0x0429F46) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F46, 0x00000047);
		}
		if (READU16(offset + 0x0429F46) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F46, 0x00000048);
		}
		if (READU16(offset + 0x0429F46) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F46, 0x00000049);
		}
		if (READU16(offset + 0x0429F46) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F46, 0x0000004A);
		}
		if (READU16(offset + 0x0429F46) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F46, 0x0000004B);
		}
		if (READU16(offset + 0x0429F46) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F46, 0x0000004C);
		}
		if (READU16(offset + 0x0429F46) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F46, 0x0000004D);
		}
		if (READU16(offset + 0x0429F46) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F46, 0x0000004E);
		}
		if (READU16(offset + 0x0429F46) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F46, 0x0000004F);
		}
		if (READU16(offset + 0x0429F46) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F46, 0x00000050);
		}
		if (READU16(offset + 0x0429F46) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F46, 0x00000051);
		}
		if (READU16(offset + 0x0429F46) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F46, 0x00000052);
		}
		if (READU16(offset + 0x0429F46) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F46, 0x00000053);
		}
		if (READU16(offset + 0x0429F46) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F46, 0x00000054);
		}
		if (READU16(offset + 0x0429F46) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F46, 0x00000055);
		}
		if (READU16(offset + 0x0429F46) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F46, 0x00000056);
		}
		if (READU16(offset + 0x0429F46) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F46, 0x00000057);
		}
		if (READU16(offset + 0x0429F46) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F46, 0x00000058);
		}
		if (READU16(offset + 0x0429F46) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F46, 0x00000059);
		}
		if (READU16(offset + 0x0429F46) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F46, 0x0000005A);
		}
		if (READU16(offset + 0x0429F47) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F47, 0x00000041);
		}
		if (READU16(offset + 0x0429F47) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F47, 0x00000042);
		}
		if (READU16(offset + 0x0429F47) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F47, 0x00000043);
		}
		if (READU16(offset + 0x0429F47) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F47, 0x00000044);
		}
		if (READU16(offset + 0x0429F47) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F47, 0x00000045);
		}
		if (READU16(offset + 0x0429F47) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F47, 0x00000046);
		}
		if (READU16(offset + 0x0429F47) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F47, 0x00000047);
		}
		if (READU16(offset + 0x0429F47) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F47, 0x00000048);
		}
		if (READU16(offset + 0x0429F47) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F47, 0x00000049);
		}
		if (READU16(offset + 0x0429F47) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F47, 0x0000004A);
		}
		if (READU16(offset + 0x0429F47) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F47, 0x0000004B);
		}
		if (READU16(offset + 0x0429F47) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F47, 0x0000004C);
		}
		if (READU16(offset + 0x0429F47) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F47, 0x0000004D);
		}
		if (READU16(offset + 0x0429F47) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F47, 0x0000004E);
		}
		if (READU16(offset + 0x0429F47) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F47, 0x0000004F);
		}
		if (READU16(offset + 0x0429F47) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F47, 0x00000050);
		}
		if (READU16(offset + 0x0429F47) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F47, 0x00000051);
		}
		if (READU16(offset + 0x0429F47) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F47, 0x00000052);
		}
		if (READU16(offset + 0x0429F47) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F47, 0x00000053);
		}
		if (READU16(offset + 0x0429F47) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F47, 0x00000054);
		}
		if (READU16(offset + 0x0429F47) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F47, 0x00000055);
		}
		if (READU16(offset + 0x0429F47) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F47, 0x00000056);
		}
		if (READU16(offset + 0x0429F47) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F47, 0x00000057);
		}
		if (READU16(offset + 0x0429F47) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F47, 0x00000058);
		}
		if (READU16(offset + 0x0429F47) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F47, 0x00000059);
		}
		if (READU16(offset + 0x0429F47) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F47, 0x0000005A);
		}
		if (READU16(offset + 0x0429F48) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F48, 0x00000041);
		}
		if (READU16(offset + 0x0429F48) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F48, 0x00000042);
		}
		if (READU16(offset + 0x0429F48) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F48, 0x00000043);
		}
		if (READU16(offset + 0x0429F48) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F48, 0x00000044);
		}
		if (READU16(offset + 0x0429F48) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F48, 0x00000045);
		}
		if (READU16(offset + 0x0429F48) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F48, 0x00000046);
		}
		if (READU16(offset + 0x0429F48) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F48, 0x00000047);
		}
		if (READU16(offset + 0x0429F48) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F48, 0x00000048);
		}
		if (READU16(offset + 0x0429F48) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F48, 0x00000049);
		}
		if (READU16(offset + 0x0429F48) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F48, 0x0000004A);
		}
		if (READU16(offset + 0x0429F48) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F48, 0x0000004B);
		}
		if (READU16(offset + 0x0429F48) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F48, 0x0000004C);
		}
		if (READU16(offset + 0x0429F48) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F48, 0x0000004D);
		}
		if (READU16(offset + 0x0429F48) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F48, 0x0000004E);
		}
		if (READU16(offset + 0x0429F48) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F48, 0x0000004F);
		}
		if (READU16(offset + 0x0429F48) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F48, 0x00000050);
		}
		if (READU16(offset + 0x0429F48) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F48, 0x00000051);
		}
		if (READU16(offset + 0x0429F48) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F48, 0x00000052);
		}
		if (READU16(offset + 0x0429F48) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F48, 0x00000053);
		}
		if (READU16(offset + 0x0429F48) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F48, 0x00000054);
		}
		if (READU16(offset + 0x0429F48) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F48, 0x00000055);
		}
		if (READU16(offset + 0x0429F48) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F48, 0x00000056);
		}
		if (READU16(offset + 0x0429F48) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F48, 0x00000057);
		}
		if (READU16(offset + 0x0429F48) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F48, 0x00000058);
		}
		if (READU16(offset + 0x0429F48) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F48, 0x00000059);
		}
		if (READU16(offset + 0x0429F48) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F48, 0x0000005A);
		}
		if (READU16(offset + 0x0429F49) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F49, 0x00000041);
		}
		if (READU16(offset + 0x0429F49) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F49, 0x00000042);
		}
		if (READU16(offset + 0x0429F49) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F49, 0x00000043);
		}
		if (READU16(offset + 0x0429F49) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F49, 0x00000044);
		}
		if (READU16(offset + 0x0429F49) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F49, 0x00000045);
		}
		if (READU16(offset + 0x0429F49) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F49, 0x00000046);
		}
		if (READU16(offset + 0x0429F49) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F49, 0x00000047);
		}
		if (READU16(offset + 0x0429F49) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F49, 0x00000048);
		}
		if (READU16(offset + 0x0429F49) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F49, 0x00000049);
		}
		if (READU16(offset + 0x0429F49) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F49, 0x0000004A);
		}
		if (READU16(offset + 0x0429F49) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F49, 0x0000004B);
		}
		if (READU16(offset + 0x0429F49) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F49, 0x0000004C);
		}
		if (READU16(offset + 0x0429F49) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F49, 0x0000004D);
		}
		if (READU16(offset + 0x0429F49) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F49, 0x0000004E);
		}
		if (READU16(offset + 0x0429F49) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F49, 0x0000004F);
		}
		if (READU16(offset + 0x0429F49) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F49, 0x00000050);
		}
		if (READU16(offset + 0x0429F49) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F49, 0x00000051);
		}
		if (READU16(offset + 0x0429F49) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F49, 0x00000052);
		}
		if (READU16(offset + 0x0429F49) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F49, 0x00000053);
		}
		if (READU16(offset + 0x0429F49) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F49, 0x00000054);
		}
		if (READU16(offset + 0x0429F49) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F49, 0x00000055);
		}
		if (READU16(offset + 0x0429F49) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F49, 0x00000056);
		}
		if (READU16(offset + 0x0429F49) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F49, 0x00000057);
		}
		if (READU16(offset + 0x0429F49) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F49, 0x00000058);
		}
		if (READU16(offset + 0x0429F49) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F49, 0x00000059);
		}
		if (READU16(offset + 0x0429F49) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F49, 0x0000005A);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000041);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000042);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000043);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000044);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000045);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000046);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000047);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000048);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000049);
		}
		if (READU16(offset + 0x0429F4A) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F4A, 0x0000004A);
		}
		if (READU16(offset + 0x0429F4A) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F4A, 0x0000004B);
		}
		if (READU16(offset + 0x0429F4A) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F4A, 0x0000004C);
		}
		if (READU16(offset + 0x0429F4A) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F4A, 0x0000004D);
		}
		if (READU16(offset + 0x0429F4A) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F4A, 0x0000004E);
		}
		if (READU16(offset + 0x0429F4A) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F4A, 0x0000004F);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000050);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000051);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000052);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000053);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000054);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000055);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000056);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000057);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000058);
		}
		if (READU16(offset + 0x0429F4A) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F4A, 0x00000059);
		}
		if (READU16(offset + 0x0429F4A) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F4A, 0x0000005A);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000041);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000042);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000043);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000044);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000045);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000046);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000047);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000048);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000049);
		}
		if (READU16(offset + 0x0429F4B) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F4B, 0x0000004A);
		}
		if (READU16(offset + 0x0429F4B) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F4B, 0x0000004B);
		}
		if (READU16(offset + 0x0429F4B) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F4B, 0x0000004C);
		}
		if (READU16(offset + 0x0429F4B) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F4B, 0x0000004D);
		}
		if (READU16(offset + 0x0429F4B) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F4B, 0x0000004E);
		}
		if (READU16(offset + 0x0429F4B) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F4B, 0x0000004F);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000050);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000051);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000052);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000053);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000054);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000055);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000056);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000057);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000058);
		}
		if (READU16(offset + 0x0429F4B) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F4B, 0x00000059);
		}
		if (READU16(offset + 0x0429F4B) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F4B, 0x0000005A);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000041);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000042);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000043);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000044);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000045);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000046);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000047);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000048);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000049);
		}
		if (READU16(offset + 0x0429F4C) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F4C, 0x0000004A);
		}
		if (READU16(offset + 0x0429F4C) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F4C, 0x0000004B);
		}
		if (READU16(offset + 0x0429F4C) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F4C, 0x0000004C);
		}
		if (READU16(offset + 0x0429F4C) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F4C, 0x0000004D);
		}
		if (READU16(offset + 0x0429F4C) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F4C, 0x0000004E);
		}
		if (READU16(offset + 0x0429F4C) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F4C, 0x0000004F);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000050);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000051);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000052);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000053);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000054);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000055);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000056);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000057);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000058);
		}
		if (READU16(offset + 0x0429F4C) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F4C, 0x00000059);
		}
		if (READU16(offset + 0x0429F4C) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F4C, 0x0000005A);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000041);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000042);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000043);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000044);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000045);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000046);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000047);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000048);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000049);
		}
		if (READU16(offset + 0x0429F4D) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F4D, 0x0000004A);
		}
		if (READU16(offset + 0x0429F4D) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F4D, 0x0000004B);
		}
		if (READU16(offset + 0x0429F4D) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F4D, 0x0000004C);
		}
		if (READU16(offset + 0x0429F4D) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F4D, 0x0000004D);
		}
		if (READU16(offset + 0x0429F4D) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F4D, 0x0000004E);
		}
		if (READU16(offset + 0x0429F4D) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F4D, 0x0000004F);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000050);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000051);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000052);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000053);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000054);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000055);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000056);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000057);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000058);
		}
		if (READU16(offset + 0x0429F4D) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F4D, 0x00000059);
		}
		if (READU16(offset + 0x0429F4D) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F4D, 0x0000005A);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000041);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000042);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000043);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000044);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000045);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000046);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000047);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000048);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000049);
		}
		if (READU16(offset + 0x0429F4E) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F4E, 0x0000004A);
		}
		if (READU16(offset + 0x0429F4E) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F4E, 0x0000004B);
		}
		if (READU16(offset + 0x0429F4E) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F4E, 0x0000004C);
		}
		if (READU16(offset + 0x0429F4E) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F4E, 0x0000004D);
		}
		if (READU16(offset + 0x0429F4E) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F4E, 0x0000004E);
		}
		if (READU16(offset + 0x0429F4E) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F4E, 0x0000004F);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000050);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000051);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000052);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000053);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000054);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000055);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000056);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000057);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000058);
		}
		if (READU16(offset + 0x0429F4E) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F4E, 0x00000059);
		}
		if (READU16(offset + 0x0429F4E) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F4E, 0x0000005A);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000041);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000042);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000043);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000044);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000045);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000046);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000047);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000048);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000049);
		}
		if (READU16(offset + 0x0429F4F) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F4F, 0x0000004A);
		}
		if (READU16(offset + 0x0429F4F) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F4F, 0x0000004B);
		}
		if (READU16(offset + 0x0429F4F) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F4F, 0x0000004C);
		}
		if (READU16(offset + 0x0429F4F) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F4F, 0x0000004D);
		}
		if (READU16(offset + 0x0429F4F) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F4F, 0x0000004E);
		}
		if (READU16(offset + 0x0429F4F) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F4F, 0x0000004F);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000050);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000051);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000052);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000053);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000054);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000055);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000056);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000057);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000058);
		}
		if (READU16(offset + 0x0429F4F) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F4F, 0x00000059);
		}
		if (READU16(offset + 0x0429F4F) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F4F, 0x0000005A);
		}
		if (READU16(offset + 0x0429F50) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F50, 0x00000041);
		}
		if (READU16(offset + 0x0429F50) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F50, 0x00000042);
		}
		if (READU16(offset + 0x0429F50) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F50, 0x00000043);
		}
		if (READU16(offset + 0x0429F50) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F50, 0x00000044);
		}
		if (READU16(offset + 0x0429F50) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F50, 0x00000045);
		}
		if (READU16(offset + 0x0429F50) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F50, 0x00000046);
		}
		if (READU16(offset + 0x0429F50) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F50, 0x00000047);
		}
		if (READU16(offset + 0x0429F50) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F50, 0x00000048);
		}
		if (READU16(offset + 0x0429F50) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F50, 0x00000049);
		}
		if (READU16(offset + 0x0429F50) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F50, 0x0000004A);
		}
		if (READU16(offset + 0x0429F50) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F50, 0x0000004B);
		}
		if (READU16(offset + 0x0429F50) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F50, 0x0000004C);
		}
		if (READU16(offset + 0x0429F50) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F50, 0x0000004D);
		}
		if (READU16(offset + 0x0429F50) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F50, 0x0000004E);
		}
		if (READU16(offset + 0x0429F50) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F50, 0x0000004F);
		}
		if (READU16(offset + 0x0429F50) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F50, 0x00000050);
		}
		if (READU16(offset + 0x0429F50) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F50, 0x00000051);
		}
		if (READU16(offset + 0x0429F50) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F50, 0x00000052);
		}
		if (READU16(offset + 0x0429F50) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F50, 0x00000053);
		}
		if (READU16(offset + 0x0429F50) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F50, 0x00000054);
		}
		if (READU16(offset + 0x0429F50) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F50, 0x00000055);
		}
		if (READU16(offset + 0x0429F50) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F50, 0x00000056);
		}
		if (READU16(offset + 0x0429F50) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F50, 0x00000057);
		}
		if (READU16(offset + 0x0429F50) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F50, 0x00000058);
		}
		if (READU16(offset + 0x0429F50) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F50, 0x00000059);
		}
		if (READU16(offset + 0x0429F50) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F50, 0x0000005A);
		}
		if (READU16(offset + 0x0429F51) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F51, 0x00000041);
		}
		if (READU16(offset + 0x0429F51) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F51, 0x00000042);
		}
		if (READU16(offset + 0x0429F51) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F51, 0x00000043);
		}
		if (READU16(offset + 0x0429F51) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F51, 0x00000044);
		}
		if (READU16(offset + 0x0429F51) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F51, 0x00000045);
		}
		if (READU16(offset + 0x0429F51) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F51, 0x00000046);
		}
		if (READU16(offset + 0x0429F51) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F51, 0x00000047);
		}
		if (READU16(offset + 0x0429F51) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F51, 0x00000048);
		}
		if (READU16(offset + 0x0429F51) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F51, 0x00000049);
		}
		if (READU16(offset + 0x0429F51) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F51, 0x0000004A);
		}
		if (READU16(offset + 0x0429F51) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F51, 0x0000004B);
		}
		if (READU16(offset + 0x0429F51) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F51, 0x0000004C);
		}
		if (READU16(offset + 0x0429F51) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F51, 0x0000004D);
		}
		if (READU16(offset + 0x0429F51) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F51, 0x0000004E);
		}
		if (READU16(offset + 0x0429F51) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F51, 0x0000004F);
		}
		if (READU16(offset + 0x0429F51) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F51, 0x00000050);
		}
		if (READU16(offset + 0x0429F51) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F51, 0x00000051);
		}
		if (READU16(offset + 0x0429F51) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F51, 0x00000052);
		}
		if (READU16(offset + 0x0429F51) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F51, 0x00000053);
		}
		if (READU16(offset + 0x0429F51) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F51, 0x00000054);
		}
		if (READU16(offset + 0x0429F51) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F51, 0x00000055);
		}
		if (READU16(offset + 0x0429F51) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F51, 0x00000056);
		}
		if (READU16(offset + 0x0429F51) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F51, 0x00000057);
		}
		if (READU16(offset + 0x0429F51) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F51, 0x00000058);
		}
		if (READU16(offset + 0x0429F51) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F51, 0x00000059);
		}
		if (READU16(offset + 0x0429F51) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F51, 0x0000005A);
		}
		if (READU16(offset + 0x0429F52) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F52, 0x00000041);
		}
		if (READU16(offset + 0x0429F52) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F52, 0x00000042);
		}
		if (READU16(offset + 0x0429F52) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F52, 0x00000043);
		}
		if (READU16(offset + 0x0429F52) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F52, 0x00000044);
		}
		if (READU16(offset + 0x0429F52) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F52, 0x00000045);
		}
		if (READU16(offset + 0x0429F52) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F52, 0x00000046);
		}
		if (READU16(offset + 0x0429F52) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F52, 0x00000047);
		}
		if (READU16(offset + 0x0429F52) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F52, 0x00000048);
		}
		if (READU16(offset + 0x0429F52) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F52, 0x00000049);
		}
		if (READU16(offset + 0x0429F52) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F52, 0x0000004A);
		}
		if (READU16(offset + 0x0429F52) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F52, 0x0000004B);
		}
		if (READU16(offset + 0x0429F52) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F52, 0x0000004C);
		}
		if (READU16(offset + 0x0429F52) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F52, 0x0000004D);
		}
		if (READU16(offset + 0x0429F52) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F52, 0x0000004E);
		}
		if (READU16(offset + 0x0429F52) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F52, 0x0000004F);
		}
		if (READU16(offset + 0x0429F52) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F52, 0x00000050);
		}
		if (READU16(offset + 0x0429F52) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F52, 0x00000051);
		}
		if (READU16(offset + 0x0429F52) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F52, 0x00000052);
		}
		if (READU16(offset + 0x0429F52) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F52, 0x00000053);
		}
		if (READU16(offset + 0x0429F52) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F52, 0x00000054);
		}
		if (READU16(offset + 0x0429F52) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F52, 0x00000055);
		}
		if (READU16(offset + 0x0429F52) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F52, 0x00000056);
		}
		if (READU16(offset + 0x0429F52) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F52, 0x00000057);
		}
		if (READU16(offset + 0x0429F52) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F52, 0x00000058);
		}
		if (READU16(offset + 0x0429F52) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F52, 0x00000059);
		}
		if (READU16(offset + 0x0429F52) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F52, 0x0000005A);
		}
		if (READU16(offset + 0x0429F53) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F53, 0x00000041);
		}
		if (READU16(offset + 0x0429F53) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F53, 0x00000042);
		}
		if (READU16(offset + 0x0429F53) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F53, 0x00000043);
		}
		if (READU16(offset + 0x0429F53) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F53, 0x00000044);
		}
		if (READU16(offset + 0x0429F53) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F53, 0x00000045);
		}
		if (READU16(offset + 0x0429F53) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F53, 0x00000046);
		}
		if (READU16(offset + 0x0429F53) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F53, 0x00000047);
		}
		if (READU16(offset + 0x0429F53) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F53, 0x00000048);
		}
		if (READU16(offset + 0x0429F53) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F53, 0x00000049);
		}
		if (READU16(offset + 0x0429F53) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F53, 0x0000004A);
		}
		if (READU16(offset + 0x0429F53) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F53, 0x0000004B);
		}
		if (READU16(offset + 0x0429F53) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F53, 0x0000004C);
		}
		if (READU16(offset + 0x0429F53) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F53, 0x0000004D);
		}
		if (READU16(offset + 0x0429F53) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F53, 0x0000004E);
		}
		if (READU16(offset + 0x0429F53) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F53, 0x0000004F);
		}
		if (READU16(offset + 0x0429F53) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F53, 0x00000050);
		}
		if (READU16(offset + 0x0429F53) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F53, 0x00000051);
		}
		if (READU16(offset + 0x0429F53) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F53, 0x00000052);
		}
		if (READU16(offset + 0x0429F53) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F53, 0x00000053);
		}
		if (READU16(offset + 0x0429F53) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F53, 0x00000054);
		}
		if (READU16(offset + 0x0429F53) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F53, 0x00000055);
		}
		if (READU16(offset + 0x0429F53) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F53, 0x00000056);
		}
		if (READU16(offset + 0x0429F53) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F53, 0x00000057);
		}
		if (READU16(offset + 0x0429F53) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F53, 0x00000058);
		}
		if (READU16(offset + 0x0429F53) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F53, 0x00000059);
		}
		if (READU16(offset + 0x0429F53) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F53, 0x0000005A);
		}
		if (READU16(offset + 0x0429F54) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F54, 0x00000041);
		}
		if (READU16(offset + 0x0429F54) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F54, 0x00000042);
		}
		if (READU16(offset + 0x0429F54) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F54, 0x00000043);
		}
		if (READU16(offset + 0x0429F54) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F54, 0x00000044);
		}
		if (READU16(offset + 0x0429F54) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F54, 0x00000045);
		}
		if (READU16(offset + 0x0429F54) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F54, 0x00000046);
		}
		if (READU16(offset + 0x0429F54) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F54, 0x00000047);
		}
		if (READU16(offset + 0x0429F54) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F54, 0x00000048);
		}
		if (READU16(offset + 0x0429F54) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F54, 0x00000049);
		}
		if (READU16(offset + 0x0429F54) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F54, 0x0000004A);
		}
		if (READU16(offset + 0x0429F54) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F54, 0x0000004B);
		}
		if (READU16(offset + 0x0429F54) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F54, 0x0000004C);
		}
		if (READU16(offset + 0x0429F54) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F54, 0x0000004D);
		}
		if (READU16(offset + 0x0429F54) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F54, 0x0000004E);
		}
		if (READU16(offset + 0x0429F54) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F54, 0x0000004F);
		}
		if (READU16(offset + 0x0429F54) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F54, 0x00000050);
		}
		if (READU16(offset + 0x0429F54) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F54, 0x00000051);
		}
		if (READU16(offset + 0x0429F54) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F54, 0x00000052);
		}
		if (READU16(offset + 0x0429F54) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F54, 0x00000053);
		}
		if (READU16(offset + 0x0429F54) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F54, 0x00000054);
		}
		if (READU16(offset + 0x0429F54) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F54, 0x00000055);
		}
		if (READU16(offset + 0x0429F54) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F54, 0x00000056);
		}
		if (READU16(offset + 0x0429F54) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F54, 0x00000057);
		}
		if (READU16(offset + 0x0429F54) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F54, 0x00000058);
		}
		if (READU16(offset + 0x0429F54) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F54, 0x00000059);
		}
		if (READU16(offset + 0x0429F54) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F54, 0x0000005A);
		}
		if (READU16(offset + 0x0429F55) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F55, 0x00000041);
		}
		if (READU16(offset + 0x0429F55) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F55, 0x00000042);
		}
		if (READU16(offset + 0x0429F55) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F55, 0x00000043);
		}
		if (READU16(offset + 0x0429F55) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F55, 0x00000044);
		}
		if (READU16(offset + 0x0429F55) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F55, 0x00000045);
		}
		if (READU16(offset + 0x0429F55) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F55, 0x00000046);
		}
		if (READU16(offset + 0x0429F55) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F55, 0x00000047);
		}
		if (READU16(offset + 0x0429F55) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F55, 0x00000048);
		}
		if (READU16(offset + 0x0429F55) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F55, 0x00000049);
		}
		if (READU16(offset + 0x0429F55) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F55, 0x0000004A);
		}
		if (READU16(offset + 0x0429F55) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F55, 0x0000004B);
		}
		if (READU16(offset + 0x0429F55) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F55, 0x0000004C);
		}
		if (READU16(offset + 0x0429F55) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F55, 0x0000004D);
		}
		if (READU16(offset + 0x0429F55) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F55, 0x0000004E);
		}
		if (READU16(offset + 0x0429F55) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F55, 0x0000004F);
		}
		if (READU16(offset + 0x0429F55) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F55, 0x00000050);
		}
		if (READU16(offset + 0x0429F55) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F55, 0x00000051);
		}
		if (READU16(offset + 0x0429F55) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F55, 0x00000052);
		}
		if (READU16(offset + 0x0429F55) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F55, 0x00000053);
		}
		if (READU16(offset + 0x0429F55) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F55, 0x00000054);
		}
		if (READU16(offset + 0x0429F55) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F55, 0x00000055);
		}
		if (READU16(offset + 0x0429F55) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F55, 0x00000056);
		}
		if (READU16(offset + 0x0429F55) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F55, 0x00000057);
		}
		if (READU16(offset + 0x0429F55) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F55, 0x00000058);
		}
		if (READU16(offset + 0x0429F55) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F55, 0x00000059);
		}
		if (READU16(offset + 0x0429F55) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F55, 0x0000005A);
		}
		if (READU16(offset + 0x0429F56) == 0x00000061)
		{
			WRITEU8(offset + 0x0429F56, 0x00000041);
		}
		if (READU16(offset + 0x0429F56) == 0x00000062)
		{
			WRITEU8(offset + 0x0429F56, 0x00000042);
		}
		if (READU16(offset + 0x0429F56) == 0x00000063)
		{
			WRITEU8(offset + 0x0429F56, 0x00000043);
		}
		if (READU16(offset + 0x0429F56) == 0x00000064)
		{
			WRITEU8(offset + 0x0429F56, 0x00000044);
		}
		if (READU16(offset + 0x0429F56) == 0x00000065)
		{
			WRITEU8(offset + 0x0429F56, 0x00000045);
		}
		if (READU16(offset + 0x0429F56) == 0x00000066)
		{
			WRITEU8(offset + 0x0429F56, 0x00000046);
		}
		if (READU16(offset + 0x0429F56) == 0x00000067)
		{
			WRITEU8(offset + 0x0429F56, 0x00000047);
		}
		if (READU16(offset + 0x0429F56) == 0x00000068)
		{
			WRITEU8(offset + 0x0429F56, 0x00000048);
		}
		if (READU16(offset + 0x0429F56) == 0x00000069)
		{
			WRITEU8(offset + 0x0429F56, 0x00000049);
		}
		if (READU16(offset + 0x0429F56) == 0x0000006A)
		{
			WRITEU8(offset + 0x0429F56, 0x0000004A);
		}
		if (READU16(offset + 0x0429F56) == 0x0000006B)
		{
			WRITEU8(offset + 0x0429F56, 0x0000004B);
		}
		if (READU16(offset + 0x0429F56) == 0x0000006C)
		{
			WRITEU8(offset + 0x0429F56, 0x0000004C);
		}
		if (READU16(offset + 0x0429F56) == 0x0000006D)
		{
			WRITEU8(offset + 0x0429F56, 0x0000004D);
		}
		if (READU16(offset + 0x0429F56) == 0x0000006E)
		{
			WRITEU8(offset + 0x0429F56, 0x0000004E);
		}
		if (READU16(offset + 0x0429F56) == 0x0000006F)
		{
			WRITEU8(offset + 0x0429F56, 0x0000004F);
		}
		if (READU16(offset + 0x0429F56) == 0x00000070)
		{
			WRITEU8(offset + 0x0429F56, 0x00000050);
		}
		if (READU16(offset + 0x0429F56) == 0x00000071)
		{
			WRITEU8(offset + 0x0429F56, 0x00000051);
		}
		if (READU16(offset + 0x0429F56) == 0x00000072)
		{
			WRITEU8(offset + 0x0429F56, 0x00000052);
		}
		if (READU16(offset + 0x0429F56) == 0x00000073)
		{
			WRITEU8(offset + 0x0429F56, 0x00000053);
		}
		if (READU16(offset + 0x0429F56) == 0x00000074)
		{
			WRITEU8(offset + 0x0429F56, 0x00000054);
		}
		if (READU16(offset + 0x0429F56) == 0x00000075)
		{
			WRITEU8(offset + 0x0429F56, 0x00000055);
		}
		if (READU16(offset + 0x0429F56) == 0x00000076)
		{
			WRITEU8(offset + 0x0429F56, 0x00000056);
		}
		if (READU16(offset + 0x0429F56) == 0x00000077)
		{
			WRITEU8(offset + 0x0429F56, 0x00000057);
		}
		if (READU16(offset + 0x0429F56) == 0x00000078)
		{
			WRITEU8(offset + 0x0429F56, 0x00000058);
		}
		if (READU16(offset + 0x0429F56) == 0x00000079)
		{
			WRITEU8(offset + 0x0429F56, 0x00000059);
		}
		if (READU16(offset + 0x0429F56) == 0x0000007A)
		{
			WRITEU8(offset + 0x0429F56, 0x0000005A);
		}
	}
}

void	Special_Symbol_Keyboard(void)
{
	if (READU16(offset + 0x0429F44) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F44, 0x00000040);
	}
	if (READU16(offset + 0x0429F45) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F45, 0x00000040);
	}
	if (READU16(offset + 0x0429F46) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F46, 0x00000040);
	}
	if (READU16(offset + 0x0429F47) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F47, 0x00000040);
	}
	if (READU16(offset + 0x0429F48) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F48, 0x00000040);
	}
	if (READU16(offset + 0x0429F49) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F49, 0x00000040);
	}
	if (READU16(offset + 0x0429F4A) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F4A, 0x00000040);
	}
	if (READU16(offset + 0x0429F4B) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F4B, 0x00000040);
	}
	if (READU16(offset + 0x0429F4C) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F4C, 0x00000040);
	}
	if (READU16(offset + 0x0429F4D) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F4D, 0x00000040);
	}
	if (READU16(offset + 0x0429F4E) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F4E, 0x00000040);
	}
	if (READU16(offset + 0x0429F4F) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F4F, 0x00000040);
	}
	if (READU16(offset + 0x0429F50) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F50, 0x00000040);
	}
	if (READU16(offset + 0x0429F51) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F51, 0x00000040);
	}
	if (READU16(offset + 0x0429F52) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F52, 0x00000040);
	}
	if (READU16(offset + 0x0429F53) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F53, 0x00000040);
	}
	if (READU16(offset + 0x0429F54) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F54, 0x00000040);
	}
	if (READU16(offset + 0x0429F55) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F55, 0x00000040);
	}
	if (READU16(offset + 0x0429F56) == 0x00000061)
	{
		WRITEU8(offset + 0x0429F56, 0x00000040);
	}
	if (READU16(offset + 0x0429F44) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F44, 0x00000023);
	}
	if (READU16(offset + 0x0429F45) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F45, 0x00000023);
	}
	if (READU16(offset + 0x0429F46) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F46, 0x00000023);
	}
	if (READU16(offset + 0x0429F47) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F47, 0x00000023);
	}
	if (READU16(offset + 0x0429F48) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F48, 0x00000023);
	}
	if (READU16(offset + 0x0429F49) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F49, 0x00000023);
	}
	if (READU16(offset + 0x0429F4A) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F4A, 0x00000023);
	}
	if (READU16(offset + 0x0429F4B) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F4B, 0x00000023);
	}
	if (READU16(offset + 0x0429F4C) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F4C, 0x00000023);
	}
	if (READU16(offset + 0x0429F4D) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F4D, 0x00000023);
	}
	if (READU16(offset + 0x0429F4E) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F4E, 0x00000023);
	}
	if (READU16(offset + 0x0429F4F) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F4F, 0x00000023);
	}
	if (READU16(offset + 0x0429F50) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F50, 0x00000023);
	}
	if (READU16(offset + 0x0429F51) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F51, 0x00000023);
	}
	if (READU16(offset + 0x0429F52) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F52, 0x00000023);
	}
	if (READU16(offset + 0x0429F53) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F53, 0x00000023);
	}
	if (READU16(offset + 0x0429F54) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F54, 0x00000023);
	}
	if (READU16(offset + 0x0429F55) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F55, 0x00000023);
	}
	if (READU16(offset + 0x0429F56) == 0x0000003A)
	{
		WRITEU8(offset + 0x0429F56, 0x00000023);
	}
	if (READU16(offset + 0x0429F44) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F44, 0x0000002F);
	}
	if (READU16(offset + 0x0429F45) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F45, 0x0000002F);
	}
	if (READU16(offset + 0x0429F46) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F46, 0x0000002F);
	}
	if (READU16(offset + 0x0429F47) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F47, 0x0000002F);
	}
	if (READU16(offset + 0x0429F48) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F48, 0x0000002F);
	}
	if (READU16(offset + 0x0429F49) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F49, 0x0000002F);
	}
	if (READU16(offset + 0x0429F4A) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F4A, 0x0000002F);
	}
	if (READU16(offset + 0x0429F4B) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F4B, 0x0000002F);
	}
	if (READU16(offset + 0x0429F4C) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F4C, 0x0000002F);
	}
	if (READU16(offset + 0x0429F4D) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F4D, 0x0000002F);
	}
	if (READU16(offset + 0x0429F4E) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F4E, 0x0000002F);
	}
	if (READU16(offset + 0x0429F4F) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F4F, 0x0000002F);
	}
	if (READU16(offset + 0x0429F50) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F50, 0x0000002F);
	}
	if (READU16(offset + 0x0429F51) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F51, 0x0000002F);
	}
	if (READU16(offset + 0x0429F52) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F52, 0x0000002F);
	}
	if (READU16(offset + 0x0429F53) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F53, 0x0000002F);
	}
	if (READU16(offset + 0x0429F54) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F54, 0x0000002F);
	}
	if (READU16(offset + 0x0429F55) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F55, 0x0000002F);
	}
	if (READU16(offset + 0x0429F56) == 0x0000003F)
	{
		WRITEU8(offset + 0x0429F56, 0x0000002F);
	}
	if (READU16(offset + 0x0429F44) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F44, 0x0000005E);
	}
	if (READU16(offset + 0x0429F45) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F45, 0x0000005E);
	}
	if (READU16(offset + 0x0429F46) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F46, 0x0000005E);
	}
	if (READU16(offset + 0x0429F47) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F47, 0x0000005E);
	}
	if (READU16(offset + 0x0429F48) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F48, 0x0000005E);
	}
	if (READU16(offset + 0x0429F49) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F49, 0x0000005E);
	}
	if (READU16(offset + 0x0429F4A) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F4A, 0x0000005E);
	}
	if (READU16(offset + 0x0429F4B) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F4B, 0x0000005E);
	}
	if (READU16(offset + 0x0429F4C) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F4C, 0x0000005E);
	}
	if (READU16(offset + 0x0429F4D) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F4D, 0x0000005E);
	}
	if (READU16(offset + 0x0429F4E) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F4E, 0x0000005E);
	}
	if (READU16(offset + 0x0429F4F) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F4F, 0x0000005E);
	}
	if (READU16(offset + 0x0429F50) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F50, 0x0000005E);
	}
	if (READU16(offset + 0x0429F51) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F51, 0x0000005E);
	}
	if (READU16(offset + 0x0429F52) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F52, 0x0000005E);
	}
	if (READU16(offset + 0x0429F53) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F53, 0x0000005E);
	}
	if (READU16(offset + 0x0429F54) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F54, 0x0000005E);
	}
	if (READU16(offset + 0x0429F55) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F55, 0x0000005E);
	}
	if (READU16(offset + 0x0429F56) == 0x0000002C)
	{
		WRITEU8(offset + 0x0429F56, 0x0000005E);
	}
	if (READU16(offset + 0x0429F44) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F44, 0x0000002A);
	}
	if (READU16(offset + 0x0429F45) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F45, 0x0000002A);
	}
	if (READU16(offset + 0x0429F46) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F46, 0x0000002A);
	}
	if (READU16(offset + 0x0429F47) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F47, 0x0000002A);
	}
	if (READU16(offset + 0x0429F48) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F48, 0x0000002A);
	}
	if (READU16(offset + 0x0429F49) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F49, 0x0000002A);
	}
	if (READU16(offset + 0x0429F4A) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F4A, 0x0000002A);
	}
	if (READU16(offset + 0x0429F4B) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F4B, 0x0000002A);
	}
	if (READU16(offset + 0x0429F4C) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F4C, 0x0000002A);
	}
	if (READU16(offset + 0x0429F4D) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F4D, 0x0000002A);
	}
	if (READU16(offset + 0x0429F4E) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F4E, 0x0000002A);
	}
	if (READU16(offset + 0x0429F4F) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F4F, 0x0000002A);
	}
	if (READU16(offset + 0x0429F50) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F50, 0x0000002A);
	}
	if (READU16(offset + 0x0429F51) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F51, 0x0000002A);
	}
	if (READU16(offset + 0x0429F52) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F52, 0x0000002A);
	}
	if (READU16(offset + 0x0429F53) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F53, 0x0000002A);
	}
	if (READU16(offset + 0x0429F54) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F54, 0x0000002A);
	}
	if (READU16(offset + 0x0429F55) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F55, 0x0000002A);
	}
	if (READU16(offset + 0x0429F56) == 0x0000002E)
	{
		WRITEU8(offset + 0x0429F56, 0x0000002A);
	}
	if (READU16(offset + 0x0429F44) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F44, 0x00000040);
	}
	if (READU16(offset + 0x0429F45) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F45, 0x00000040);
	}
	if (READU16(offset + 0x0429F46) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F46, 0x00000040);
	}
	if (READU16(offset + 0x0429F47) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F47, 0x00000040);
	}
	if (READU16(offset + 0x0429F48) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F48, 0x00000040);
	}
	if (READU16(offset + 0x0429F49) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F49, 0x00000040);
	}
	if (READU16(offset + 0x0429F4A) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F4A, 0x00000040);
	}
	if (READU16(offset + 0x0429F4B) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F4B, 0x00000040);
	}
	if (READU16(offset + 0x0429F4C) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F4C, 0x00000040);
	}
	if (READU16(offset + 0x0429F4D) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F4D, 0x00000040);
	}
	if (READU16(offset + 0x0429F4E) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F4E, 0x00000040);
	}
	if (READU16(offset + 0x0429F4F) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F4F, 0x00000040);
	}
	if (READU16(offset + 0x0429F50) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F50, 0x00000040);
	}
	if (READU16(offset + 0x0429F51) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F51, 0x00000040);
	}
	if (READU16(offset + 0x0429F52) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F52, 0x00000040);
	}
	if (READU16(offset + 0x0429F53) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F53, 0x00000040);
	}
	if (READU16(offset + 0x0429F54) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F54, 0x00000040);
	}
	if (READU16(offset + 0x0429F55) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F55, 0x00000040);
	}
	if (READU16(offset + 0x0429F56) == 0x00000030)
	{
		WRITEU8(offset + 0x0429F56, 0x00000040);
	}
}

void	Online_Name__CrackoTwoNineEight(void)
{
	WRITEU8(offset + 0x9810800, 0x00000043);
	WRITEU8(offset + 0x9810802, 0x00000072);
	WRITEU8(offset + 0x9810804, 0x00000061);
	WRITEU8(offset + 0x9810806, 0x00000063);
	WRITEU8(offset + 0x9810808, 0x0000006B);
	WRITEU8(offset + 0x981080A, 0x0000006F);
	WRITEU8(offset + 0x981080C, 0x00000032);
	WRITEU8(offset + 0x981080E, 0x00000039);
	WRITEU8(offset + 0x9810810, 0x00000038);
	WRITEU8(offset + 0x900176C, 0x00000043);
	WRITEU8(offset + 0x900176E, 0x00000072);
	WRITEU8(offset + 0x9001770, 0x00000061);
	WRITEU8(offset + 0x9001772, 0x00000063);
	WRITEU8(offset + 0x9001774, 0x0000006B);
	WRITEU8(offset + 0x9001776, 0x0000006F);
	WRITEU8(offset + 0x9001778, 0x00000032);
	WRITEU8(offset + 0x900177A, 0x00000039);
	WRITEU8(offset + 0x900177C, 0x00000038);
	WRITEU8(offset + 0x8E69D70, 0x00000043);
	WRITEU8(offset + 0x8E69D72, 0x00000072);
	WRITEU8(offset + 0x8E69D74, 0x00000061);
	WRITEU8(offset + 0x8E69D76, 0x00000063);
	WRITEU8(offset + 0x8E69D78, 0x0000006B);
	WRITEU8(offset + 0x8E69D7A, 0x0000006F);
	WRITEU8(offset + 0x8E69D7C, 0x00000032);
	WRITEU8(offset + 0x8E69D7E, 0x00000039);
	WRITEU8(offset + 0x8E69D80, 0x00000038);
	WRITEU8(offset + 0x8E4A01C, 0x00000043);
	WRITEU8(offset + 0x8E4A01E, 0x00000072);
	WRITEU8(offset + 0x8E4A020, 0x00000061);
	WRITEU8(offset + 0x8E4A022, 0x00000063);
	WRITEU8(offset + 0x8E4A024, 0x0000006B);
	WRITEU8(offset + 0x8E4A026, 0x0000006F);
	WRITEU8(offset + 0x8E4A028, 0x00000032);
	WRITEU8(offset + 0x8E4A02A, 0x00000039);
	WRITEU8(offset + 0x8E4A02C, 0x00000038);
	WRITEU8(offset + 0x048367E, 0x00000043);
	WRITEU8(offset + 0x0483680, 0x00000072);
	WRITEU8(offset + 0x0483682, 0x00000061);
	WRITEU8(offset + 0x0483684, 0x00000063);
	WRITEU8(offset + 0x0483686, 0x0000006B);
	WRITEU8(offset + 0x0483688, 0x0000006F);
	WRITEU8(offset + 0x048368A, 0x00000032);
	WRITEU8(offset + 0x048368C, 0x00000039);
	WRITEU8(offset + 0x048368E, 0x00000038);
	WRITEU8(offset + 0x04813F2, 0x00000043);
	WRITEU8(offset + 0x04813F4, 0x00000072);
	WRITEU8(offset + 0x04813F6, 0x00000061);
	WRITEU8(offset + 0x04813F8, 0x00000063);
	WRITEU8(offset + 0x04813FA, 0x0000006B);
	WRITEU8(offset + 0x04813FC, 0x0000006F);
	WRITEU8(offset + 0x04813FE, 0x00000032);
	WRITEU8(offset + 0x0481400, 0x00000039);
	WRITEU8(offset + 0x0481402, 0x00000038);
}

void	Online_Name__OWL_GBC__(void)
{
	WRITEU8(offset + 0x9810800, 0x0000004F);
	WRITEU8(offset + 0x9810802, 0x00000057);
	WRITEU8(offset + 0x9810804, 0x0000004C);
	WRITEU8(offset + 0x9810806, 0x0000005F);
	WRITEU8(offset + 0x9810808, 0x00000023);
	WRITEU8(offset + 0x981080A, 0x00000047);
	WRITEU8(offset + 0x981080C, 0x00000042);
	WRITEU8(offset + 0x981080E, 0x00000043);
	WRITEU8(offset + 0x9810810, 0x00000023);
	WRITEU8(offset + 0x9810812, 0x00000024);
	WRITEU8(offset + 0x900176C, 0x0000004F);
	WRITEU8(offset + 0x900176E, 0x00000057);
	WRITEU8(offset + 0x9001770, 0x0000004C);
	WRITEU8(offset + 0x9001772, 0x0000005F);
	WRITEU8(offset + 0x9001774, 0x00000023);
	WRITEU8(offset + 0x9001776, 0x00000047);
	WRITEU8(offset + 0x9001778, 0x00000042);
	WRITEU8(offset + 0x900177A, 0x00000043);
	WRITEU8(offset + 0x900177C, 0x00000023);
	WRITEU8(offset + 0x900177E, 0x00000024);
	WRITEU8(offset + 0x8E69D70, 0x0000004F);
	WRITEU8(offset + 0x8E69D72, 0x00000057);
	WRITEU8(offset + 0x8E69D74, 0x0000004C);
	WRITEU8(offset + 0x8E69D76, 0x0000005F);
	WRITEU8(offset + 0x8E69D78, 0x00000023);
	WRITEU8(offset + 0x8E69D7A, 0x00000047);
	WRITEU8(offset + 0x8E69D7C, 0x00000042);
	WRITEU8(offset + 0x8E69D7E, 0x00000043);
	WRITEU8(offset + 0x8E69D80, 0x00000023);
	WRITEU8(offset + 0x8E69D82, 0x00000024);
	WRITEU8(offset + 0x8E4A01C, 0x0000004F);
	WRITEU8(offset + 0x8E4A01E, 0x00000057);
	WRITEU8(offset + 0x8E4A020, 0x0000004C);
	WRITEU8(offset + 0x8E4A022, 0x0000005F);
	WRITEU8(offset + 0x8E4A024, 0x00000023);
	WRITEU8(offset + 0x8E4A026, 0x00000047);
	WRITEU8(offset + 0x8E4A028, 0x00000042);
	WRITEU8(offset + 0x8E4A02A, 0x00000043);
	WRITEU8(offset + 0x8E4A02C, 0x00000023);
	WRITEU8(offset + 0x8E4A02E, 0x00000024);
	WRITEU8(offset + 0x048367E, 0x0000004F);
	WRITEU8(offset + 0x0483680, 0x00000057);
	WRITEU8(offset + 0x0483682, 0x0000004C);
	WRITEU8(offset + 0x0483684, 0x0000005F);
	WRITEU8(offset + 0x0483686, 0x00000023);
	WRITEU8(offset + 0x0483688, 0x00000047);
	WRITEU8(offset + 0x048368A, 0x00000042);
	WRITEU8(offset + 0x048368C, 0x00000043);
	WRITEU8(offset + 0x048368E, 0x00000023);
	WRITEU8(offset + 0x0483690, 0x00000024);
	WRITEU8(offset + 0x04813F2, 0x0000004F);
	WRITEU8(offset + 0x04813F4, 0x00000057);
	WRITEU8(offset + 0x04813F6, 0x0000004C);
	WRITEU8(offset + 0x04813F8, 0x0000005F);
	WRITEU8(offset + 0x04813FA, 0x00000023);
	WRITEU8(offset + 0x04813FC, 0x00000047);
	WRITEU8(offset + 0x04813FE, 0x00000042);
	WRITEU8(offset + 0x0481400, 0x00000043);
	WRITEU8(offset + 0x0481402, 0x00000023);
	WRITEU8(offset + 0x0481404, 0x00000024);
}

void	Online_Name__Gage_C_NC(void)
{
	WRITEU8(offset + 0x9810800, 0x00000047);
	WRITEU8(offset + 0x9810802, 0x00000061);
	WRITEU8(offset + 0x9810804, 0x00000067);
	WRITEU8(offset + 0x9810806, 0x00000065);
	WRITEU8(offset + 0x9810808, 0x0000002E);
	WRITEU8(offset + 0x981080A, 0x00000043);
	WRITEU8(offset + 0x981080C, 0x0000007E);
	WRITEU8(offset + 0x981080E, 0x0000004E);
	WRITEU8(offset + 0x9810810, 0x00000043);
	WRITEU8(offset + 0x900176C, 0x00000047);
	WRITEU8(offset + 0x900176E, 0x00000061);
	WRITEU8(offset + 0x9001770, 0x00000067);
	WRITEU8(offset + 0x9001772, 0x00000065);
	WRITEU8(offset + 0x9001774, 0x0000002E);
	WRITEU8(offset + 0x9001776, 0x00000043);
	WRITEU8(offset + 0x9001778, 0x0000007E);
	WRITEU8(offset + 0x900177A, 0x0000004E);
	WRITEU8(offset + 0x900177C, 0x00000043);
	WRITEU8(offset + 0x8E69D70, 0x00000047);
	WRITEU8(offset + 0x8E69D72, 0x00000061);
	WRITEU8(offset + 0x8E69D74, 0x00000067);
	WRITEU8(offset + 0x8E69D76, 0x00000065);
	WRITEU8(offset + 0x8E69D78, 0x0000002E);
	WRITEU8(offset + 0x8E69D7A, 0x00000043);
	WRITEU8(offset + 0x8E69D7C, 0x0000007E);
	WRITEU8(offset + 0x8E69D7E, 0x0000004E);
	WRITEU8(offset + 0x8E69D80, 0x00000043);
	WRITEU8(offset + 0x8E4A01C, 0x00000047);
	WRITEU8(offset + 0x8E4A01E, 0x00000061);
	WRITEU8(offset + 0x8E4A020, 0x00000067);
	WRITEU8(offset + 0x8E4A022, 0x00000065);
	WRITEU8(offset + 0x8E4A024, 0x0000002E);
	WRITEU8(offset + 0x8E4A026, 0x00000043);
	WRITEU8(offset + 0x8E4A028, 0x0000007E);
	WRITEU8(offset + 0x8E4A02A, 0x0000004E);
	WRITEU8(offset + 0x8E4A02C, 0x00000043);
	WRITEU8(offset + 0x048367E, 0x00000047);
	WRITEU8(offset + 0x0483680, 0x00000061);
	WRITEU8(offset + 0x0483682, 0x00000067);
	WRITEU8(offset + 0x0483684, 0x00000065);
	WRITEU8(offset + 0x0483686, 0x0000002E);
	WRITEU8(offset + 0x0483688, 0x00000043);
	WRITEU8(offset + 0x048368A, 0x0000007E);
	WRITEU8(offset + 0x048368C, 0x0000004E);
	WRITEU8(offset + 0x048368E, 0x00000043);
	WRITEU8(offset + 0x04813F2, 0x00000047);
	WRITEU8(offset + 0x04813F4, 0x00000061);
	WRITEU8(offset + 0x04813F6, 0x00000067);
	WRITEU8(offset + 0x04813F8, 0x00000065);
	WRITEU8(offset + 0x04813FA, 0x0000002E);
	WRITEU8(offset + 0x04813FC, 0x00000043);
	WRITEU8(offset + 0x04813FE, 0x0000007E);
	WRITEU8(offset + 0x0481400, 0x0000004E);
	WRITEU8(offset + 0x0481402, 0x00000043);
}

void	Online_Name__goldfishRX(void)
{
	WRITEU8(offset + 0x9810800, 0x00000067);
	WRITEU8(offset + 0x9810802, 0x0000006F);
	WRITEU8(offset + 0x9810804, 0x0000006C);
	WRITEU8(offset + 0x9810806, 0x00000064);
	WRITEU8(offset + 0x9810808, 0x00000066);
	WRITEU8(offset + 0x981080A, 0x00000069);
	WRITEU8(offset + 0x981080C, 0x00000073);
	WRITEU8(offset + 0x981080E, 0x00000068);
	WRITEU8(offset + 0x9810810, 0x00000052);
	WRITEU8(offset + 0x9810812, 0x00000058);
	WRITEU8(offset + 0x900176C, 0x00000067);
	WRITEU8(offset + 0x900176E, 0x0000006F);
	WRITEU8(offset + 0x9001770, 0x0000006C);
	WRITEU8(offset + 0x9001772, 0x00000064);
	WRITEU8(offset + 0x9001774, 0x00000066);
	WRITEU8(offset + 0x9001776, 0x00000069);
	WRITEU8(offset + 0x9001778, 0x00000073);
	WRITEU8(offset + 0x900177A, 0x00000068);
	WRITEU8(offset + 0x900177C, 0x00000052);
	WRITEU8(offset + 0x900177E, 0x00000058);
	WRITEU8(offset + 0x8E69D70, 0x00000067);
	WRITEU8(offset + 0x8E69D72, 0x0000006F);
	WRITEU8(offset + 0x8E69D74, 0x0000006C);
	WRITEU8(offset + 0x8E69D76, 0x00000064);
	WRITEU8(offset + 0x8E69D78, 0x00000066);
	WRITEU8(offset + 0x8E69D7A, 0x00000069);
	WRITEU8(offset + 0x8E69D7C, 0x00000073);
	WRITEU8(offset + 0x8E69D7E, 0x00000068);
	WRITEU8(offset + 0x8E69D80, 0x00000052);
	WRITEU8(offset + 0x8E69D82, 0x00000058);
	WRITEU8(offset + 0x8E4A01C, 0x00000067);
	WRITEU8(offset + 0x8E4A01E, 0x0000006F);
	WRITEU8(offset + 0x8E4A020, 0x0000006C);
	WRITEU8(offset + 0x8E4A022, 0x00000064);
	WRITEU8(offset + 0x8E4A024, 0x00000066);
	WRITEU8(offset + 0x8E4A026, 0x00000069);
	WRITEU8(offset + 0x8E4A028, 0x00000073);
	WRITEU8(offset + 0x8E4A02A, 0x00000068);
	WRITEU8(offset + 0x8E4A02C, 0x00000052);
	WRITEU8(offset + 0x8E4A02E, 0x00000058);
	WRITEU8(offset + 0x048367E, 0x00000067);
	WRITEU8(offset + 0x0483680, 0x0000006F);
	WRITEU8(offset + 0x0483682, 0x0000006C);
	WRITEU8(offset + 0x0483684, 0x00000064);
	WRITEU8(offset + 0x0483686, 0x00000066);
	WRITEU8(offset + 0x0483688, 0x00000069);
	WRITEU8(offset + 0x048368A, 0x00000073);
	WRITEU8(offset + 0x048368C, 0x00000068);
	WRITEU8(offset + 0x048368E, 0x00000052);
	WRITEU8(offset + 0x0483690, 0x00000058);
	WRITEU8(offset + 0x04813F2, 0x00000067);
	WRITEU8(offset + 0x04813F4, 0x0000006F);
	WRITEU8(offset + 0x04813F6, 0x0000006C);
	WRITEU8(offset + 0x04813F8, 0x00000064);
	WRITEU8(offset + 0x04813FA, 0x00000066);
	WRITEU8(offset + 0x04813FC, 0x00000069);
	WRITEU8(offset + 0x04813FE, 0x00000073);
	WRITEU8(offset + 0x0481400, 0x00000068);
	WRITEU8(offset + 0x0481402, 0x00000052);
	WRITEU8(offset + 0x0481404, 0x00000058);
}

void	Online_Name__VIRUS_KOneNG(void)
{
	WRITEU8(offset + 0x04813F2, 0x00000056);
	WRITEU8(offset + 0x04813F4, 0x00000049);
	WRITEU8(offset + 0x04813F6, 0x00000052);
	WRITEU8(offset + 0x04813F8, 0x00000055);
	WRITEU8(offset + 0x04813FA, 0x00000024);
	WRITEU8(offset + 0x04813FC, 0x0000005F);
	WRITEU8(offset + 0x04813FE, 0x0000004B);
	WRITEU8(offset + 0x0481400, 0x00000031);
	WRITEU8(offset + 0x0481402, 0x0000004E);
	WRITEU8(offset + 0x0481404, 0x00000047);
	WRITEU8(offset + 0x048367E, 0x00000056);
	WRITEU8(offset + 0x0483680, 0x00000049);
	WRITEU8(offset + 0x0483682, 0x00000052);
	WRITEU8(offset + 0x0483684, 0x00000055);
	WRITEU8(offset + 0x0483686, 0x00000024);
	WRITEU8(offset + 0x0483688, 0x0000005F);
	WRITEU8(offset + 0x048368A, 0x0000004B);
	WRITEU8(offset + 0x048368C, 0x00000031);
	WRITEU8(offset + 0x048368E, 0x0000004E);
	WRITEU8(offset + 0x0483690, 0x00000047);
	WRITEU8(offset + 0x8E4A01C, 0x00000056);
	WRITEU8(offset + 0x8E4A01E, 0x00000049);
	WRITEU8(offset + 0x8E4A020, 0x00000052);
	WRITEU8(offset + 0x8E4A022, 0x00000055);
	WRITEU8(offset + 0x8E4A024, 0x00000024);
	WRITEU8(offset + 0x8E4A026, 0x0000005F);
	WRITEU8(offset + 0x8E4A028, 0x0000004B);
	WRITEU8(offset + 0x8E4A02A, 0x00000031);
	WRITEU8(offset + 0x8E4A02C, 0x0000004E);
	WRITEU8(offset + 0x8E4A02E, 0x00000047);
	WRITEU8(offset + 0x8E69D70, 0x00000056);
	WRITEU8(offset + 0x8E69D72, 0x00000049);
	WRITEU8(offset + 0x8E69D74, 0x00000052);
	WRITEU8(offset + 0x8E69D76, 0x00000055);
	WRITEU8(offset + 0x8E69D78, 0x00000024);
	WRITEU8(offset + 0x8E69D7A, 0x0000005F);
	WRITEU8(offset + 0x8E69D7C, 0x0000004B);
	WRITEU8(offset + 0x8E69D7E, 0x00000031);
	WRITEU8(offset + 0x8E69D80, 0x0000004E);
	WRITEU8(offset + 0x8E69D82, 0x00000047);
	WRITEU8(offset + 0x900176C, 0x00000056);
	WRITEU8(offset + 0x900176E, 0x00000049);
	WRITEU8(offset + 0x9001770, 0x00000052);
	WRITEU8(offset + 0x9001772, 0x00000055);
	WRITEU8(offset + 0x9001774, 0x00000024);
	WRITEU8(offset + 0x9001776, 0x0000005F);
	WRITEU8(offset + 0x9001778, 0x0000004B);
	WRITEU8(offset + 0x900177A, 0x00000031);
	WRITEU8(offset + 0x900177C, 0x0000004E);
	WRITEU8(offset + 0x900177E, 0x00000047);
	WRITEU8(offset + 0x9810800, 0x00000056);
	WRITEU8(offset + 0x9810802, 0x00000049);
	WRITEU8(offset + 0x9810804, 0x00000052);
	WRITEU8(offset + 0x9810806, 0x00000055);
	WRITEU8(offset + 0x9810808, 0x00000024);
	WRITEU8(offset + 0x981080A, 0x0000005F);
	WRITEU8(offset + 0x981080C, 0x0000004B);
	WRITEU8(offset + 0x981080E, 0x00000031);
	WRITEU8(offset + 0x9810810, 0x0000004E);
	WRITEU8(offset + 0x9810812, 0x00000047);
}

void	Online_Name__TIME_BOMB_(void)
{
	WRITEU8(offset + 0x9810800, 0x00000054);
	WRITEU8(offset + 0x9810802, 0x00000049);
	WRITEU8(offset + 0x9810804, 0x0000004D);
	WRITEU8(offset + 0x9810806, 0x00000045);
	WRITEU8(offset + 0x9810808, 0x00000024);
	WRITEU8(offset + 0x981080A, 0x00000042);
	WRITEU8(offset + 0x981080C, 0x0000004F);
	WRITEU8(offset + 0x981080E, 0x0000004D);
	WRITEU8(offset + 0x9810810, 0x00000042);
	WRITEU8(offset + 0x9810812, 0x00000024);
	WRITEU8(offset + 0x900176C, 0x00000054);
	WRITEU8(offset + 0x900176E, 0x00000049);
	WRITEU8(offset + 0x9001770, 0x0000004D);
	WRITEU8(offset + 0x9001772, 0x00000045);
	WRITEU8(offset + 0x9001774, 0x00000024);
	WRITEU8(offset + 0x9001776, 0x00000042);
	WRITEU8(offset + 0x9001778, 0x0000004F);
	WRITEU8(offset + 0x900177A, 0x0000004D);
	WRITEU8(offset + 0x900177C, 0x00000042);
	WRITEU8(offset + 0x900177E, 0x00000024);
	WRITEU8(offset + 0x8E69D70, 0x00000054);
	WRITEU8(offset + 0x8E69D72, 0x00000049);
	WRITEU8(offset + 0x8E69D74, 0x0000004D);
	WRITEU8(offset + 0x8E69D76, 0x00000045);
	WRITEU8(offset + 0x8E69D78, 0x00000024);
	WRITEU8(offset + 0x8E69D7A, 0x00000042);
	WRITEU8(offset + 0x8E69D7C, 0x0000004F);
	WRITEU8(offset + 0x8E69D7E, 0x0000004D);
	WRITEU8(offset + 0x8E69D80, 0x00000042);
	WRITEU8(offset + 0x8E69D82, 0x00000024);
	WRITEU8(offset + 0x8E4A01C, 0x00000054);
	WRITEU8(offset + 0x8E4A01E, 0x00000049);
	WRITEU8(offset + 0x8E4A020, 0x0000004D);
	WRITEU8(offset + 0x8E4A022, 0x00000045);
	WRITEU8(offset + 0x8E4A024, 0x00000024);
	WRITEU8(offset + 0x8E4A026, 0x00000042);
	WRITEU8(offset + 0x8E4A028, 0x0000004F);
	WRITEU8(offset + 0x8E4A02A, 0x0000004D);
	WRITEU8(offset + 0x8E4A02C, 0x00000042);
	WRITEU8(offset + 0x8E4A02E, 0x00000024);
	WRITEU8(offset + 0x048367E, 0x00000054);
	WRITEU8(offset + 0x0483680, 0x00000049);
	WRITEU8(offset + 0x0483682, 0x0000004D);
	WRITEU8(offset + 0x0483684, 0x00000045);
	WRITEU8(offset + 0x0483686, 0x00000024);
	WRITEU8(offset + 0x0483688, 0x00000042);
	WRITEU8(offset + 0x048368A, 0x0000004F);
	WRITEU8(offset + 0x048368C, 0x0000004D);
	WRITEU8(offset + 0x048368E, 0x00000042);
	WRITEU8(offset + 0x0483690, 0x00000024);
	WRITEU8(offset + 0x04813F2, 0x00000054);
	WRITEU8(offset + 0x04813F4, 0x00000049);
	WRITEU8(offset + 0x04813F6, 0x0000004D);
	WRITEU8(offset + 0x04813F8, 0x00000045);
	WRITEU8(offset + 0x04813FA, 0x00000024);
	WRITEU8(offset + 0x04813FC, 0x00000042);
	WRITEU8(offset + 0x04813FE, 0x0000004F);
	WRITEU8(offset + 0x0481400, 0x0000004D);
	WRITEU8(offset + 0x0481402, 0x00000042);
	WRITEU8(offset + 0x0481404, 0x00000024);
}

void	Online_Name__Zamasu_EXE(void)
{
	WRITEU8(offset + 0x9810800, 0x0000005A);
	WRITEU8(offset + 0x9810802, 0x00000061);
	WRITEU8(offset + 0x9810804, 0x0000006D);
	WRITEU8(offset + 0x9810806, 0x00000061);
	WRITEU8(offset + 0x9810808, 0x00000073);
	WRITEU8(offset + 0x981080A, 0x00000075);
	WRITEU8(offset + 0x981080C, 0x0000002E);
	WRITEU8(offset + 0x981080E, 0x00000045);
	WRITEU8(offset + 0x9810810, 0x00000058);
	WRITEU8(offset + 0x9810812, 0x00000045);
	WRITEU8(offset + 0x900176C, 0x0000005A);
	WRITEU8(offset + 0x900176E, 0x00000061);
	WRITEU8(offset + 0x9001770, 0x0000006D);
	WRITEU8(offset + 0x9001772, 0x00000061);
	WRITEU8(offset + 0x9001774, 0x00000073);
	WRITEU8(offset + 0x9001776, 0x00000075);
	WRITEU8(offset + 0x9001778, 0x0000002E);
	WRITEU8(offset + 0x900177A, 0x00000045);
	WRITEU8(offset + 0x900177C, 0x00000058);
	WRITEU8(offset + 0x900177E, 0x00000045);
	WRITEU8(offset + 0x8E69D70, 0x0000005A);
	WRITEU8(offset + 0x8E69D72, 0x00000061);
	WRITEU8(offset + 0x8E69D74, 0x0000006D);
	WRITEU8(offset + 0x8E69D76, 0x00000061);
	WRITEU8(offset + 0x8E69D78, 0x00000073);
	WRITEU8(offset + 0x8E69D7A, 0x00000075);
	WRITEU8(offset + 0x8E69D7C, 0x0000002E);
	WRITEU8(offset + 0x8E69D7E, 0x00000045);
	WRITEU8(offset + 0x8E69D80, 0x00000058);
	WRITEU8(offset + 0x8E69D82, 0x00000045);
	WRITEU8(offset + 0x8E4A01C, 0x0000005A);
	WRITEU8(offset + 0x8E4A01E, 0x00000061);
	WRITEU8(offset + 0x8E4A020, 0x0000006D);
	WRITEU8(offset + 0x8E4A022, 0x00000061);
	WRITEU8(offset + 0x8E4A024, 0x00000073);
	WRITEU8(offset + 0x8E4A026, 0x00000075);
	WRITEU8(offset + 0x8E4A028, 0x0000002E);
	WRITEU8(offset + 0x8E4A02A, 0x00000045);
	WRITEU8(offset + 0x8E4A02C, 0x00000058);
	WRITEU8(offset + 0x8E4A02E, 0x00000045);
	WRITEU8(offset + 0x048367E, 0x0000005A);
	WRITEU8(offset + 0x0483680, 0x00000061);
	WRITEU8(offset + 0x0483682, 0x0000006D);
	WRITEU8(offset + 0x0483684, 0x00000061);
	WRITEU8(offset + 0x0483686, 0x00000073);
	WRITEU8(offset + 0x0483688, 0x00000075);
	WRITEU8(offset + 0x048368A, 0x0000002E);
	WRITEU8(offset + 0x048368C, 0x00000045);
	WRITEU8(offset + 0x048368E, 0x00000058);
	WRITEU8(offset + 0x0483690, 0x00000045);
	WRITEU8(offset + 0x04813F2, 0x0000005A);
	WRITEU8(offset + 0x04813F4, 0x00000061);
	WRITEU8(offset + 0x04813F6, 0x0000006D);
	WRITEU8(offset + 0x04813F8, 0x00000061);
	WRITEU8(offset + 0x04813FA, 0x00000073);
	WRITEU8(offset + 0x04813FC, 0x00000075);
	WRITEU8(offset + 0x04813FE, 0x0000002E);
	WRITEU8(offset + 0x0481400, 0x00000045);
	WRITEU8(offset + 0x0481402, 0x00000058);
	WRITEU8(offset + 0x0481404, 0x00000045);
}

void	Online_Name__Hunter_CAT(void)
{
	WRITEU8(offset + 0x9810800, 0x00000048);
	WRITEU8(offset + 0x9810802, 0x00000075);
	WRITEU8(offset + 0x9810804, 0x0000006E);
	WRITEU8(offset + 0x9810806, 0x00000074);
	WRITEU8(offset + 0x9810808, 0x00000065);
	WRITEU8(offset + 0x981080A, 0x00000072);
	WRITEU8(offset + 0x981080C, 0x0000002F);
	WRITEU8(offset + 0x981080E, 0x00000043);
	WRITEU8(offset + 0x9810810, 0x00000041);
	WRITEU8(offset + 0x9810812, 0x00000054);
	WRITEU8(offset + 0x900176C, 0x00000048);
	WRITEU8(offset + 0x900176E, 0x00000075);
	WRITEU8(offset + 0x9001770, 0x0000006E);
	WRITEU8(offset + 0x9001772, 0x00000074);
	WRITEU8(offset + 0x9001774, 0x00000065);
	WRITEU8(offset + 0x9001776, 0x00000072);
	WRITEU8(offset + 0x9001778, 0x0000002F);
	WRITEU8(offset + 0x900177A, 0x00000043);
	WRITEU8(offset + 0x900177C, 0x00000041);
	WRITEU8(offset + 0x900177E, 0x00000054);
	WRITEU8(offset + 0x8E69D70, 0x00000048);
	WRITEU8(offset + 0x8E69D72, 0x00000075);
	WRITEU8(offset + 0x8E69D74, 0x0000006E);
	WRITEU8(offset + 0x8E69D76, 0x00000074);
	WRITEU8(offset + 0x8E69D78, 0x00000065);
	WRITEU8(offset + 0x8E69D7A, 0x00000072);
	WRITEU8(offset + 0x8E69D7C, 0x0000002F);
	WRITEU8(offset + 0x8E69D7E, 0x00000043);
	WRITEU8(offset + 0x8E69D80, 0x00000041);
	WRITEU8(offset + 0x8E69D82, 0x00000054);
	WRITEU8(offset + 0x8E4A01C, 0x00000048);
	WRITEU8(offset + 0x8E4A01E, 0x00000075);
	WRITEU8(offset + 0x8E4A020, 0x0000006E);
	WRITEU8(offset + 0x8E4A022, 0x00000074);
	WRITEU8(offset + 0x8E4A024, 0x00000065);
	WRITEU8(offset + 0x8E4A026, 0x00000072);
	WRITEU8(offset + 0x8E4A028, 0x0000002F);
	WRITEU8(offset + 0x8E4A02A, 0x00000043);
	WRITEU8(offset + 0x8E4A02C, 0x00000041);
	WRITEU8(offset + 0x8E4A02E, 0x00000054);
	WRITEU8(offset + 0x048367E, 0x00000048);
	WRITEU8(offset + 0x0483680, 0x00000075);
	WRITEU8(offset + 0x0483682, 0x0000006E);
	WRITEU8(offset + 0x0483684, 0x00000074);
	WRITEU8(offset + 0x0483686, 0x00000065);
	WRITEU8(offset + 0x0483688, 0x00000072);
	WRITEU8(offset + 0x048368A, 0x0000002F);
	WRITEU8(offset + 0x048368C, 0x00000043);
	WRITEU8(offset + 0x048368E, 0x00000041);
	WRITEU8(offset + 0x0483690, 0x00000054);
	WRITEU8(offset + 0x04813F2, 0x00000048);
	WRITEU8(offset + 0x04813F4, 0x00000075);
	WRITEU8(offset + 0x04813F6, 0x0000006E);
	WRITEU8(offset + 0x04813F8, 0x00000074);
	WRITEU8(offset + 0x04813FA, 0x00000065);
	WRITEU8(offset + 0x04813FC, 0x00000072);
	WRITEU8(offset + 0x04813FE, 0x0000002F);
	WRITEU8(offset + 0x0481400, 0x00000043);
	WRITEU8(offset + 0x0481402, 0x00000041);
	WRITEU8(offset + 0x0481404, 0x00000054);
}

void	Online_Name__GamerX_CAT(void)
{
	WRITEU8(offset + 0x9810800, 0x00000047);
	WRITEU8(offset + 0x9810802, 0x00000061);
	WRITEU8(offset + 0x9810804, 0x0000006D);
	WRITEU8(offset + 0x9810806, 0x00000065);
	WRITEU8(offset + 0x9810808, 0x00000072);
	WRITEU8(offset + 0x981080A, 0x00000058);
	WRITEU8(offset + 0x981080C, 0x0000002F);
	WRITEU8(offset + 0x981080E, 0x00000043);
	WRITEU8(offset + 0x9810810, 0x00000041);
	WRITEU8(offset + 0x9810812, 0x00000054);
	WRITEU8(offset + 0x900176C, 0x00000047);
	WRITEU8(offset + 0x900176E, 0x00000061);
	WRITEU8(offset + 0x9001770, 0x0000006D);
	WRITEU8(offset + 0x9001772, 0x00000065);
	WRITEU8(offset + 0x9001774, 0x00000072);
	WRITEU8(offset + 0x9001776, 0x00000058);
	WRITEU8(offset + 0x9001778, 0x0000002F);
	WRITEU8(offset + 0x900177A, 0x00000043);
	WRITEU8(offset + 0x900177C, 0x00000041);
	WRITEU8(offset + 0x900177E, 0x00000054);
	WRITEU8(offset + 0x8E69D70, 0x00000047);
	WRITEU8(offset + 0x8E69D72, 0x00000061);
	WRITEU8(offset + 0x8E69D74, 0x0000006D);
	WRITEU8(offset + 0x8E69D76, 0x00000065);
	WRITEU8(offset + 0x8E69D78, 0x00000072);
	WRITEU8(offset + 0x8E69D7A, 0x00000058);
	WRITEU8(offset + 0x8E69D7C, 0x0000002F);
	WRITEU8(offset + 0x8E69D7E, 0x00000043);
	WRITEU8(offset + 0x8E69D80, 0x00000041);
	WRITEU8(offset + 0x8E69D82, 0x00000054);
	WRITEU8(offset + 0x8E4A01C, 0x00000047);
	WRITEU8(offset + 0x8E4A01E, 0x00000061);
	WRITEU8(offset + 0x8E4A020, 0x0000006D);
	WRITEU8(offset + 0x8E4A022, 0x00000065);
	WRITEU8(offset + 0x8E4A024, 0x00000072);
	WRITEU8(offset + 0x8E4A026, 0x00000058);
	WRITEU8(offset + 0x8E4A028, 0x0000002F);
	WRITEU8(offset + 0x8E4A02A, 0x00000043);
	WRITEU8(offset + 0x8E4A02C, 0x00000041);
	WRITEU8(offset + 0x8E4A02E, 0x00000054);
	WRITEU8(offset + 0x048367E, 0x00000047);
	WRITEU8(offset + 0x0483680, 0x00000061);
	WRITEU8(offset + 0x0483682, 0x0000006D);
	WRITEU8(offset + 0x0483684, 0x00000065);
	WRITEU8(offset + 0x0483686, 0x00000072);
	WRITEU8(offset + 0x0483688, 0x00000058);
	WRITEU8(offset + 0x048368A, 0x0000002F);
	WRITEU8(offset + 0x048368C, 0x00000043);
	WRITEU8(offset + 0x048368E, 0x00000041);
	WRITEU8(offset + 0x0483690, 0x00000054);
	WRITEU8(offset + 0x04813F2, 0x00000047);
	WRITEU8(offset + 0x04813F4, 0x00000061);
	WRITEU8(offset + 0x04813F6, 0x0000006D);
	WRITEU8(offset + 0x04813F8, 0x00000065);
	WRITEU8(offset + 0x04813FA, 0x00000072);
	WRITEU8(offset + 0x04813FC, 0x00000058);
	WRITEU8(offset + 0x04813FE, 0x0000002F);
	WRITEU8(offset + 0x0481400, 0x00000043);
	WRITEU8(offset + 0x0481402, 0x00000041);
	WRITEU8(offset + 0x0481404, 0x00000054);
}

void	Online_Name__TumpetTwoZeroOneNine(void)
{
	WRITEU8(offset + 0x9810800, 0x00000054);
	WRITEU8(offset + 0x9810802, 0x00000075);
	WRITEU8(offset + 0x9810804, 0x0000006D);
	WRITEU8(offset + 0x9810806, 0x00000070);
	WRITEU8(offset + 0x9810808, 0x00000065);
	WRITEU8(offset + 0x981080A, 0x00000074);
	WRITEU8(offset + 0x981080C, 0x00000032);
	WRITEU8(offset + 0x981080E, 0x00000030);
	WRITEU8(offset + 0x9810810, 0x00000031);
	WRITEU8(offset + 0x9810812, 0x00000039);
	WRITEU8(offset + 0x900176C, 0x00000054);
	WRITEU8(offset + 0x900176E, 0x00000075);
	WRITEU8(offset + 0x9001770, 0x0000006D);
	WRITEU8(offset + 0x9001772, 0x00000070);
	WRITEU8(offset + 0x9001774, 0x00000065);
	WRITEU8(offset + 0x9001776, 0x00000074);
	WRITEU8(offset + 0x9001778, 0x00000032);
	WRITEU8(offset + 0x900177A, 0x00000030);
	WRITEU8(offset + 0x900177C, 0x00000031);
	WRITEU8(offset + 0x900177E, 0x00000039);
	WRITEU8(offset + 0x8E69D70, 0x00000054);
	WRITEU8(offset + 0x8E69D72, 0x00000075);
	WRITEU8(offset + 0x8E69D74, 0x0000006D);
	WRITEU8(offset + 0x8E69D76, 0x00000070);
	WRITEU8(offset + 0x8E69D78, 0x00000065);
	WRITEU8(offset + 0x8E69D7A, 0x00000074);
	WRITEU8(offset + 0x8E69D7C, 0x00000032);
	WRITEU8(offset + 0x8E69D7E, 0x00000030);
	WRITEU8(offset + 0x8E69D80, 0x00000031);
	WRITEU8(offset + 0x8E69D82, 0x00000039);
	WRITEU8(offset + 0x8E4A01C, 0x00000054);
	WRITEU8(offset + 0x8E4A01E, 0x00000075);
	WRITEU8(offset + 0x8E4A020, 0x0000006D);
	WRITEU8(offset + 0x8E4A022, 0x00000070);
	WRITEU8(offset + 0x8E4A024, 0x00000065);
	WRITEU8(offset + 0x8E4A026, 0x00000074);
	WRITEU8(offset + 0x8E4A028, 0x00000032);
	WRITEU8(offset + 0x8E4A02A, 0x00000030);
	WRITEU8(offset + 0x8E4A02C, 0x00000031);
	WRITEU8(offset + 0x8E4A02E, 0x00000039);
	WRITEU8(offset + 0x048367E, 0x00000054);
	WRITEU8(offset + 0x0483680, 0x00000075);
	WRITEU8(offset + 0x0483682, 0x0000006D);
	WRITEU8(offset + 0x0483684, 0x00000070);
	WRITEU8(offset + 0x0483686, 0x00000065);
	WRITEU8(offset + 0x0483688, 0x00000074);
	WRITEU8(offset + 0x048368A, 0x00000032);
	WRITEU8(offset + 0x048368C, 0x00000030);
	WRITEU8(offset + 0x048368E, 0x00000031);
	WRITEU8(offset + 0x0483690, 0x00000039);
	WRITEU8(offset + 0x04813F2, 0x00000054);
	WRITEU8(offset + 0x04813F4, 0x00000075);
	WRITEU8(offset + 0x04813F6, 0x0000006D);
	WRITEU8(offset + 0x04813F8, 0x00000070);
	WRITEU8(offset + 0x04813FA, 0x00000065);
	WRITEU8(offset + 0x04813FC, 0x00000074);
	WRITEU8(offset + 0x04813FE, 0x00000032);
	WRITEU8(offset + 0x0481400, 0x00000030);
	WRITEU8(offset + 0x0481402, 0x00000031);
	WRITEU8(offset + 0x0481404, 0x00000039);
}

void	Online_Name__Spring_FiveOneTwo(void)
{
	WRITEU8(offset + 0x9810800, 0x00000053);
	WRITEU8(offset + 0x9810802, 0x00000070);
	WRITEU8(offset + 0x9810804, 0x00000072);
	WRITEU8(offset + 0x9810806, 0x00000069);
	WRITEU8(offset + 0x9810808, 0x0000006E);
	WRITEU8(offset + 0x981080A, 0x00000067);
	WRITEU8(offset + 0x981080C, 0x0000002D);
	WRITEU8(offset + 0x981080E, 0x00000035);
	WRITEU8(offset + 0x9810810, 0x00000031);
	WRITEU8(offset + 0x9810812, 0x00000032);
	WRITEU8(offset + 0x900176C, 0x00000053);
	WRITEU8(offset + 0x900176E, 0x00000070);
	WRITEU8(offset + 0x9001770, 0x00000072);
	WRITEU8(offset + 0x9001772, 0x00000069);
	WRITEU8(offset + 0x9001774, 0x0000006E);
	WRITEU8(offset + 0x9001776, 0x00000067);
	WRITEU8(offset + 0x9001778, 0x0000002D);
	WRITEU8(offset + 0x900177A, 0x00000035);
	WRITEU8(offset + 0x900177C, 0x00000031);
	WRITEU8(offset + 0x900177E, 0x00000032);
	WRITEU8(offset + 0x8E69D70, 0x00000053);
	WRITEU8(offset + 0x8E69D72, 0x00000070);
	WRITEU8(offset + 0x8E69D74, 0x00000072);
	WRITEU8(offset + 0x8E69D76, 0x00000069);
	WRITEU8(offset + 0x8E69D78, 0x0000006E);
	WRITEU8(offset + 0x8E69D7A, 0x00000067);
	WRITEU8(offset + 0x8E69D7C, 0x0000002D);
	WRITEU8(offset + 0x8E69D7E, 0x00000035);
	WRITEU8(offset + 0x8E69D80, 0x00000031);
	WRITEU8(offset + 0x8E69D82, 0x00000032);
	WRITEU8(offset + 0x8E4A01C, 0x00000053);
	WRITEU8(offset + 0x8E4A01E, 0x00000070);
	WRITEU8(offset + 0x8E4A020, 0x00000072);
	WRITEU8(offset + 0x8E4A022, 0x00000069);
	WRITEU8(offset + 0x8E4A024, 0x0000006E);
	WRITEU8(offset + 0x8E4A026, 0x00000067);
	WRITEU8(offset + 0x8E4A028, 0x0000002D);
	WRITEU8(offset + 0x8E4A02A, 0x00000035);
	WRITEU8(offset + 0x8E4A02C, 0x00000031);
	WRITEU8(offset + 0x8E4A02E, 0x00000032);
	WRITEU8(offset + 0x048367E, 0x00000053);
	WRITEU8(offset + 0x0483680, 0x00000070);
	WRITEU8(offset + 0x0483682, 0x00000072);
	WRITEU8(offset + 0x0483684, 0x00000069);
	WRITEU8(offset + 0x0483686, 0x0000006E);
	WRITEU8(offset + 0x0483688, 0x00000067);
	WRITEU8(offset + 0x048368A, 0x0000002D);
	WRITEU8(offset + 0x048368C, 0x00000035);
	WRITEU8(offset + 0x048368E, 0x00000031);
	WRITEU8(offset + 0x0483690, 0x00000032);
	WRITEU8(offset + 0x04813F2, 0x00000053);
	WRITEU8(offset + 0x04813F4, 0x00000070);
	WRITEU8(offset + 0x04813F6, 0x00000072);
	WRITEU8(offset + 0x04813F8, 0x00000069);
	WRITEU8(offset + 0x04813FA, 0x0000006E);
	WRITEU8(offset + 0x04813FC, 0x00000067);
	WRITEU8(offset + 0x04813FE, 0x0000002D);
	WRITEU8(offset + 0x0481400, 0x00000035);
	WRITEU8(offset + 0x0481402, 0x00000031);
	WRITEU8(offset + 0x0481404, 0x00000032);
}

void	Online_Name__ImNotNoxii(void)
{
	WRITEU8(offset + 0x9810800, 0x00000049);
	WRITEU8(offset + 0x9810802, 0x0000006D);
	WRITEU8(offset + 0x9810804, 0x0000004E);
	WRITEU8(offset + 0x9810806, 0x0000006F);
	WRITEU8(offset + 0x9810808, 0x00000074);
	WRITEU8(offset + 0x981080A, 0x0000004E);
	WRITEU8(offset + 0x981080C, 0x0000006F);
	WRITEU8(offset + 0x981080E, 0x00000078);
	WRITEU8(offset + 0x9810810, 0x00000069);
	WRITEU8(offset + 0x9810812, 0x00000069);
	WRITEU8(offset + 0x900176C, 0x00000049);
	WRITEU8(offset + 0x900176E, 0x0000006D);
	WRITEU8(offset + 0x9001770, 0x0000004E);
	WRITEU8(offset + 0x9001772, 0x0000006F);
	WRITEU8(offset + 0x9001774, 0x00000074);
	WRITEU8(offset + 0x9001776, 0x0000004E);
	WRITEU8(offset + 0x9001778, 0x0000006F);
	WRITEU8(offset + 0x900177A, 0x00000078);
	WRITEU8(offset + 0x900177C, 0x00000069);
	WRITEU8(offset + 0x900177E, 0x00000069);
	WRITEU8(offset + 0x8E69D70, 0x00000049);
	WRITEU8(offset + 0x8E69D72, 0x0000006D);
	WRITEU8(offset + 0x8E69D74, 0x0000004E);
	WRITEU8(offset + 0x8E69D76, 0x0000006F);
	WRITEU8(offset + 0x8E69D78, 0x00000074);
	WRITEU8(offset + 0x8E69D7A, 0x0000004E);
	WRITEU8(offset + 0x8E69D7C, 0x0000006F);
	WRITEU8(offset + 0x8E69D7E, 0x00000078);
	WRITEU8(offset + 0x8E69D80, 0x00000069);
	WRITEU8(offset + 0x8E69D82, 0x00000069);
	WRITEU8(offset + 0x8E4A01C, 0x00000049);
	WRITEU8(offset + 0x8E4A01E, 0x0000006D);
	WRITEU8(offset + 0x8E4A020, 0x0000004E);
	WRITEU8(offset + 0x8E4A022, 0x0000006F);
	WRITEU8(offset + 0x8E4A024, 0x00000074);
	WRITEU8(offset + 0x8E4A026, 0x0000004E);
	WRITEU8(offset + 0x8E4A028, 0x0000006F);
	WRITEU8(offset + 0x8E4A02A, 0x00000078);
	WRITEU8(offset + 0x8E4A02C, 0x00000069);
	WRITEU8(offset + 0x8E4A02E, 0x00000069);
	WRITEU8(offset + 0x048367E, 0x00000049);
	WRITEU8(offset + 0x0483680, 0x0000006D);
	WRITEU8(offset + 0x0483682, 0x0000004E);
	WRITEU8(offset + 0x0483684, 0x0000006F);
	WRITEU8(offset + 0x0483686, 0x00000074);
	WRITEU8(offset + 0x0483688, 0x0000004E);
	WRITEU8(offset + 0x048368A, 0x0000006F);
	WRITEU8(offset + 0x048368C, 0x00000078);
	WRITEU8(offset + 0x048368E, 0x00000069);
	WRITEU8(offset + 0x0483690, 0x00000069);
	WRITEU8(offset + 0x04813F2, 0x00000049);
	WRITEU8(offset + 0x04813F4, 0x0000006D);
	WRITEU8(offset + 0x04813F6, 0x0000004E);
	WRITEU8(offset + 0x04813F8, 0x0000006F);
	WRITEU8(offset + 0x04813FA, 0x00000074);
	WRITEU8(offset + 0x04813FC, 0x0000004E);
	WRITEU8(offset + 0x04813FE, 0x0000006F);
	WRITEU8(offset + 0x0481400, 0x00000078);
	WRITEU8(offset + 0x0481402, 0x00000069);
	WRITEU8(offset + 0x0481404, 0x00000069);
}

void	Online_Name____Yunix__(void)
{
	WRITEU8(offset + 0x9810800, 0x00000025);
	WRITEU8(offset + 0x9810802, 0x00000025);
	WRITEU8(offset + 0x9810804, 0x00000059);
	WRITEU8(offset + 0x9810806, 0x00000075);
	WRITEU8(offset + 0x9810808, 0x0000006E);
	WRITEU8(offset + 0x981080A, 0x00000069);
	WRITEU8(offset + 0x981080C, 0x00000078);
	WRITEU8(offset + 0x981080E, 0x00000025);
	WRITEU8(offset + 0x9810810, 0x00000025);
	WRITEU8(offset + 0x900176C, 0x00000025);
	WRITEU8(offset + 0x900176E, 0x00000025);
	WRITEU8(offset + 0x9001770, 0x00000059);
	WRITEU8(offset + 0x9001772, 0x00000075);
	WRITEU8(offset + 0x9001774, 0x0000006E);
	WRITEU8(offset + 0x9001776, 0x00000069);
	WRITEU8(offset + 0x9001778, 0x00000078);
	WRITEU8(offset + 0x900177A, 0x00000025);
	WRITEU8(offset + 0x900177C, 0x00000025);
	WRITEU8(offset + 0x8E69D70, 0x00000025);
	WRITEU8(offset + 0x8E69D72, 0x00000025);
	WRITEU8(offset + 0x8E69D74, 0x00000059);
	WRITEU8(offset + 0x8E69D76, 0x00000075);
	WRITEU8(offset + 0x8E69D78, 0x0000006E);
	WRITEU8(offset + 0x8E69D7A, 0x00000069);
	WRITEU8(offset + 0x8E69D7C, 0x00000078);
	WRITEU8(offset + 0x8E69D7E, 0x00000025);
	WRITEU8(offset + 0x8E69D80, 0x00000025);
	WRITEU8(offset + 0x8E4A01C, 0x00000025);
	WRITEU8(offset + 0x8E4A01E, 0x00000025);
	WRITEU8(offset + 0x8E4A020, 0x00000059);
	WRITEU8(offset + 0x8E4A022, 0x00000075);
	WRITEU8(offset + 0x8E4A024, 0x0000006E);
	WRITEU8(offset + 0x8E4A026, 0x00000069);
	WRITEU8(offset + 0x8E4A028, 0x00000078);
	WRITEU8(offset + 0x8E4A02A, 0x00000025);
	WRITEU8(offset + 0x8E4A02C, 0x00000025);
	WRITEU8(offset + 0x048367E, 0x00000025);
	WRITEU8(offset + 0x0483680, 0x00000025);
	WRITEU8(offset + 0x0483682, 0x00000059);
	WRITEU8(offset + 0x0483684, 0x00000075);
	WRITEU8(offset + 0x0483686, 0x0000006E);
	WRITEU8(offset + 0x0483688, 0x00000069);
	WRITEU8(offset + 0x048368A, 0x00000078);
	WRITEU8(offset + 0x048368C, 0x00000025);
	WRITEU8(offset + 0x048368E, 0x00000025);
	WRITEU8(offset + 0x04813F2, 0x00000025);
	WRITEU8(offset + 0x04813F4, 0x00000025);
	WRITEU8(offset + 0x04813F6, 0x00000059);
	WRITEU8(offset + 0x04813F8, 0x00000075);
	WRITEU8(offset + 0x04813FA, 0x0000006E);
	WRITEU8(offset + 0x04813FC, 0x00000069);
	WRITEU8(offset + 0x04813FE, 0x00000078);
	WRITEU8(offset + 0x0481400, 0x00000025);
	WRITEU8(offset + 0x0481402, 0x00000025);
}

void	Online_ID__Zero(void)
{
	WRITEU32(offset + 0x8ED5AC0, 0x00000000);
	WRITEU32(offset + 0x8ED5ABC, 0x00000000);
	WRITEU32(offset + 0x8F59F40, 0x00000000);
	WRITEU32(offset + 0x8F59F3C, 0x00000000);
	WRITEU32(offset + 0xFFFF148, 0x00000000);
	WRITEU32(offset + 0xFFFF144, 0x00000000);
	WRITEU32(offset + 0x8FB2D80, 0x00000000);
	WRITEU32(offset + 0x8FB2D7C, 0x00000000);
	WRITEU32(offset + 0x8F86660, 0x00000000);
	WRITEU32(offset + 0x8F8665C, 0x00000000);
	WRITEU32(offset + 0xFFFF158, 0x00000000);
	WRITEU32(offset + 0xFFFF154, 0x00000000);
	WRITEU32(offset + 0x8ED49E0, 0x00000000);
	WRITEU32(offset + 0x8ED49DC, 0x00000000);
	WRITEU32(offset + 0x8F01100, 0x00000000);
	WRITEU32(offset + 0x8F010FC, 0x00000000);
	WRITEU32(offset + 0x8F2D820, 0x00000000);
	WRITEU32(offset + 0x8F2D81C, 0x00000000);
	WRITEU32(offset + 0xFFFF134, 0x00000000);
	WRITEU32(offset + 0xFFFF130, 0x00000000);
	WRITEU32(offset + 0xFFFF13C, 0x00000000);
	WRITEU32(offset + 0xFFFF138, 0x00000000);
	WRITEU32(offset + 0x8ED4F80, 0x00000000);
	WRITEU32(offset + 0x8ED4F7C, 0x00000000);
	WRITEU32(offset + 0x8EAE260, 0x00000000);
	WRITEU32(offset + 0x8EAE25C, 0x00000000);
	WRITEU32(offset + 0x8EA17E0, 0x00000000);
	WRITEU32(offset + 0x8EA17DC, 0x00000000);
	WRITEU32(offset + 0x8EA28C0, 0x00000000);
	WRITEU32(offset + 0x8EA28BC, 0x00000000);
	WRITEU32(offset + 0x8EA2E60, 0x00000000);
	WRITEU32(offset + 0x8EA2E5C, 0x00000000);
	WRITEU32(offset + 0x8EA3400, 0x00000000);
	WRITEU32(offset + 0x8EA33FC, 0x00000000);
	WRITEU32(offset + 0x8EA39A0, 0x00000000);
	WRITEU32(offset + 0x8EA399C, 0x00000000);
	WRITEU32(offset + 0x8EA82C0, 0x00000000);
	WRITEU32(offset + 0x8EA82BC, 0x00000000);
	WRITEU32(offset + 0x8EA93A0, 0x00000000);
	WRITEU32(offset + 0x8EA939C, 0x00000000);
	WRITEU32(offset + 0x8EA9940, 0x00000000);
	WRITEU32(offset + 0x8EA993C, 0x00000000);
	WRITEU32(offset + 0x8EA9EE0, 0x00000000);
	WRITEU32(offset + 0x8EA9EDC, 0x00000000);
	WRITEU32(offset + 0x8EA44E0, 0x00000000);
	WRITEU32(offset + 0x8EA44DC, 0x00000000);
	WRITEU32(offset + 0x8EA5020, 0x00000000);
	WRITEU32(offset + 0x8EA501C, 0x00000000);
	WRITEU32(offset + 0x8EA5B60, 0x00000000);
	WRITEU32(offset + 0x8EA5B5C, 0x00000000);
	WRITEU32(offset + 0x8EA6100, 0x00000000);
	WRITEU32(offset + 0x8EA60FC, 0x00000000);
	WRITEU32(offset + 0x8EA66A0, 0x00000000);
	WRITEU32(offset + 0x8EA669C, 0x00000000);
	WRITEU32(offset + 0x8EA6C40, 0x00000000);
	WRITEU32(offset + 0x8EA6C3C, 0x00000000);
	WRITEU32(offset + 0x8EA7D20, 0x00000000);
	WRITEU32(offset + 0x8EA7D1C, 0x00000000);
	WRITEU32(offset + 0x8EAAA20, 0x00000000);
	WRITEU32(offset + 0x8EAAA1C, 0x00000000);
	WRITEU32(offset + 0x8EB1AA0, 0x00000000);
	WRITEU32(offset + 0x8EB1A9C, 0x00000000);
	WRITEU32(offset + 0x8EB2040, 0x00000000);
	WRITEU32(offset + 0x8EB203C, 0x00000000);
	WRITEU32(offset + 0x8EA3F40, 0x00000000);
	WRITEU32(offset + 0x8EA3F3C, 0x00000000);
	WRITEU32(offset + 0x8EA44E0, 0x00000000);
	WRITEU32(offset + 0x8EA44DC, 0x00000000);
	WRITEU32(offset + 0x8EA4A80, 0x00000000);
	WRITEU32(offset + 0x8EA4A7C, 0x00000000);
	WRITEU32(offset + 0x8EA5020, 0x00000000);
	WRITEU32(offset + 0x8EA501C, 0x00000000);
	WRITEU32(offset + 0x8EA55C0, 0x00000000);
	WRITEU32(offset + 0x8EA55BC, 0x00000000);
	WRITEU32(offset + 0x8EA5B60, 0x00000000);
	WRITEU32(offset + 0x8EA5B5C, 0x00000000);
	WRITEU32(offset + 0x8EA6100, 0x00000000);
	WRITEU32(offset + 0x8EA60FC, 0x00000000);
	WRITEU32(offset + 0x8EA66A0, 0x00000000);
	WRITEU32(offset + 0x8EA669C, 0x00000000);
	WRITEU32(offset + 0x8EA6C40, 0x00000000);
	WRITEU32(offset + 0x8EA6C3C, 0x00000000);
	WRITEU32(offset + 0x8EAF8E0, 0x00000000);
	WRITEU32(offset + 0x8EAF8DC, 0x00000000);
	WRITEU32(offset + 0x8EAF340, 0x00000000);
	WRITEU32(offset + 0x8EAF33C, 0x00000000);
	WRITEU32(offset + 0x8EAEDA0, 0x00000000);
	WRITEU32(offset + 0x8EAED9C, 0x00000000);
	WRITEU32(offset + 0x8EAE800, 0x00000000);
	WRITEU32(offset + 0x8EAE7FC, 0x00000000);
	WRITEU32(offset + 0x8EAE260, 0x00000000);
	WRITEU32(offset + 0x8EAE25C, 0x00000000);
	WRITEU32(offset + 0x8EADCC0, 0x00000000);
	WRITEU32(offset + 0x8EADCBC, 0x00000000);
	WRITEU32(offset + 0x8EAD720, 0x00000000);
	WRITEU32(offset + 0x8EAD71C, 0x00000000);
	WRITEU32(offset + 0x8EAD180, 0x00000000);
	WRITEU32(offset + 0x8EAD17C, 0x00000000);
	WRITEU32(offset + 0x8EACBE0, 0x00000000);
	WRITEU32(offset + 0x8EACBDC, 0x00000000);
	WRITEU32(offset + 0x8EAC640, 0x00000000);
	WRITEU32(offset + 0x8EAC63C, 0x00000000);
	WRITEU32(offset + 0x8EAC0A0, 0x00000000);
	WRITEU32(offset + 0x8EAC09C, 0x00000000);
	WRITEU32(offset + 0x8EABB00, 0x00000000);
	WRITEU32(offset + 0x8EABAFC, 0x00000000);
	WRITEU32(offset + 0x8EAB560, 0x00000000);
	WRITEU32(offset + 0x8EAB55C, 0x00000000);
	WRITEU32(offset + 0x8EAAFC0, 0x00000000);
	WRITEU32(offset + 0x8EAAFBC, 0x00000000);
	WRITEU32(offset + 0x8EAAF20, 0x00000000);
	WRITEU32(offset + 0x8EAAF1C, 0x00000000);
	WRITEU32(offset + 0x8EAA480, 0x00000000);
	WRITEU32(offset + 0x8EAA47C, 0x00000000);
	WRITEU32(offset + 0x8EA9EE0, 0x00000000);
	WRITEU32(offset + 0x8EA9EDC, 0x00000000);
	WRITEU32(offset + 0x8EA9940, 0x00000000);
	WRITEU32(offset + 0x8EA993C, 0x00000000);
	WRITEU32(offset + 0x8EA93A0, 0x00000000);
	WRITEU32(offset + 0x8EA939C, 0x00000000);
	WRITEU32(offset + 0x8EA82C0, 0x00000000);
	WRITEU32(offset + 0x8EA82BC, 0x00000000);
	WRITEU32(offset + 0x8EA39A0, 0x00000000);
	WRITEU32(offset + 0x8EA399C, 0x00000000);
	WRITEU32(offset + 0x8EA3400, 0x00000000);
	WRITEU32(offset + 0x8EA33FC, 0x00000000);
	WRITEU32(offset + 0x8EA2E60, 0x00000000);
	WRITEU32(offset + 0x8EA2E5C, 0x00000000);
	WRITEU32(offset + 0x8EA28C0, 0x00000000);
	WRITEU32(offset + 0x8EA28BC, 0x00000000);
	WRITEU32(offset + 0x8EA17E0, 0x00000000);
	WRITEU32(offset + 0x8EA17DC, 0x00000000);
	WRITEU32(offset + 0x8F02780, 0x00000000);
	WRITEU32(offset + 0x8F0277C, 0x00000000);
	WRITEU32(offset + 0xFFFF164, 0x00000000);
	WRITEU32(offset + 0xFFFF160, 0x00000000);
	WRITEU32(offset + 0x8ED4440, 0x00000000);
	WRITEU32(offset + 0x8ED443C, 0x00000000);
	WRITEU32(offset + 0x8F860C0, 0x00000000);
	WRITEU32(offset + 0x8F860BC, 0x00000000);
	WRITEU32(offset + 0x8F599A0, 0x00000000);
	WRITEU32(offset + 0x8F5999C, 0x00000000);
	WRITEU32(offset + 0x8F2D280, 0x00000000);
	WRITEU32(offset + 0x8F2D27C, 0x00000000);
	WRITEU32(offset + 0x8F00B60, 0x00000000);
	WRITEU32(offset + 0x8F00B5C, 0x00000000);
	WRITEU32(offset + 0x8FB27E0, 0x00000000);
	WRITEU32(offset + 0x8FB27DC, 0x00000000);
	WRITEU32(offset + 0xFFFF118, 0x00000000);
	WRITEU32(offset + 0xFFFF114, 0x00000000);
	WRITEU32(offset + 0x8EA8E00, 0x00000000);
	WRITEU32(offset + 0x8EA8DFC, 0x00000000);
	WRITEU32(offset + 0xFFFF10C, 0x00000000);
	WRITEU32(offset + 0xFFFF108, 0x00000000);
	WRITEU32(offset + 0x8F58E60, 0x00000000);
	WRITEU32(offset + 0x8F58E5C, 0x00000000);
	WRITEU32(offset + 0xFFFF0D8, 0x00000000);
	WRITEU32(offset + 0xFFFF0D4, 0x00000000);
	WRITEU32(offset + 0x8FB2240, 0x00000000);
	WRITEU32(offset + 0x8FB223C, 0x00000000);
	WRITEU32(offset + 0x8F2E360, 0x00000000);
	WRITEU32(offset + 0x8F2E35C, 0x00000000);
	WRITEU32(offset + 0x8F85B20, 0x00000000);
	WRITEU32(offset + 0x8F85B1C, 0x00000000);
	WRITEU32(offset + 0x8EA7780, 0x00000000);
	WRITEU32(offset + 0x8EA777C, 0x00000000);
	WRITEU32(offset + 0x8EFB160, 0x00000000);
	WRITEU32(offset + 0x8EFB15C, 0x00000000);
	WRITEU32(offset + 0x8EA2320, 0x00000000);
	WRITEU32(offset + 0x8EA231C, 0x00000000);
	WRITEU32(offset + 0xFFFF0E8, 0x00000000);
	WRITEU32(offset + 0xFFFF0E4, 0x00000000);
	WRITEU32(offset + 0xFFFF0B4, 0x00000000);
	WRITEU32(offset + 0xFFFF0B0, 0x00000000);
	WRITEU32(offset + 0x8F59400, 0x00000000);
	WRITEU32(offset + 0x8F593FC, 0x00000000);
	WRITEU32(offset + 0x8F2C740, 0x00000000);
	WRITEU32(offset + 0x8F2C73C, 0x00000000);
	WRITEU32(offset + 0x8FACDE0, 0x00000000);
	WRITEU32(offset + 0x8FACDDC, 0x00000000);
	WRITEU32(offset + 0x8F53A00, 0x00000000);
	WRITEU32(offset + 0x8F539FC, 0x00000000);
	WRITEU32(offset + 0x8F80120, 0x00000000);
	WRITEU32(offset + 0x8F8011C, 0x00000000);
	WRITEU32(offset + 0x8F53FA0, 0x00000000);
	WRITEU32(offset + 0x8F53F9C, 0x00000000);
	WRITEU32(offset + 0x8F272E0, 0x00000000);
	WRITEU32(offset + 0x8F272DC, 0x00000000);
	WRITEU32(offset + 0x8EFABC0, 0x00000000);
	WRITEU32(offset + 0x8EFABBC, 0x00000000);
	WRITEU32(offset + 0x8ECE4A0, 0x00000000);
	WRITEU32(offset + 0x8ECE49C, 0x00000000);
	WRITEU32(offset + 0x8FAC840, 0x00000000);
	WRITEU32(offset + 0x8FAC83C, 0x00000000);
	WRITEU32(offset + 0x8ECEA40, 0x00000000);
	WRITEU32(offset + 0x8ECEA3C, 0x00000000);
	WRITEU32(offset + 0x8EA1D80, 0x00000000);
	WRITEU32(offset + 0x8EA1D7C, 0x00000000);
	WRITEU32(offset + 0x8ED3EA0, 0x00000000);
	WRITEU32(offset + 0x8ED3E9C, 0x00000000);
	WRITEU32(offset + 0x8EA71E0, 0x00000000);
	WRITEU32(offset + 0x8EA71DC, 0x00000000);
	WRITEU32(offset + 0x8ED3900, 0x00000000);
	WRITEU32(offset + 0x8ED38FC, 0x00000000);
	WRITEU32(offset + 0x8F00020, 0x00000000);
	WRITEU32(offset + 0x8F0001C, 0x00000000);
	WRITEU32(offset + 0x8F2CCE0, 0x00000000);
	WRITEU32(offset + 0x8F2CCDC, 0x00000000);
	WRITEU32(offset + 0x8EA8860, 0x00000000);
	WRITEU32(offset + 0x8EA885C, 0x00000000);
	WRITEU32(offset + 0x8F005C0, 0x00000000);
	WRITEU32(offset + 0x8F005BC, 0x00000000);
}

void	Offline_ID__deadZeroZerofaceZero(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x04836A4, 0x00000000);
	WRITEU32(offset + 0x04836A8, 0xD00FACE0);
	WRITEU32(offset + 0x04836AC, 0x00000DEA);
	offset = 0;
	data = 0;
}

void	Offline_ID__dead(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x04836A4, 0x00000000);
	WRITEU32(offset + 0x04836A8, 0x0000DEAD);
	WRITEU32(offset + 0x04836AC, 0x00000000);
	offset = 0;
	data = 0;
}

void	Offline_ID__decafSevendeadSevenfaced(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x04836AC, 0xDECAF7DE);
	WRITEU32(offset + 0x04836A4, 0x00000000);
	WRITEU32(offset + 0x04836A8, 0xAD7FACED);
	offset = 0;
	data = 0;
}

void	Offline_ID__SevendeadSevenfadedSevenbedSeven(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x04836AC, 0x7DEAD7FA);
	WRITEU32(offset + 0x04836A8, 0xDED7BED7);
	WRITEU32(offset + 0x04836A4, 0x00000000);
	offset = 0;
	data = 0;
}

void	Teleport_To_The_Oil_Rig(void)
{
	offset = 0x00000000;
	if (is_pressed(0x00000008))
	{
		WRITEU32(offset + 0x0482F0C, 0x424A741E);
		WRITEU32(offset + 0x0482F14, 0xC535A7CE);
		offset = 0;
		data = 0;
	}
}

void	Teleport_To_The_Submarine(void)
{
	offset = 0x00000000;
	if (is_pressed(0x00000008))
	{
		WRITEU32(offset + 0x0482F0C, 0x4409972F);
		WRITEU32(offset + 0x0482F14, 0xC4D1C01D);
		offset = 0;
		data = 0;
	}
}

void	Teleporter(void)
{
	if (is_pressed(0x00000840))
	{
		WRITEU32(offset + 0x0482F0C, 0x44E4D963);
		WRITEU32(offset + 0x0482F14, 0xC4C90423);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000820))
	{
		WRITEU32(offset + 0x0482F0C, 0x4516923B);
		WRITEU32(offset + 0x0482F14, 0xC38B7CC8);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000810))
	{
		WRITEU32(offset + 0x0482F0C, 0x42168ABC);
		WRITEU32(offset + 0x0482F14, 0xC45A43DB);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000880))
	{
		WRITEU32(offset + 0x0482F0C, 0x41A867DA);
		WRITEU32(offset + 0x0482F14, 0xC5395E60);
		offset = 0;
		data = 0;
	}
}

void	Teleport_To_Greybase(void)
{
	offset = 0x00000000;
	if (is_pressed(0x00000008))
	{
		WRITEU32(offset + 0x0482F0C, 0x44E456CE);
		WRITEU32(offset + 0x0482F14, 0xC4CAC8FA);
		offset = 0;
		data = 0;
	}
}

void	MoonJump(void)
{
	offset = 0x00000000;
	if (READU32(offset + 0x037F150) == 0x00000000)
	{
		patch_address = 0x037F150;
		static const u8 buffer3513[] = { 0x01, 0x1A, 0x9F, 0xED, 0x01, 0x0A, 0x30, 0xEE, 0x21, 0x0C, 0xFB, 0xEA, 0x00, 0x00, 0x00, 0x3F };
		memcpy((void *)(patch_address + offset), buffer3513, 0x00000010);
	}
	WRITEU32(offset + 0x02421E0, 0xEE300A01);
	if (is_pressed(0x00000200))
	{
		WRITEU32(offset + 0x02421E0, 0xEA04F3DA);
	}
}

void	Walk_Through_Walls(void)
{
	WRITEU32(offset + 0x0482F28, 0xBDCCCCCD);
	WRITEU32(offset + 0x015FCE0, 0x3F800000);
	WRITEU32(offset + 0x012DBD0, 0x0A000002);
	WRITEU32(offset + 0x02421A4, 0xEA000016);
	WRITEU32(offset + 0x0249F47, 0x00000043);
	WRITEU32(offset + 0x0242214, 0xED800A08);
	WRITEU32(offset + 0x02421A4, 0x0A000016);
	if (is_pressed(0x00000800))
	{
		WRITEU32(offset + 0x02421A4, 0xEA000016);
		WRITEU32(offset + 0x0242214, 0xEAFFFFE9);
		WRITEU32(offset + 0x012DBD0, 0x1A000002);
		WRITEU32(offset + 0x0482F28, 0x00000000);
		WRITEU32(offset + 0x04836B4, 0xFFFFFFFF);
		if (is_pressed(0x12345678))
		{
			WRITEU32(offset + 0x0249F44, 0x00000047);
			WRITEU32(offset + 0x0249F45, 0x00000043);
			WRITEU32(offset + 0x0249F46, 0x0000004C);
			WRITEU32(offset + 0x0249F47, 0x00000043);
			offset = 0;
			data = 0;
		}
	}
}

void	Car_Speed_Hack(void)
{
	if (is_pressed(0x00000002))
	{
		WRITEU32(offset + 0x0482FB4, 0x00000012);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000002))
	{
		WRITEU32(offset + 0x0482FB4, 0x0000000E);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000002))
	{
		WRITEU32(offset + 0x0482FE0, 0x40999999);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000400))
	{
		WRITEU32(offset + 0x0482FE0, 0x41FFFFFF);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000102))
	{
		WRITEU32(offset + 0x0482FB4, 0x00000012);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000102))
	{
		WRITEU32(offset + 0x0482FB4, 0x0000000E);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000102))
	{
		WRITEU32(offset + 0x0482FE0, 0x00000000);
		offset = 0;
		data = 0;
	}
}

void	No_Fuel_Needed(void)
{
	offset = 0x00490844;
	for (int i = 0; i < 0x00000123; i++)
	{
		WRITEU8(offset + 0x0000000, 0x00000099);
		offset += 0x0000007C;
	}
}

void	No_Engine_Parts_Needed(void)
{
	offset = 0x00000000;
	WRITEU8(offset + 0x0490848, 0x00000003);
	WRITEU8(offset + 0x04908C4, 0x00000003);
	WRITEU8(offset + 0x0490940, 0x00000003);
	WRITEU8(offset + 0x04909BC, 0x00000003);
	WRITEU8(offset + 0x0490A38, 0x00000003);
	WRITEU8(offset + 0x0490AB4, 0x00000003);
	WRITEU8(offset + 0x0490B30, 0x00000003);
	WRITEU8(offset + 0x0490BAC, 0x00000003);
	WRITEU8(offset + 0x0490C28, 0x00000003);
	WRITEU8(offset + 0x0490CA4, 0x00000003);
	WRITEU8(offset + 0x0490D20, 0x00000003);
	WRITEU8(offset + 0x0490D9C, 0x00000003);
	WRITEU8(offset + 0x0490E18, 0x00000003);
	WRITEU8(offset + 0x0490E94, 0x00000003);
	WRITEU8(offset + 0x0490F10, 0x00000003);
	WRITEU8(offset + 0x0490F8C, 0x00000003);
	WRITEU8(offset + 0x0491008, 0x00000003);
	WRITEU8(offset + 0x0491084, 0x00000003);
	WRITEU8(offset + 0x0491100, 0x00000003);
	WRITEU8(offset + 0x049117C, 0x00000003);
	WRITEU8(offset + 0x04911F8, 0x00000003);
	WRITEU8(offset + 0x0491274, 0x00000003);
	WRITEU8(offset + 0x04912F0, 0x00000003);
	WRITEU8(offset + 0x049136C, 0x00000003);
	WRITEU8(offset + 0x04913E8, 0x00000003);
	WRITEU8(offset + 0x0491464, 0x00000003);
	WRITEU8(offset + 0x04914E0, 0x00000003);
	WRITEU8(offset + 0x049155C, 0x00000003);
	WRITEU8(offset + 0x04915D8, 0x00000003);
	WRITEU8(offset + 0x0491654, 0x00000003);
	WRITEU8(offset + 0x04916D0, 0x00000003);
	WRITEU8(offset + 0x049174C, 0x00000003);
	WRITEU8(offset + 0x04917C8, 0x00000003);
	WRITEU8(offset + 0x0491844, 0x00000003);
	WRITEU8(offset + 0x04918C0, 0x00000003);
	WRITEU8(offset + 0x049193C, 0x00000003);
	WRITEU8(offset + 0x04919B8, 0x00000003);
	WRITEU8(offset + 0x0491A34, 0x00000003);
	WRITEU8(offset + 0x0491AA8, 0x00000003);
	WRITEU8(offset + 0x0491AB0, 0x00000003);
	WRITEU8(offset + 0x0491B2C, 0x00000003);
	WRITEU8(offset + 0x0491BA8, 0x00000003);
	WRITEU8(offset + 0x0491C24, 0x00000003);
	WRITEU8(offset + 0x0491CA0, 0x00000003);
	WRITEU8(offset + 0x0491D1C, 0x00000003);
	WRITEU8(offset + 0x0491D98, 0x00000003);
	WRITEU8(offset + 0x0491E14, 0x00000003);
	WRITEU8(offset + 0x0491E90, 0x00000003);
	WRITEU8(offset + 0x0491F0C, 0x00000003);
	WRITEU8(offset + 0x0491F88, 0x00000003);
	WRITEU8(offset + 0x0492004, 0x00000003);
	WRITEU8(offset + 0x0492080, 0x00000003);
	WRITEU8(offset + 0x04920FC, 0x00000003);
	WRITEU8(offset + 0x0492178, 0x00000003);
	WRITEU8(offset + 0x04921F4, 0x00000003);
	WRITEU8(offset + 0x0492270, 0x00000003);
	WRITEU8(offset + 0x04922EC, 0x00000003);
	WRITEU8(offset + 0x0492368, 0x00000003);
	WRITEU8(offset + 0x04923E4, 0x00000003);
	WRITEU8(offset + 0x0492460, 0x00000003);
	WRITEU8(offset + 0x04924DC, 0x00000003);
	WRITEU8(offset + 0x0492558, 0x00000003);
	WRITEU8(offset + 0x04925D4, 0x00000003);
	WRITEU8(offset + 0x0492650, 0x00000003);
	WRITEU8(offset + 0x04926CC, 0x00000003);
	WRITEU8(offset + 0x0492748, 0x00000003);
	WRITEU8(offset + 0x04927C4, 0x00000003);
	WRITEU8(offset + 0x0492840, 0x00000003);
	WRITEU8(offset + 0x04928BC, 0x00000003);
	WRITEU8(offset + 0x0492938, 0x00000003);
	WRITEU8(offset + 0x04929B4, 0x00000003);
	WRITEU8(offset + 0x0492A30, 0x00000003);
	WRITEU8(offset + 0x0492AAC, 0x00000003);
	WRITEU8(offset + 0x0492B28, 0x00000003);
	WRITEU8(offset + 0x0492BA4, 0x00000003);
	WRITEU8(offset + 0x0492C20, 0x00000003);
	WRITEU8(offset + 0x0492C9C, 0x00000003);
	WRITEU8(offset + 0x0492D18, 0x00000003);
	WRITEU8(offset + 0x0492D94, 0x00000003);
	WRITEU8(offset + 0x0492E10, 0x00000003);
	WRITEU8(offset + 0x0492E8C, 0x00000003);
	WRITEU8(offset + 0x0492F08, 0x00000003);
	WRITEU8(offset + 0x0492F84, 0x00000003);
	WRITEU8(offset + 0x0493000, 0x00000003);
	WRITEU8(offset + 0x049307C, 0x00000003);
	WRITEU8(offset + 0x04930F8, 0x00000003);
	WRITEU8(offset + 0x0493174, 0x00000003);
	WRITEU8(offset + 0x04931F0, 0x00000003);
	WRITEU8(offset + 0x049326C, 0x00000003);
	WRITEU8(offset + 0x04932E8, 0x00000003);
	WRITEU8(offset + 0x0493364, 0x00000003);
	WRITEU8(offset + 0x049345C, 0x00000003);
	WRITEU8(offset + 0x04934D8, 0x00000003);
	WRITEU8(offset + 0x04935D0, 0x00000003);
	WRITEU8(offset + 0x049364C, 0x00000003);
	WRITEU8(offset + 0x04936C8, 0x00000003);
	WRITEU8(offset + 0x0493744, 0x00000003);
	WRITEU8(offset + 0x04937C0, 0x00000003);
	WRITEU8(offset + 0x049383C, 0x00000003);
	WRITEU8(offset + 0x04938B8, 0x00000003);
	WRITEU8(offset + 0x0493934, 0x00000003);
	WRITEU8(offset + 0x04939B0, 0x00000003);
	WRITEU8(offset + 0x0493A2C, 0x00000003);
	WRITEU8(offset + 0x0493B24, 0x00000003);
	WRITEU8(offset + 0x0493BA0, 0x00000003);
	WRITEU8(offset + 0x0493C1C, 0x00000003);
	WRITEU8(offset + 0x0493C98, 0x00000003);
	WRITEU8(offset + 0x0493D14, 0x00000003);
	WRITEU8(offset + 0x0493D90, 0x00000003);
	WRITEU8(offset + 0x0493E0C, 0x00000003);
	WRITEU8(offset + 0x0493E88, 0x00000003);
	WRITEU8(offset + 0x0493F04, 0x00000003);
	WRITEU8(offset + 0x0493F80, 0x00000003);
	WRITEU8(offset + 0x0493FFC, 0x00000003);
	WRITEU8(offset + 0x0494078, 0x00000003);
	WRITEU8(offset + 0x04940F4, 0x00000003);
	WRITEU8(offset + 0x0494170, 0x00000003);
	WRITEU8(offset + 0x04941EC, 0x00000003);
	WRITEU8(offset + 0x0494268, 0x00000003);
	WRITEU8(offset + 0x04942E4, 0x00000003);
	WRITEU8(offset + 0x0494360, 0x00000003);
	WRITEU8(offset + 0x04943DC, 0x00000003);
	WRITEU8(offset + 0x0494458, 0x00000003);
	WRITEU8(offset + 0x04944D4, 0x00000003);
	WRITEU8(offset + 0x0494550, 0x00000003);
	WRITEU8(offset + 0x04945CC, 0x00000003);
	WRITEU8(offset + 0x0494648, 0x00000003);
	WRITEU8(offset + 0x04946C4, 0x00000003);
	WRITEU8(offset + 0x0494740, 0x00000003);
	WRITEU8(offset + 0x04947BC, 0x00000003);
	WRITEU8(offset + 0x0494838, 0x00000003);
	WRITEU8(offset + 0x04948B4, 0x00000003);
	WRITEU8(offset + 0x0494930, 0x00000003);
	WRITEU8(offset + 0x04949AC, 0x00000003);
	WRITEU8(offset + 0x0494A28, 0x00000003);
	WRITEU8(offset + 0x0494AA4, 0x00000003);
	WRITEU8(offset + 0x0494B20, 0x00000003);
	WRITEU8(offset + 0x0494B9C, 0x00000003);
	WRITEU8(offset + 0x0494C18, 0x00000003);
	WRITEU8(offset + 0x0494C94, 0x00000003);
	WRITEU8(offset + 0x0494D10, 0x00000003);
	WRITEU8(offset + 0x0494D8C, 0x00000003);
	WRITEU8(offset + 0x0494E08, 0x00000003);
	WRITEU8(offset + 0x0494E84, 0x00000003);
	WRITEU8(offset + 0x0494F00, 0x00000003);
	WRITEU8(offset + 0x0494F7C, 0x00000003);
	WRITEU8(offset + 0x0494FF8, 0x00000003);
	WRITEU8(offset + 0x0495074, 0x00000003);
	WRITEU8(offset + 0x04950F0, 0x00000003);
	WRITEU8(offset + 0x049516C, 0x00000003);
	WRITEU8(offset + 0x04951E8, 0x00000003);
	WRITEU8(offset + 0x0495264, 0x00000003);
	WRITEU8(offset + 0x04952E0, 0x00000003);
	WRITEU8(offset + 0x049535C, 0x00000003);
	WRITEU8(offset + 0x04953D8, 0x00000003);
	WRITEU8(offset + 0x0495454, 0x00000003);
	WRITEU8(offset + 0x04954D0, 0x00000003);
	WRITEU8(offset + 0x049554C, 0x00000003);
	WRITEU8(offset + 0x04955C8, 0x00000003);
	WRITEU8(offset + 0x0495644, 0x00000003);
	WRITEU8(offset + 0x04956C0, 0x00000003);
	WRITEU8(offset + 0x049573C, 0x00000003);
	WRITEU8(offset + 0x04957B8, 0x00000003);
	WRITEU8(offset + 0x0495834, 0x00000003);
	WRITEU8(offset + 0x04958B0, 0x00000003);
	WRITEU8(offset + 0x049592C, 0x00000003);
	WRITEU8(offset + 0x04959A8, 0x00000003);
	WRITEU8(offset + 0x0495A24, 0x00000003);
	WRITEU8(offset + 0x0495AA0, 0x00000003);
	WRITEU8(offset + 0x0495B1C, 0x00000003);
	WRITEU8(offset + 0x0495B98, 0x00000003);
	WRITEU8(offset + 0x0495C14, 0x00000003);
	WRITEU8(offset + 0x0495C90, 0x00000003);
	WRITEU8(offset + 0x0495D0C, 0x00000003);
	WRITEU8(offset + 0x0495D88, 0x00000003);
	WRITEU8(offset + 0x0495E04, 0x00000003);
	WRITEU8(offset + 0x0495E80, 0x00000003);
	WRITEU8(offset + 0x0495EFC, 0x00000003);
	WRITEU8(offset + 0x0495F78, 0x00000003);
	WRITEU8(offset + 0x0495FF4, 0x00000003);
	WRITEU8(offset + 0x0496070, 0x00000003);
	WRITEU8(offset + 0x04960EC, 0x00000003);
	WRITEU8(offset + 0x0496168, 0x00000003);
	WRITEU8(offset + 0x04961E4, 0x00000003);
	WRITEU8(offset + 0x0496260, 0x00000003);
	WRITEU8(offset + 0x04962DC, 0x00000003);
	WRITEU8(offset + 0x0496358, 0x00000003);
	WRITEU8(offset + 0x04963D4, 0x00000003);
	WRITEU8(offset + 0x0496450, 0x00000003);
	WRITEU8(offset + 0x04964CC, 0x00000003);
	WRITEU8(offset + 0x0496548, 0x00000003);
	WRITEU8(offset + 0x04965C4, 0x00000003);
	WRITEU8(offset + 0x0496640, 0x00000003);
	WRITEU8(offset + 0x04966BC, 0x00000003);
	WRITEU8(offset + 0x0496738, 0x00000003);
	WRITEU8(offset + 0x04967B4, 0x00000003);
	WRITEU8(offset + 0x0496830, 0x00000003);
	WRITEU8(offset + 0x04968AC, 0x00000003);
	WRITEU8(offset + 0x0496928, 0x00000003);
	WRITEU8(offset + 0x04969A4, 0x00000003);
	WRITEU8(offset + 0x0496A20, 0x00000003);
	WRITEU8(offset + 0x0496A9C, 0x00000003);
	WRITEU8(offset + 0x0496B18, 0x00000003);
	WRITEU8(offset + 0x0496B94, 0x00000003);
	WRITEU8(offset + 0x0496C10, 0x00000003);
	WRITEU8(offset + 0x0496C8C, 0x00000003);
	WRITEU8(offset + 0x0496D08, 0x00000003);
	WRITEU8(offset + 0x0496D84, 0x00000003);
	WRITEU8(offset + 0x0496E00, 0x00000003);
	WRITEU8(offset + 0x0496E7C, 0x00000003);
	WRITEU8(offset + 0x0496EF8, 0x00000003);
	WRITEU8(offset + 0x0496F74, 0x00000003);
	WRITEU8(offset + 0x0496FF0, 0x00000003);
	WRITEU8(offset + 0x049706C, 0x00000003);
	WRITEU8(offset + 0x04970E8, 0x00000003);
	WRITEU8(offset + 0x0497164, 0x00000003);
	WRITEU8(offset + 0x04971E0, 0x00000003);
	WRITEU8(offset + 0x049725C, 0x00000003);
	WRITEU8(offset + 0x04972D8, 0x00000003);
	WRITEU8(offset + 0x0497354, 0x00000003);
	WRITEU8(offset + 0x04973D0, 0x00000003);
	WRITEU8(offset + 0x049744C, 0x00000003);
	WRITEU8(offset + 0x04974C8, 0x00000003);
	WRITEU8(offset + 0x0497544, 0x00000003);
	WRITEU8(offset + 0x04975C0, 0x00000003);
	WRITEU8(offset + 0x049763C, 0x00000003);
	WRITEU8(offset + 0x04976B8, 0x00000003);
	WRITEU8(offset + 0x0497734, 0x00000003);
	WRITEU8(offset + 0x04977B0, 0x00000003);
	WRITEU8(offset + 0x049782C, 0x00000003);
	WRITEU8(offset + 0x04978A8, 0x00000003);
	WRITEU8(offset + 0x0497924, 0x00000003);
	WRITEU8(offset + 0x04979A0, 0x00000003);
	WRITEU8(offset + 0x0497A1C, 0x00000003);
	WRITEU8(offset + 0x0497A98, 0x00000003);
	WRITEU8(offset + 0x0497B14, 0x00000003);
	WRITEU8(offset + 0x0497B90, 0x00000003);
	WRITEU8(offset + 0x0497C0C, 0x00000003);
	WRITEU8(offset + 0x0497C88, 0x00000003);
	WRITEU8(offset + 0x0497D04, 0x00000003);
	WRITEU8(offset + 0x0497D80, 0x00000003);
	WRITEU8(offset + 0x0497DFC, 0x00000003);
	WRITEU8(offset + 0x0497E78, 0x00000003);
	WRITEU8(offset + 0x0497EF4, 0x00000003);
	WRITEU8(offset + 0x0497F70, 0x00000003);
	WRITEU8(offset + 0x0497FEC, 0x00000003);
	WRITEU8(offset + 0x0498068, 0x00000003);
	WRITEU8(offset + 0x04980E4, 0x00000003);
	WRITEU8(offset + 0x0498160, 0x00000003);
	WRITEU8(offset + 0x04981DC, 0x00000003);
	WRITEU8(offset + 0x0498258, 0x00000003);
	WRITEU8(offset + 0x04982D4, 0x00000003);
	WRITEU8(offset + 0x0498350, 0x00000003);
	WRITEU8(offset + 0x04983CC, 0x00000003);
	WRITEU8(offset + 0x0498448, 0x00000003);
	WRITEU8(offset + 0x04984C4, 0x00000003);
	WRITEU8(offset + 0x0498540, 0x00000003);
	WRITEU8(offset + 0x04985BC, 0x00000003);
	WRITEU8(offset + 0x0498638, 0x00000003);
	WRITEU8(offset + 0x04986B4, 0x00000003);
	WRITEU8(offset + 0x0498730, 0x00000003);
	WRITEU8(offset + 0x04987AC, 0x00000003);
	WRITEU8(offset + 0x0498828, 0x00000003);
	WRITEU8(offset + 0x04988A4, 0x00000003);
	WRITEU8(offset + 0x0498920, 0x00000003);
	WRITEU8(offset + 0x049899C, 0x00000003);
	WRITEU8(offset + 0x0498A18, 0x00000003);
	WRITEU8(offset + 0x0498A94, 0x00000003);
	WRITEU8(offset + 0x0498B10, 0x00000003);
	WRITEU8(offset + 0x0498B8C, 0x00000003);
	WRITEU8(offset + 0x0498C08, 0x00000003);
	WRITEU8(offset + 0x0498C84, 0x00000003);
	WRITEU8(offset + 0x0498D00, 0x00000003);
	WRITEU8(offset + 0x0498D7C, 0x00000003);
	WRITEU8(offset + 0x0498DF8, 0x00000003);
	WRITEU8(offset + 0x0498E74, 0x00000003);
	WRITEU8(offset + 0x0498EF0, 0x00000003);
	WRITEU8(offset + 0x0498F6C, 0x00000003);
	WRITEU8(offset + 0x0498FE8, 0x00000003);
	WRITEU8(offset + 0x0499064, 0x00000003);
	WRITEU8(offset + 0x04990E0, 0x00000003);
	WRITEU8(offset + 0x049915C, 0x00000003);
	WRITEU8(offset + 0x04991D8, 0x00000003);
	WRITEU8(offset + 0x0499254, 0x00000003);
	WRITEU8(offset + 0x04992D0, 0x00000003);
	WRITEU8(offset + 0x049934C, 0x00000003);
	WRITEU8(offset + 0x04993C8, 0x00000003);
	WRITEU8(offset + 0x0499444, 0x00000003);
	WRITEU8(offset + 0x04994C0, 0x00000003);
	WRITEU8(offset + 0x049953C, 0x00000003);
	WRITEU8(offset + 0x04995B8, 0x00000003);
	offset = 0;
	data = 0;
}

void	Helicopter_Game_Max_Points(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x0859C68, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Wood_Ninja_Max_Points(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x0419110, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Disable_Wood_Ninja(void)
{
	offset = 0x00000000;
	WRITEU8(offset + 0x041901C, 0x00000000);
	offset = 0;
	data = 0;
}

void	Disable_Flappy_Copter(void)
{
	offset = 0x08000000;
	WRITEU8(offset + 0x0859C70, 0x00000000);
	offset = 0;
	data = 0;
}

void	Flappy_Copter___Mode_Switcher(void)
{
	if (is_pressed(0x00000010))
	{
		offset = 0x30000000;
		WRITEU8(offset + 0x0453CE4, 0x00000000);
		offset = 0;
		data = 0;
	}
	offset = 0x09000000;
	WRITEU8(offset + 0x0800E9C, 0x00000000);
	offset = 0;
	data = 0;
	if (is_pressed(0x00000020))
	{
		offset = 0x30000000;
		WRITEU8(offset + 0x0453CE4, 0x00000001);
		offset = 0;
		data = 0;
	}
	offset = 0x09000000;
	WRITEU8(offset + 0x0800E9C, 0x00000001);
	offset = 0;
	data = 0;
	if (is_pressed(0x00000080))
	{
		offset = 0x08000000;
		WRITEU8(offset + 0x0859C70, 0x00000001);
		offset = 0x30000000;
		WRITEU8(offset + 0x0453CE4, 0x00000001);
		offset = 0;
		data = 0;
	}
	offset = 0x09000000;
	offset = 0x09000000;
	WRITEU8(offset + 0x0800E9C, 0x00000001);
	offset = 0;
	data = 0;
}

void	Wood_Ninja___Mode_Switcher(void)
{
	if (is_pressed(0x00000020))
	{
		offset = 0x30000000;
		WRITEU8(offset + 0x0478A14, 0x00000001);
		offset = 0;
		data = 0;
	}
	offset = 0x30000000;
	if (is_pressed(0x00000010))
	{
		WRITEU8(offset + 0x0478A14, 0x00000000);
		offset = 0;
		data = 0;
	}
	offset = 0x30000000;
	if (is_pressed(0x00000080))
	{
		WRITEU8(offset + 0x0478A14, 0x00000001);
		offset = 0x00000000;
		WRITEU8(offset + 0x041901C, 0x00000001);
		offset = 0;
		data = 0;
	}
	if (is_pressed(0x00000040))
	{
		offset = 0x30000000;
		WRITEU8(offset + 0x0478A14, 0x00000001);
		WRITEU8(offset + 0x047B270, 0x00000001);
		WRITEU8(offset + 0x047D104, 0x00000001);
		offset = 0;
		data = 0;
	}
}

void	Modded_Flappy_Copter_Score_Adder(void)
{
	offset = 0x08000000;
	WRITEU8(offset + 0x0859C68, 0x000000FF);
	offset = 0;
	data = 0;
}

void	DDOS_Code_VOne(void)
{
	offset = 0x08000000;
	WRITEU8(offset + 0x0FF5C5C, 0x00000001);
	WRITEU8(offset + 0x0FF5C98, 0x00000001);
	WRITEU8(offset + 0x0FF5EC8, 0x00000001);
	WRITEU8(offset + 0x0FF5EF0, 0x00000001);
	offset = 0;
	data = 0;
}

void	DDOS_Code_VTwo(void)
{
	offset = 0x08000000;
	for (int i = 0; i < 0x00000123; i++)
	{
		WRITEU8(offset + 0x0FF5C5C, 0x00000001);
		WRITEU8(offset + 0x0FF5C98, 0x00000001);
		WRITEU8(offset + 0x0FF5EC8, 0x00000001);
		WRITEU8(offset + 0x0FF5EF0, 0x00000001);
	}
	for (int i = 0; i < 0x00000123; i++)
	{
		WRITEU8(offset + 0x0FF5C5C, 0x00000000);
		WRITEU8(offset + 0x0FF5C98, 0x00000000);
		WRITEU8(offset + 0x0FF5EC8, 0x00000000);
		WRITEU8(offset + 0x0FF5EF0, 0x00000000);
	}
}

void	Server_Crasher(void)
{
	if (is_pressed(0x00000800))
	{
		WRITEU32(offset + 0x8E928E8, 0xFFFFFFFF);
		WRITEU32(offset + 0x8E928EC, 0xFFFFFFFF);
		offset = 0;
		data = 0;
	}
}

void	Anti_Server_Locker(void)
{
	offset = 0x08000000;
	if (READU32(offset + 0x0FD8A90) < 0x00000007)
	{
		WRITEU8(offset + 0x0FD8A90, 0x00000007);
	}
	offset = 0x08000000;
	if (READU32(offset + 0x0FD8A90) < 0x00000008)
	{
		WRITEU8(offset + 0x0FD8A90, 0x00000007);
	}
	offset = 0x08000000;
	if (READU32(offset + 0x0FD8A92) < 0x00000008)
	{
		WRITEU8(offset + 0x0FD8A92, 0x00000008);
	}
	offset = 0x08000000;
	if (READU32(offset + 0x0FD8A92) < 0x00000008)
	{
		WRITEU8(offset + 0x0FD8A92, 0x00000008);
	}
}

void	Server_Locker(void)
{
	offset = 0x08000000;
	if (is_pressed(0x00000840))
	{
		WRITEU8(offset + 0x0FD8A90, 0x000000FF);
		WRITEU8(offset + 0x0FD8A92, 0x000000FF);
	}
	if (is_pressed(0x00000880))
	{
		WRITEU8(offset + 0x0FD8A90, 0x00000001);
		WRITEU8(offset + 0x0FD8A92, 0x00000008);
	}
	offset = 0;
	data = 0;
}

void	No_Disconnect(void)
{
	if (READU16(offset + 0x0418214) == 0x00000065)
	{
		WRITEU8(offset + 0x0418200, 0x00000059);
		WRITEU8(offset + 0x0418202, 0x0000006F);
		WRITEU8(offset + 0x0418204, 0x00000075);
		WRITEU8(offset + 0x0418206, 0x00000020);
		WRITEU8(offset + 0x0418208, 0x00000057);
		WRITEU8(offset + 0x041820A, 0x00000065);
		WRITEU8(offset + 0x041820C, 0x00000072);
		WRITEU8(offset + 0x041820E, 0x00000065);
		WRITEU8(offset + 0x0418210, 0x0000006E);
		WRITEU8(offset + 0x0418212, 0x00000027);
		WRITEU8(offset + 0x0418214, 0x00000074);
		WRITEU8(offset + 0x0418216, 0x00000020);
		WRITEU8(offset + 0x0418218, 0x00000044);
		WRITEU8(offset + 0x041821A, 0x00000069);
		WRITEU8(offset + 0x041821C, 0x00000073);
		WRITEU8(offset + 0x041821E, 0x00000063);
		WRITEU8(offset + 0x0418220, 0x0000006F);
		WRITEU8(offset + 0x0418222, 0x0000006E);
		WRITEU8(offset + 0x0418224, 0x0000006E);
		WRITEU8(offset + 0x0418226, 0x00000065);
		WRITEU8(offset + 0x0418228, 0x00000063);
		WRITEU8(offset + 0x041822A, 0x00000074);
		WRITEU8(offset + 0x041822C, 0x00000065);
		WRITEU8(offset + 0x041822E, 0x00000064);
		WRITEU8(offset + 0x0418230, 0x0000002E);
	}
}

void	Custom_IP_Address(void)
{
	WRITEU8(offset + 0x02C0E7B, 0x00000064);
}

void	Custom_Error_Message(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x03B65A8, 0x200A2E6F);
	WRITEU32(offset + 0x011B884, 0x63617243);
	WRITEU32(offset + 0x03B6598, 0x61657243);
	WRITEU32(offset + 0x03B65A4, 0x6B636172);
	WRITEU32(offset + 0x011B888, 0x00006F6B);
	WRITEU32(offset + 0x03B65A0, 0x43207942);
	WRITEU32(offset + 0x03B659C, 0x20646574);
	offset = 0;
	data = 0;
}

void	Mic_Always_On(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x080645C, 0x00004040);
	offset = 0;
	data = 0;
}

void	Max_Bandages_Used(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x080685C, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Max_Vehciles_Drove(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x0806858, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Max_Beds_Slept_In(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x0806860, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Max_KM_Travelled(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x042C690, 0x0098967F);
	offset = 0;
	data = 0;
}

void	Max_Zombie_Kills(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x0806850, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Max_Days_Survived(void)
{
	offset = 0x08000000;
	WRITEU32(offset + 0x0806848, 0x3B9AC9FF);
	offset = 0;
	data = 0;
}

void	Customizable_Quit_Menu(void)
{
	offset = 0x30000000;
	if (READU32(offset + 0x047FDB4) == 0x00FFFF01)
	{
		WRITEU32(offset + 0x0380554, 0x42585266);
	}
	offset = 0x30000000;
	if (READU32(offset + 0x047FDB4) == 0x00FFFF00)
	{
		WRITEU32(offset + 0x0380554, 0xFFFFFFFF);
	}
}

void	Denser_Fogg(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x0418730, 0x00000000);
	offset = 0;
	data = 0;
}

void	Murky_Sky(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x0418730, 0xFFFFFFFF);
	offset = 0;
	data = 0;
}

void	RTX(void)
{
	WRITEU32(offset + 0x0418730, 0x3F699614);
}

void	Increase_Fogg_Thickness(void)
{
	WRITEU32(offset + 0x0418730, 0x4C800000);
}

void	Clear_All_Fog_On_Map(void)
{
	offset = 0x00000000;
	WRITEU32(offset + 0x0418730, 0x6FFFFFFF);
	offset = 0;
	data = 0;
}

void	Text_Messaging_Custom_Colour(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x04197E8, 0x77777000);
	WRITEU32(offset + 0x041960C, 0x77777000);
	WRITEU32(offset + 0x04192CC, 0xFFFFF000);
	WRITEU32(offset + 0x0419A88, 0xFFFFFFFF);
	WRITEU32(offset + 0x0418CC0, 0xFFFFF000);
	WRITEU32(offset + 0x0418D60, 0xFFFFF000);
	WRITEU32(offset + 0x0419040, 0xFFFFF000);
	WRITEU32(offset + 0x0419BB0, 0xFFFFF000);
	WRITEU32(offset + 0x0000000, 0x00000000);
	WRITEU32(offset + 0x0401250, 0x77777000);
	WRITEU32(offset + 0x0401430, 0x77777000);
	WRITEU32(offset + 0x0401620, 0xAAAAA000);
	WRITEU32(offset + 0x04016D8, 0x77777000);
	WRITEU32(offset + 0x04016DC, 0x77777000);
	WRITEU32(offset + 0x0401720, 0x77777000);
	WRITEU32(offset + 0x0400970, 0x77777000);
	WRITEU32(offset + 0x0400B50, 0x77777000);
	WRITEU32(offset + 0x0400DDC, 0x77777000);
	WRITEU32(offset + 0x0400FBC, 0x77777000);
}

void	People_Menu_UI_Colours(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x03CDDA0, 0x77777000);
	WRITEU32(offset + 0x03CE034, 0x77777000);
	WRITEU32(offset + 0x03CE214, 0xFFFFF000);
	WRITEU32(offset + 0x03CE3F4, 0xFFFFF000);
	WRITEU32(offset + 0x03CE5D4, 0xFFFFF000);
	WRITEU32(offset + 0x03CE7B4, 0xFFFFF000);
	WRITEU32(offset + 0x03CE994, 0xFFFFF000);
	WRITEU32(offset + 0x03CEB74, 0xFFFFF000);
	WRITEU32(offset + 0x03CED54, 0xFFFFF000);
	WRITEU32(offset + 0x03CEF34, 0xFFFFF000);
	WRITEU32(offset + 0x03CF124, 0xFFFFF000);
}

void	Data_Select_UI_Custom_Colours(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x0384E50, 0xFFFFF000);
	WRITEU32(offset + 0x0382C18, 0xFFFFF000);
	WRITEU32(offset + 0x0387090, 0xFFFFF000);
	WRITEU32(offset + 0x03CAE10, 0xFFFFF000);
	WRITEU32(offset + 0x03CAED0, 0xFFFFF000);
	WRITEU32(offset + 0x03CCDD0, 0xFFFFF000);
	WRITEU32(offset + 0x03CBDF1, 0xFFFFF000);
}

void	Cleaner_Action_UI(void)
{
	offset = 0x30000000;
	WRITEU32(offset + 0x02FA270, 0x00000000);
	WRITEU32(offset + 0x02FA460, 0xFFFFFF00);
	offset = 0;
	data = 0;
	offset = 0x30000000;
	WRITEU32(offset + 0x02F89F4, 0x00000000);
	WRITEU32(offset + 0x02F8BE4, 0xFFFFFF00);
	WRITEU32(offset + 0x02F9590, 0xFFFFFF00);
	WRITEU32(offset + 0x02F9F30, 0xFFFFFF00);
	offset = 0;
	data = 0;
	offset = 0x30000000;
	WRITEU32(offset + 0x03006C0, 0x00000000);
	WRITEU32(offset + 0x02E26A0, 0x00000000);
	WRITEU32(offset + 0x03008B0, 0xFFFFFF00);
	WRITEU32(offset + 0x02E293C, 0xFFFFFF00);
	offset = 0;
	data = 0;
}

