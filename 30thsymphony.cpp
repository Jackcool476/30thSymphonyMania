#include "pch.h"
using std::string;
using namespace std::filesystem;

extern "C"
{
	__declspec(dllexport) void Init(const char *path, HelperFunctions helperFunctions)
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

		// Studiopolis
		if (config->getInt("Studiopolis", "s1", 1) == 1)
		{
			copy_file(string(path) + "/Music/Studiopolis.brstm", string(path) + "/Data/Music/Studiopolis1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 2)
		{
			copy_file(string(path) + "/Music/CasinoNight.brstm", string(path) + "/Data/Music/Studiopolis1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 3)
		{
			copy_file(string(path) + "/Music/CityEscape.brstm", string(path) + "/Data/Music/Studiopolis1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 4)
		{
			copy_file(string(path) + "/Music/RooftopRun.brstm", string(path) + "/Data/Music/Studiopolis1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/Studiopolis1.brstm").c_str());
		}
		if (config->getInt("Studiopolis", "s2", 1) == 1)
		{
			copy_file(string(path) + "/Music/Studiopolis.brstm", string(path) + "/Data/Music/Studiopolis2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 2)
		{
			copy_file(string(path) + "/Music/CasinoNight.brstm", string(path) + "/Data/Music/Studiopolis2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 3)
		{
			copy_file(string(path) + "/Music/CityEscape.brstm", string(path) + "/Data/Music/Studiopolis2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 4)
		{
			copy_file(string(path) + "/Music/RooftopRun.brstm", string(path) + "/Data/Music/Studiopolis2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/Studiopolis2.brstm").c_str());
		}

		// Angel Island
		if (config->getBool("Press Garden", "pg1", true))
		{
			copy_file(string(path) + "/Music/PressGarden.brstm", string(path) + "/Data/Music/PulpSolstice1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/PressGarden1.brstm").c_str());
		}
		if (config->getBool("Press Garden", "pg2", true))
		{
			copy_file(string(path) + "/Music/PressGarden.brstm", string(path) + "/Data/Music/PulpSolstice2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/PressGarden2.brstm").c_str());
		}

		// Titanic Monarch
		if (config->getInt("Titanic Monarch", "tm1", 1) == 1)
		{
			copy_file(string(path) + "/Music/TitanicMonarch.brstm", string(path) + "/Data/Music/TitanicMonarch1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Titanic Monarch", "tm1", 1) == 2)
		{
			copy_file(string(path) + "/Music/SkySanctuary.brstm", string(path) + "/Data/Music/TitanicMonarch1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/TitanicMonarch1.brstm").c_str());
		}
		if (config->getInt("Titanic Monarch", "tm2", 1) == 1)
		{
			copy_file(string(path) + "/Music/TitanicMonarch.brstm", string(path) + "/Data/Music/TitanicMonarch2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else if (config->getInt("Titanic Monarch", "tm2", 1) == 2)
		{
			copy_file(string(path) + "/Music/SkySanctuary.brstm", string(path) + "/Data/Music/TitanicMonarch2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/TitanicMonarch2.brstm").c_str());
		}

		// Extra Songs
		if (config->getBool("Extra", "ss1", false))
		{
			copy_file(string(path) + "/Music/SonicBoom.brstm", string(path) + "/Data/Music/StardustSpeedway1.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/StardustSpeedway1.brstm").c_str());
		}
		if (config->getBool("Extra", "ss2", false))
		{
			copy_file(string(path) + "/Music/SonicBoom.brstm", string(path) + "/Data/Music/StardustSpeedway2.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/StardustSpeedway2.brstm").c_str());
		}

		if (config->getBool("Extra", "ufo", false))
		{
			copy_file(string(path) + "/Music/Sunshine.brstm", string(path) + "/Data/Music/UFOSpecial.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/UFOSpecial.brstm").c_str());
		}

		if (config->getBool("Extra", "boss", false))
		{
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/BossEggman1.brstm", std::filesystem::copy_options::overwrite_existing);
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/BossEggman2.brstm", std::filesystem::copy_options::overwrite_existing);
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/BossFinal.brstm", std::filesystem::copy_options::overwrite_existing);
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/BossHBH.brstm", std::filesystem::copy_options::overwrite_existing);
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/BossMini.brstm", std::filesystem::copy_options::overwrite_existing);
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/BossPuyo.brstm", std::filesystem::copy_options::overwrite_existing);
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/EggReverie.brstm", std::filesystem::copy_options::overwrite_existing);
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/EggReveriePinch.brstm", std::filesystem::copy_options::overwrite_existing);
			copy_file(string(path) + "/Music/Sonic1Boss.brstm", string(path) + "/Data/Music/MetalSonic.brstm", std::filesystem::copy_options::overwrite_existing);
		}
		else
		{
			remove((string(path) + "/Data/Music/BossEggman1.brstm").c_str());
			remove((string(path) + "/Data/Music/BossEggman2.brstm").c_str());
			remove((string(path) + "/Data/Music/BossFinal.brstm").c_str());
			remove((string(path) + "/Data/Music/BossHBH.brstm").c_str());
			remove((string(path) + "/Data/Music/BossMini.brstm").c_str());
			remove((string(path) + "/Data/Music/BossPuyo.brstm").c_str());
			remove((string(path) + "/Data/Music/EggReverie.brstm").c_str());
			remove((string(path) + "/Data/Music/EggReveriePinch.brstm").c_str());
			remove((string(path) + "/Data/Music/MetalSonic.brstm").c_str());
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
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}