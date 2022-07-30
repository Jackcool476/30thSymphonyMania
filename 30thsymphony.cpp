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
		else if (config->getInt("Green Hill", "gh1", 1) == 3)
		{
			copy_file(string(path) + "/Music/AngelIsland.brstm", string(path) + "/Data/Music/GreenHill1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 4)
		{
			copy_file(string(path) + "/Music/EmeraldHill.brstm", string(path) + "/Data/Music/GreenHill1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 5)
		{
			copy_file(string(path) + "/Music/LostValley.brstm", string(path) + "/Data/Music/GreenHill1.brstm", std::filesystem::copy_options::overwrite_existing);
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
		else if (config->getInt("Green Hill", "gh2", 2) == 3)
		{
			copy_file(string(path) + "/Music/AngelIsland.brstm", string(path) + "/Data/Music/GreenHill2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 4)
		{
			copy_file(string(path) + "/Music/EmeraldHill.brstm", string(path) + "/Data/Music/GreenHill2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 1) == 5)
		{
			copy_file(string(path) + "/Music/LostValley.brstm", string(path) + "/Data/Music/GreenHill2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/GreenHill2.brstm").c_str());
		}

		// Chemical Plant
		if (config->getBool("Chemical Plant", "cp1", true))
		{
			copy_file(string(path) + "/Music/ChemicalPlant.brstm", string(path) + "/Data/Music/ChemicalPlant1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/ChemicalPlant1.brstm").c_str());
		}
		if (config->getBool("Chemical Plant", "cp2", true))
		{
			copy_file(string(path) + "/Music/ChemicalPlant.brstm", string(path) + "/Data/Music/ChemicalPlant2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/ChemicalPlant2.brstm").c_str());
		}

		// Angel Island
		if (config->getBool("Angel Island", "ai1", true))
		{
			copy_file(string(path) + "/Music/AngelIslandShort.ogg", string(path) + "/Data/Music/AngelIsland.ogg", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/AngelIsland.ogg").c_str());
		}
		if (config->getBool("Angel Island", "ai2", true))
		{
			copy_file(string(path) + "/Music/AngelIsland.brstm", string(path) + "/Data/Music/AngelIsland2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/AngelIsland2.brstm").c_str());
		}

		// Titanic Monarch
		if (config->getInt("Titanic Monarch", "tm1", 0) == 2)
		{
			copy_file(string(path) + "/Music/SkySanctuary.brstm", string(path) + "/Data/Music/TitanicMonarch1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/TitanicMonarch1.brstm").c_str());
		}
		if (config->getInt("Titanic Monarch", "tm2", 0) == 2)
		{
			copy_file(string(path) + "/Music/SkySanctuary.brstm", string(path) + "/Data/Music/TitanicMonarch2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/TitanicMonarch2.brstm").c_str());
		}

		// Other Songs
		if (config->getBool("Other", "title", true))
		{
			copy_file(string(path) + "/Music/TitleScreen.ogg", string(path) + "/Data/Music/TitleScreen.ogg", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/TitleScreen.ogg").c_str());
		}
		if (config->getBool("Other", "plus", true))
		{
			copy_file(string(path) + "/Music/Plus.wav", string(path) + "/Data/SoundFX/Stage/Plus.wav", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/SoundFX/Stage/Plus.wav").c_str());
		}

		if (config->getBool("Other", "introhp", true))
		{
			copy_file(string(path) + "/Music/IntroHP.ogg", string(path) + "/Data/Music/IntroHP.ogg", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/IntroHP.ogg").c_str());
		}
		if (config->getBool("Other", "introtl", true))
		{
			copy_file(string(path) + "/Music/IntroTee.ogg", string(path) + "/Data/Music/IntroTee.ogg", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/IntroTee.ogg").c_str());
		}

		// Extra Songs
		if (config->getInt("Extra", "ss1", 0) == 1)
		{
			copy_file(string(path) + "/Music/SonicBoom.brstm", string(path) + "/Data/Music/StardustSpeedway1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Extra", "ss1", 0) == 2)
		{
			copy_file(string(path) + "/Music/CityEscape.brstm", string(path) + "/Data/Music/StardustSpeedway1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/StardustSpeedway1.brstm").c_str());
		}
		if (config->getInt("Extra", "ss2", 0) == 1)
		{
			copy_file(string(path) + "/Music/SonicBoom.brstm", string(path) + "/Data/Music/StardustSpeedway2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Extra", "ss2", 0) == 2)
		{
			copy_file(string(path) + "/Music/CityEscape.brstm", string(path) + "/Data/Music/StardustSpeedway2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/StardustSpeedway2.brstm").c_str());
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}