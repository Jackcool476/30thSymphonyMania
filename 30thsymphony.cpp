#include "pch.h"
using namespace std;
using namespace filesystem;

extern "C"
{
	__declspec(dllexport) void Init(const char *path, const HelperFunctions &helperFunctions)
	{
		const IniFile *config = new IniFile(string(path) + "/config.ini");

		// Green Hill
		if (config->getInt("Green Hill", "gh1", 1) == 1)
		{
			copy_file(string(path) + "/Music/GreenHill.brstm", string(path) + "/Data/Music/GreenHill1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 2)
		{
			copy_file(string(path) + "/Music/GreenHillEX.brstm", string(path) + "/Data/Music/GreenHill1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/GreenHill1.brstm").c_str());
		}

		if (config->getInt("Green Hill", "gh2", 2) == 1)
		{
			copy_file(string(path) + "/Music/GreenHill.brstm", string(path) + "/Data/Music/GreenHill2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 2)
		{
			copy_file(string(path) + "/Music/GreenHillEX.brstm", string(path) + "/Data/Music/GreenHill2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/GreenHill2.brstm").c_str());
		}

		// Extra Songs
		if (config->getBool("Extra", "introhp", true))
		{
			copy_file(string(path) + "/Music/IntroHP.ogg", string(path) + "/Data/Music/IntroHP.ogg", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/IntroHP.ogg").c_str());
		}

		if (config->getBool("Extra", "introtl", true))
		{
			copy_file(string(path) + "/Music/IntroTee.ogg", string(path) + "/Data/Music/IntroTee.ogg", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/IntroTee.ogg").c_str());
		}

		if (config->getBool("Extra", "title", true))
		{
			copy_file(string(path) + "/Music/TitleScreen.ogg", string(path) + "/Data/Music/TitleScreen.ogg", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/TitleScreen.ogg").c_str());
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}