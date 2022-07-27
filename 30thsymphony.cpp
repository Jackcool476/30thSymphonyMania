#include "pch.h"

extern "C"
{
	__declspec(dllexport) const HelperFunctions* MML_HelperFunctions = nullptr;
	__declspec(dllexport) void Init(const char *path)
	{
		std::string modpath = "mods/Sonic 30th Symphony Songs/Mods/Sonic 30th Symphony Songs";

		int gh1 = 1;
		int gh2 = 2;
		bool introhp = true;
		bool introtl = true;
		bool title = true;

		const IniFile *config = new IniFile(std::string(path) + "/config.ini");
		gh1 = config->getInt("Green Hill", "gh1", 1);
		gh2 = config->getInt("Green Hill", "gh2", 2);
		introhp = config->getBool("Extra", "introhp", true);
		introtl = config->getBool("Extra", "introtl", true);
		title = config->getBool("Extra", "title", true);

		// Green Hill
		if (gh1 == 1)
		{
			MML_HelperFunctions->AddReplaceFile("mods/Sonic 30th Symphony Songs/Data/Music/GreenHill1.brstm", "mods/Sonic 30th Symphony Songs/Music/GreenHill.brstm");
		}
		else if (gh1 == 2)
		{
			MML_HelperFunctions->AddReplaceFile("mods/Sonic 30th Symphony Songs/Data/Music/GreenHill1.brstm", "mods/Sonic 30th Symphony Songs/Music/GreenHillEX.brstm");
		}
		else {
			remove("mods/Sonic 30th Symphony Songs/Data/Music/GreenHill1.brstm");
		}
		if (gh2 == 1)
		{
			MML_HelperFunctions->AddReplaceFile("mods/Sonic 30th Symphony Songs/Data/Music/GreenHill2.brstm", "mods/Sonic 30th Symphony Songs/Music/GreenHill.brstm");
		}
		else if (gh2 == 2)
		{
			MML_HelperFunctions->AddReplaceFile("mods/Sonic 30th Symphony Songs/Data/Music/GreenHill2.brstm", "mods/Sonic 30th Symphony Songs/Music/GreenHillEX.brstm");
		}
		else {
			remove("mods/Sonic 30th Symphony Songs/Data/Music/GreenHill2.brstm");
		}

		// Extra
		if (introhp)
		{
			MML_HelperFunctions->AddReplaceFile("mods/Sonic 30th Symphony Songs/Data/Music/IntroHP.ogg", "mods/Sonic 30th Symphony Songs/Music/IntroHP.ogg");
		}
		else {
			remove("mods/Sonic 30th Symphony Songs/Data/Music/IntroHP.ogg");
		}
		if (introtl)
		{
			MML_HelperFunctions->AddReplaceFile("mods/Sonic 30th Symphony Songs/Data/Music/IntroTee.ogg", "mods/Sonic 30th Symphony Songs/Music/IntroTee.ogg");
		}
		else {
			remove("mods/Sonic 30th Symphony Songs/Data/Music/IntroTee.ogg");
		}
		if (title)
		{
			MML_HelperFunctions->AddReplaceFile("mods/Sonic 30th Symphony Songs/Data/Music/TitleScreen.ogg", "mods/Sonic 30th Symphony Songs/Music/TitleScreen.ogg");
		}
		else {
			remove("mods/Sonic 30th Symphony Songs/Data/Music/TitleScreen.ogg");
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}