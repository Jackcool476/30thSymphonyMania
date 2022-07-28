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

		// Green Hill
		remove((std::string(path) + "Data/Music/GreenHill1.brstm").c_str());
		if (gh1 == 1)
		{
			std::filesystem::copy_file(std::string(path) + "Music/GreenHill.brstm", std::string(path) + "Data/Music/GreenHill1.brstm");
		}
		else if (gh1 == 2)
		{
			std::filesystem::copy_file(std::string(path) + "Music/GreenHillEX.brstm", std::string(path) + "Data/Music/GreenHill1.brstm");
		}
		remove((std::string(path) + "Data/Music/GreenHill2.brstm").c_str());
		if (gh2 == 1)
		{
			std::filesystem::copy_file(std::string(path) + "Music/GreenHill.brstm", std::string(path) + "Data/Music/GreenHill2.brstm");
		}
		else if (gh2 == 2)
		{
			std::filesystem::copy_file(std::string(path) + "Music/GreenHillEX.brstm", std::string(path) + "Data/Music/GreenHill2.brstm");
		}

		// Extra
		remove((std::string(path) + "Data/Music/IntroHP.ogg").c_str());
		if (introhp)
		{
			std::filesystem::copy_file(std::string(path) + "Music/IntroHP.ogg", std::string(path) + "Data/Music/IntroHP.ogg");
		}
		remove((std::string(path) + "Data/Music/IntroTee.ogg").c_str());
		if (introtl)
		{
			std::filesystem::copy_file(std::string(path) + "Music/IntroTee.ogg", std::string(path) + "Data/Music/IntroTee.ogg");
		}
		remove((std::string(path) + "Data/Music/TitleScreen.ogg").c_str());
		if (title)
		{
			std::filesystem::copy_file(std::string(path) + "Music/TitleScreen.ogg", std::string(path) + "Data/Music/TitleScreen.ogg");
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}