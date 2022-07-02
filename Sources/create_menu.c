#include "cheats.h"

#define ENTRY_COUNT 300

typedef struct s_menu
{
	int         count;
	int         status;
	u32         f[ENTRY_COUNT];
	u32         s[ENTRY_COUNT];
	int         a[ENTRY_COUNT];
	const char  *t[ENTRY_COUNT];
	const char  *n[ENTRY_COUNT];
	void        (*fp[ENTRY_COUNT])();
}             t_menu;


typedef void    (*FuncPointer)(void);
extern t_menu menu;


void    new_super_unselectable_entry(char *str, FuncPointer function)
{
	int index;

	index = menu.count;
	if (index >= 300)
		return;
	new_unselectable_entry(str);
	menu.f[index] |= BIT(0) | BIT(1);
	menu.fp[index] = function;
}

void with_note_common(const char *name, const char *note, void (*cheatfunction)(void), int type)
{
	int     index;

	if (type == 0)
		index = new_entry((char *)name, cheatfunction);
	else if (type == 1)
		index = new_radio_entry((char *)name, cheatfunction);
	else if (type == 2)
		index = new_spoiler((char *)name);
	else return;
	set_note(note, index);
}

void new_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
	with_note_common(name, note, cheatfunction, 0);
}

void new_radio_entry_with_note(const char *name, const char *note, void (*cheatfunction)(void))
{
	with_note_common(name, note, cheatfunction, 1);
}

void new_spoiler_with_note(const char *name, const char *note)
{
	with_note_common(name, note, NULL, 2);
}

char	*builder_name = "Cracko298";


