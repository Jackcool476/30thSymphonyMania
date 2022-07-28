#include "pch.h"

extern "C"
{
	__declspec(dllexport) void Init(const char* path, const HelperFunctions & helperFunctions)
	{
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

		std::string gh = (std::string(path) + "/Music/GreenHill.brstm");
		std::string ghex = (std::string(path) + "/Music/GreenHillEX.brstm");
		std::string inthp = (std::string(path) + "/Music/IntroHP.ogg");
		std::string inttl = (std::string(path) + "/Music/IntroTee.ogg");
		std::string tile = (std::string(path) + "/Music/TitleScreen.ogg");

		// Green Hill
		if (gh1 == 1)
		{
			helperFunctions.AddReplaceFile("Data/Music/GreenHill1.brstm", (gh).c_str());
		}
		else if (gh1 == 2)
		{
			helperFunctions.AddReplaceFile("Data/Music/GreenHill1.brstm", (ghex).c_str());
		}
		if (gh2 == 1)
		{
			helperFunctions.AddReplaceFile("Data/Music/GreenHill2.brstm", (gh).c_str());
		}
		else if (gh2 == 2)
		{
			helperFunctions.AddReplaceFile("Data/Music/GreenHill2.brstm", (ghex).c_str());
		}

		// Extra
		if (introhp)
		{
			helperFunctions.AddReplaceFile("Data/Music/IntroHP.ogg", (inthp).c_str());
		}
		if (introtl)
		{
			helperFunctions.AddReplaceFile("Data/Music/IntroTee.ogg", (inttl).c_str());
		}
		if (title)
		{
			helperFunctions.AddReplaceFile("Data/Music/TitleScreen.ogg", (tile).c_str());
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}