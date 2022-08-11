#include "pch.h"
using std::string;
using namespace std::filesystem;

extern "C"
{
	__declspec(dllexport) void Init(const char *path)
	{
		const IniFile *config = new IniFile(string(path) + "/config.ini");
		string data = path + string("/Data/Music/");
		string music = path + string("/Music/");
		string soundfx = path + string("/Data/SoundFX/Stage/");

		// Green Hill
		if (config->getInt("Green Hill", "gh1", 1) == 1)
		{
			copy_file(music + "GreenHill.brstm", data + "GreenHill1.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 2)
		{
			copy_file(music + "GreenHillEX.brstm", data + "GreenHill1.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 3)
		{
			copy_file(music + "AngelIsland.brstm", data + "GreenHill1.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 4)
		{
			copy_file(music + "EmeraldHill.brstm", data + "GreenHill1.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 5)
		{
			copy_file(music + "LostValley.brstm", data + "GreenHill1.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "GreenHill1.brstm").c_str());
		}
		if (config->getInt("Green Hill", "gh2", 2) == 1)
		{
			copy_file(music + "GreenHill.brstm", data + "GreenHill2.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 2)
		{
			copy_file(music + "GreenHillEX.brstm", data + "GreenHill2.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 3)
		{
			copy_file(music + "AngelIsland.brstm", data + "GreenHill2.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 4)
		{
			copy_file(music + "EmeraldHill.brstm", data + "GreenHill2.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 1) == 5)
		{
			copy_file(music + "LostValley.brstm", data + "GreenHill2.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "GreenHill2.brstm").c_str());
		}

		// Chemical Plant
		if (config->getBool("Chemical Plant", "cp1", true))
		{
			copy_file(music + "ChemicalPlant.brstm", data + "ChemicalPlant1.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "ChemicalPlant1.brstm").c_str());
		}
		if (config->getBool("Chemical Plant", "cp2", true))
		{
			copy_file(music + "ChemicalPlant.brstm", data + "ChemicalPlant2.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "ChemicalPlant2.brstm").c_str());
		}

		// Angel Island
		if (config->getBool("Angel Island", "ai1", true))
		{
			copy_file(music + "AngelIslandShort.ogg", data + "AngelIsland.ogg", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "AngelIsland.ogg").c_str());
		}
		if (config->getBool("Angel Island", "ai2", true))
		{
			copy_file(music + "AngelIsland.brstm", data + "AngelIsland2.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "AngelIsland2.brstm").c_str());
		}

		// Studiopolis
		if (config->getInt("Studiopolis", "s1", 1) == 1)
		{
			copy_file(music + "Studiopolis.brstm", data + "Studiopolis1.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 2)
		{
			copy_file(music + "CasinoNight.brstm", data + "Studiopolis1.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 3)
		{
			copy_file(music + "CityEscape.brstm", data + "Studiopolis1.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 4)
		{
			copy_file(music + "RooftopRun.brstm", data + "Studiopolis1.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "Studiopolis1.brstm").c_str());
		}
		if (config->getInt("Studiopolis", "s2", 1) == 1)
		{
			copy_file(music + "Studiopolis.brstm", data + "Studiopolis2.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 2)
		{
			copy_file(music + "CasinoNight.brstm", data + "Studiopolis2.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 3)
		{
			copy_file(music + "CityEscape.brstm", data + "Studiopolis2.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 4)
		{
			copy_file(music + "RooftopRun.brstm", data + "Studiopolis2.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "Studiopolis2.brstm").c_str());
		}

		// Angel Island
		if (config->getBool("Press Garden", "pg1", true))
		{
			copy_file(music + "PressGarden.brstm", data + "PulpSolstice1.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "PressGarden1.brstm").c_str());
		}
		if (config->getBool("Press Garden", "pg2", true))
		{
			copy_file(music + "PressGarden.brstm", data + "PulpSolstice2.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "PressGarden2.brstm").c_str());
		}

		// Titanic Monarch
		if (config->getInt("Titanic Monarch", "tm1", 1) == 1)
		{
			copy_file(music + "TitanicMonarch.brstm", data + "TitanicMonarch1.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Titanic Monarch", "tm1", 1) == 2)
		{
			copy_file(music + "SkySanctuary.brstm", data + "TitanicMonarch1.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "TitanicMonarch1.brstm").c_str());
		}
		if (config->getInt("Titanic Monarch", "tm2", 1) == 1)
		{
			copy_file(music + "TitanicMonarch.brstm", data + "TitanicMonarch2.brstm", copy_options::overwrite_existing);
		}
		else if (config->getInt("Titanic Monarch", "tm2", 1) == 2)
		{
			copy_file(music + "SkySanctuary.brstm", data + "TitanicMonarch2.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "TitanicMonarch2.brstm").c_str());
		}

		// Extra Songs
		if (config->getBool("Extra", "ss1", false))
		{
			copy_file(music + "SonicBoom.brstm", data + "StardustSpeedway1.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "StardustSpeedway1.brstm").c_str());
		}
		if (config->getBool("Extra", "ss2", false))
		{
			copy_file(music + "SonicBoom.brstm", data + "StardustSpeedway2.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "StardustSpeedway2.brstm").c_str());
		}

		if (config->getBool("Extra", "ufo", false))
		{
			copy_file(music + "Sunshine.brstm", data + "UFOSpecial.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "UFOSpecial.brstm").c_str());
		}

		if (config->getBool("Extra", "boss", false))
		{
			copy_file(music + "Sonic1Boss.brstm", data + "BossEggman1.brstm", copy_options::overwrite_existing);
			copy_file(music + "Sonic1Boss.brstm", data + "BossEggman2.brstm", copy_options::overwrite_existing);
			copy_file(music + "Sonic1Boss.brstm", data + "BossFinal.brstm", copy_options::overwrite_existing);
			copy_file(music + "Sonic1Boss.brstm", data + "BossHBH.brstm", copy_options::overwrite_existing);
			copy_file(music + "Sonic1Boss.brstm", data + "BossMini.brstm", copy_options::overwrite_existing);
			copy_file(music + "Sonic1Boss.brstm", data + "BossPuyo.brstm", copy_options::overwrite_existing);
			copy_file(music + "Sonic1Boss.brstm", data + "EggReverie.brstm", copy_options::overwrite_existing);
			copy_file(music + "Sonic1Boss.brstm", data + "EggReveriePinch.brstm", copy_options::overwrite_existing);
			copy_file(music + "Sonic1Boss.brstm", data + "MetalSonic.brstm", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "BossEggman1.brstm").c_str());
			remove((data + "BossEggman2.brstm").c_str());
			remove((data + "BossFinal.brstm").c_str());
			remove((data + "BossHBH.brstm").c_str());
			remove((data + "BossMini.brstm").c_str());
			remove((data + "BossPuyo.brstm").c_str());
			remove((data + "EggReverie.brstm").c_str());
			remove((data + "EggReveriePinch.brstm").c_str());
			remove((data + "MetalSonic.brstm").c_str());
		}

		// Other Songs
		if (config->getBool("Other", "title", true))
		{
			copy_file(music + "TitleScreen.ogg", data + "TitleScreen.ogg", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "TitleScreen.ogg").c_str());
		}
		if (config->getBool("Other", "plus", true))
		{
			copy_file(music + "Plus.wav", string(path) + "/Data/SoundFX/Stage/Plus.wav", copy_options::overwrite_existing);
		}
		else
		{
			remove((soundfx + "Plus.wav").c_str());
		}

		if (config->getBool("Other", "introhp", true))
		{
			copy_file(music + "IntroHP.ogg", data + "IntroHP.ogg", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "IntroHP.ogg").c_str());
		}
		if (config->getBool("Other", "introtl", true))
		{
			copy_file(music + "IntroTee.ogg", data + "IntroTee.ogg", copy_options::overwrite_existing);
		}
		else
		{
			remove((data + "IntroTee.ogg").c_str());
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}