void	my_menus(void)
{	
	new_spoiler("Status Codes");
		new_entry("All Status Max", All_Status_Max);
		new_entry("Max Health", Max_Health);
		new_entry("Max Food", Max_Food);
		new_entry("Max Water", Max_Water);
		new_entry("Max Battery", Max_Battery);
		new_entry("Always Day v1", Always_Day_vOne);
		new_entry("Always Day v2", Always_Day_vTwo);
		new_entry("Always Day v3", Always_Day_vThree);
		new_entry("Always Night v1", Always_Night_vOne);
		new_entry("Max Weather", Max_Weather);
		new_entry("Gun Anti-Crash", Gun_Anti_Crash);
		new_entry("See All Names", See_All_Names);
		new_entry("See Through Walls", See_Through_Walls);
		new_entry("Always Refresh Server Button", Always_Refresh_Server_Button);
		new_entry("Custom Status Colors", Custom_Status_Colors);
	exit_spoiler();

	new_spoiler("Drop Codes");
		new_entry("Snow Plough Drop", Snow_Plough_Drop);
		new_entry("Snowcat Drop", Snowcat_Drop);
		new_entry("Helicopter Drop", Helicopter_Drop);
		new_entry("Snowmobile Drop", Snowmobile_Drop);
		new_entry("Dog Sled Drop", Dog_Sled_Drop);
		new_entry("Big Boat Drop", Big_Boat_Drop);
		new_entry("Small Boat Drop", Small_Boat_Drop);
		new_entry("Normal Door Drop", Normal_Door_Drop);
		new_entry("Steel Door Drop", Steel_Door_Drop);
	exit_spoiler();

	new_spoiler("Weapon Codes");
		new_entry("No Reload", No_Reload);
		new_entry("Rapid Fire", Rapid_Fire);
		new_entry("No Recoil", No_Recoil);
		new_entry("All Ammo Generator", All_Ammo_Generator);
	exit_spoiler();

	new_spoiler("Chat Codes");
		new_entry("Chat Spammer", Chat_Spammer);
		new_entry("Uppercase Lowercase Keyboard", Uppercase_Lowercase_Keyboard);
		new_entry("Special Symbol Keyboard", Special_Symbol_Keyboard);
	exit_spoiler();

	new_spoiler("Name/ID Codes");

		new_spoiler("Name Codes");
			new_entry("Online Name  Cracko298", Online_Name__CrackoTwoNineEight);
			new_entry("Online Name  OWL GBC  ", Online_Name__OWL_GBC__);
			new_entry("Online Name  Gage C NC", Online_Name__Gage_C_NC);
			new_entry("Online Name  goldfishRX", Online_Name__goldfishRX);
			new_entry("Online Name  VIRUS_K1NG", Online_Name__VIRUS_KOneNG);
			new_entry("Online Name  TIME BOMB ", Online_Name__TIME_BOMB_);
			new_entry("Online Name  Zamasu EXE", Online_Name__Zamasu_EXE);
			new_entry("Online Name  Hunter CAT", Online_Name__Hunter_CAT);
			new_entry("Online Name  GamerX CAT", Online_Name__GamerX_CAT);
			new_entry("Online Name  Tumpet2019", Online_Name__TumpetTwoZeroOneNine);
			new_entry("Online Name  Spring 512", Online_Name__Spring_FiveOneTwo);
			new_entry("Online Name  ImNotNoxii", Online_Name__ImNotNoxii);
			new_entry("Online Name    Yunix  ", Online_Name____Yunix__);
		exit_spoiler();

		new_entry("Online ID  0", Online_ID__Zero);
		new_entry("Offline ID  dead00face0", Offline_ID__deadZeroZerofaceZero);
		new_entry("Offline ID  dead", Offline_ID__dead);
		new_entry("Offline ID  decaf7dead7faced", Offline_ID__decafSevendeadSevenfaced);
		new_entry("Offline ID  7dead7faded7bed7", Offline_ID__SevendeadSevenfadedSevenbedSeven);
	exit_spoiler();

	new_spoiler("Movement Codes");
		
		new_spoiler("Teleportation Codes");
			new_entry("Teleport To The Oil-Rig", Teleport_To_The_Oil_Rig);
			new_entry("Teleport To The Submarine", Teleport_To_The_Submarine);
			new_entry("Teleporter", Teleporter);
			new_entry("Teleport To Greybase", Teleport_To_Greybase);
		exit_spoiler();
		
		new_entry("MoonJump", MoonJump);
		new_entry("Walk Through Walls", Walk_Through_Walls);
		new_entry("Car Speed Hack", Car_Speed_Hack);
		new_entry("No Fuel Needed", No_Fuel_Needed);
		new_entry("No Engine Parts Needed", No_Engine_Parts_Needed);
	exit_spoiler();


	new_spoiler("Minigame Codes");
		new_entry("Helicopter Game Max Points", Helicopter_Game_Max_Points);
		new_entry("Wood Ninja Max Points", Wood_Ninja_Max_Points);
		new_entry("Disable Wood Ninja", Disable_Wood_Ninja);
		new_entry("Disable Flappy Copter", Disable_Flappy_Copter);
		new_entry("Flappy Copter - Mode Switcher", Flappy_Copter___Mode_Switcher);
		new_entry("Wood Ninja - Mode Switcher", Wood_Ninja___Mode_Switcher);
		new_entry("Modded Flappy-Copter Score Adder", Modded_Flappy_Copter_Score_Adder);
	exit_spoiler();

	new_spoiler("Server Codes");

		new_spoiler("Malicious Codes");
			new_entry("DDOS Code V1", DDOS_Code_VOne);
			new_entry("DDOS Code V2", DDOS_Code_VTwo);
			new_entry("Server Crasher", Server_Crasher);
		exit_spoiler();

		new_entry("Anti Server Locker", Anti_Server_Locker);
		new_entry("Server Locker", Server_Locker);
		new_entry("No Disconnect", No_Disconnect);
		new_entry("Custom IP-Address", Custom_IP_Address);
		new_entry("Custom Error Message", Custom_Error_Message);
		new_entry("Mic Always On", Mic_Always_On);
	exit_spoiler();

	new_spoiler("Max Fitness Codes");
		new_entry("Max Bandages Used", Max_Bandages_Used);
		new_entry("Max Vehciles Drove", Max_Vehciles_Drove);
		new_entry("Max Beds Slept In", Max_Beds_Slept_In);
		new_entry("Max KM Travelled", Max_KM_Travelled);
		new_entry("Max Zombie Kills", Max_Zombie_Kills);
		new_entry("Max Days Survived", Max_Days_Survived);
	exit_spoiler();

	new_spoiler("Look Codes");
		
		new_spoiler("In-Game Looks");
			new_entry("Customizable Quit Menu", Customizable_Quit_Menu);
			new_entry("Denser Fogg", Denser_Fogg);
			new_entry("Murky Sky", Murky_Sky);
			new_entry("RTX", RTX);
			new_entry("Increase Fogg Thickness", Increase_Fogg_Thickness);
			new_entry("Clear All Fog On Map", Clear_All_Fog_On_Map);
		exit_spoiler();

		new_entry("Text Messaging Custom Color", Text_Messaging_Custom_Colour);
		new_entry("People Menu UI Colours", People_Menu_UI_Colours);
		new_entry("Data Select UI Custom Colours", Data_Select_UI_Custom_Colours);
		new_entry("Cleaner Action UI", Cleaner_Action_UI);
	exit_spoiler();

	new_spoiler("Credits");
		new_entry("Created by: Cracko298", Offline_ID__dead);
	exit_spoiler();

}
