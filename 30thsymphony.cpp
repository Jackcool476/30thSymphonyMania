#include "pch.h"
using namespace std;
using namespace filesystem;

extern "C"
{
	__declspec(dllexport) void Init(const char* path, const HelperFunctions & helperFunctions)
	{
		const IniFile *config = new IniFile(string(path) + "/config.ini");

		// Green Hill
		remove((string(path) + "/Data/Music/GreenHill1.brstm").c_str());
		if (config->getInt("Green Hill", "gh1", 1) == 1)
		{
			copy_file(string(path) + "/Music/GreenHill.brstm", string(path) + "/Data/Music/GreenHill1.brstm");
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 2)
		{
			copy_file(string(path) + "/Music/GreenHillEX.brstm", string(path) + "/Data/Music/GreenHill1.brstm");
		}

		remove((string(path) + "/Data/Music/GreenHill2.brstm").c_str());
		if (config->getInt("Green Hill", "gh2", 2) == 1)
		{
			copy_file(string(path) + "/Music/GreenHill.brstm", string(path) + "/Data/Music/GreenHill2.brstm");
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 2)
		{
			copy_file(string(path) + "/Music/GreenHillEX.brstm", string(path) + "/Data/Music/GreenHill2.brstm");
		}

		// Extra Songs
		remove((string(path) + "/Data/Music/IntroHP.ogg").c_str());
		if (config->getBool("Extra", "introhp", true))
		{
			copy_file(string(path) + "/Music/IntroHP.ogg", string(path) + "/Data/Music/IntroHP.ogg");
		}

		remove((string(path) + "/Data/Music/IntroTee.ogg").c_str());
		if (config->getBool("Extra", "introtl", true))
		{
			copy_file(string(path) + "/Music/IntroTee.ogg", string(path) + "/Data/Music/IntroTee.ogg");
		}

		remove((string(path) + "/Data/Music/TitleScreen.ogg").c_str());
		if (config->getBool("Extra", "title", true))
		{
			copy_file(string(path) + "/Music/TitleScreen.ogg", string(path) + "/Data/Music/TitleScreen.ogg");
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}