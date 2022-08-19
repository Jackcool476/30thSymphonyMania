#include "pch.h"
using std::string;
using namespace std::filesystem;

extern "C"
{
	__declspec(dllexport) void Init(const char *path)
	{
		const IniFile *config = new IniFile(string(path) + "/config.ini");
		string datam = path + string("/Data/Music/");
		string datas = path + string("/Data/Stages/");
		string soundfx = path + string("/Data/SoundFX/Stage/");
		string music = path + string("/Music/");
		string stages = path + string("/Stages/");

		// Green Hill
		if (config->getInt("Green Hill", "gh1", 1) == 1)
		{
			copy_file(stages + "GHZ/Scene1.bin", datas + "GHZ/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 2)
		{
			copy_file(stages + "GHZ/Scene1Long.bin", datas + "GHZ/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 3)
		{
			copy_file(stages + "GHZ/Scene1Angel.bin", datas + "GHZ/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 4)
		{
			copy_file(stages + "GHZ/Scene1Emerald.bin", datas + "GHZ/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh1", 1) == 5)
		{
			copy_file(stages + "GHZ/Scene1Valley.bin", datas + "GHZ/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "GHZ/Scene1.bin");
		}
		if (config->getInt("Green Hill", "gh2", 2) == 1)
		{
			copy_file(stages + "GHZ/Scene2Short.bin", datas + "GHZ/Scene2.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 2)
		{
			copy_file(stages + "GHZ/Scene2.bin", datas + "GHZ/Scene2.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 3)
		{
			copy_file(stages + "GHZ/Scene2Angel.bin", datas + "GHZ/Scene2.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 2) == 4)
		{
			copy_file(stages + "GHZ/Scene2Emerald.bin", datas + "GHZ/Scene2.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Green Hill", "gh2", 1) == 5)
		{
			copy_file(stages + "GHZ/Scene2Valley.bin", datas + "GHZ/Scene2.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "GHZ/Scene2.bin");
		}

		// Chemical Plant
		if (config->getBool("Chemical Plant", "cp1", true))
		{
			copy_file(stages + "CPZ/Scene1.bin", datas + "CPZ/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "CPZ/Scene1.bin)");
		}
		if (config->getBool("Chemical Plant", "cp2", true))
		{
			copy_file(stages + "CPZ/Scene2.bin", datas + "CPZ/Scene2.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "CPZ/Scene2.bin");
		}

		// Angel Island
		if (config->getBool("Angel Island", "ai1", true))
		{
			copy_file(stages + "AIZ/Scene1.bin", datas + "AIZ/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "AIZ/Scene1.bin");
		}
		if (config->getBool("Angel Island", "ai2", true))
		{
			copy_file(stages + "AIZ/Scene2.bin", datas + "AIZ/Scene2.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "AIZ/Scene2.bin");
		}

		// Studiopolis
		if (config->getInt("Studiopolis", "s1", 1) == 1)
		{
			copy_file(stages + "SPZ1/Scene1.bin", datas + "SPZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 2)
		{
			copy_file(stages + "SPZ1/Scene1Casino.bin", datas + "SPZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 3)
		{
			copy_file(stages + "SPZ1/Scene1City.bin", datas + "SPZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s1", 1) == 4)
		{
			copy_file(stages + "SPZ1/Scene1Rooftop.bin", datas + "SPZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "SPZ1/Scene1.bin");
		}
		if (config->getInt("Studiopolis", "s2", 1) == 1)
		{
			copy_file(stages + "SPZ2/Scene1.bin", datas + "SPZ2/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 2)
		{
			copy_file(stages + "SPZ2/Scene1Casino.bin", datas + "SPZ2/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 3)
		{
			copy_file(stages + "SPZ2/Scene1City.bin", datas + "SPZ2/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Studiopolis", "s2", 1) == 4)
		{
			copy_file(stages + "SPZ2/Scene1Rooftop.bin", datas + "SPZ2/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "SPZ2/Scene1.bin");
		}

		// Angel Island
		if (config->getBool("Press Garden", "pg1", true))
		{
			copy_file(stages + "PSZ1/Scene1.bin", datas + "PSZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "PSZ1/Scene1.bin");
		}
		if (config->getBool("Press Garden", "pg2", true))
		{
			copy_file(stages + "PSZ2/Scene2.bin", datas + "PSZ2/Scene2.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "PSZ2/Scene2.bin");
		}

		// Titanic Monarch
		if (config->getInt("Titanic Monarch", "tm1", 1) == 1)
		{
			copy_file(stages + "TMZ1/Scene1.bin", datas + "TMZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Titanic Monarch", "tm1", 1) == 2)
		{
			copy_file(stages + "TMZ1/Scene1Sky.bin", datas + "TMZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "TMZ/Scene1.bin");
		}
		if (config->getInt("Titanic Monarch", "tm2", 1) == 1)
		{
			copy_file(stages + "TMZ2/Scene1.bin", datas + "TMZ2/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Titanic Monarch", "tm2", 1) == 2)
		{
			copy_file(stages + "TMZ2/Scene1Sky.bin", datas + "TMZ2/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "TMZ2/Scene1.bin");
		}

		// Extra Songs
		if (config->getInt("Extra", "ss1", 0) == 1)
		{
			copy_file(stages + "SSZ1/Scene1Boom.bin", datas + "SSZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Extra", "ss1", 0) == 2)
		{
			copy_file(stages + "SSZ1/Scene1City.bin", datas + "SSZ1/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "SSZ1/Scene1.bin");
		}
		if (config->getInt("Extra", "ss2", 0) == 1)
		{
			copy_file(stages + "SSZ2/Scene1Boom.bin", datas + "SSZ2/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "SSZ2/Scene2Boom.bin", datas + "SSZ2/Scene2.bin", copy_options::overwrite_existing);
		}
		else if (config->getInt("Extra", "ss2", 0) == 2)
		{
			copy_file(stages + "SSZ2/Scene1City.bin", datas + "SSZ2/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "SSZ2/Scene2City.bin", datas + "SSZ2/Scene2.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "SSZ2/Scene1.bin");
			remove(datas + "SSZ2/Scene2.bin");
		}

		if (config->getBool("Extra", "ufo", false))
		{
			copy_file(stages + "UFO1/Scene1.bin", datas + "UFO1/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO1/Scene2.bin", datas + "UFO1/Scene2.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO2/Scene1.bin", datas + "UFO2/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO2/Scene2.bin", datas + "UFO2/Scene2.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO3/Scene1.bin", datas + "UFO3/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO3/Scene2.bin", datas + "UFO3/Scene2.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO4/Scene1.bin", datas + "UFO4/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO4/Scene2.bin", datas + "UFO4/Scene2.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO5/Scene1.bin", datas + "UFO5/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO5/Scene2.bin", datas + "UFO5/Scene2.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO6/Scene1.bin", datas + "UFO6/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO6/Scene2.bin", datas + "UFO6/Scene2.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO7/Scene1.bin", datas + "UFO7/Scene1.bin", copy_options::overwrite_existing);
			copy_file(stages + "UFO7/Scene2.bin", datas + "UFO7/Scene2.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "UFO1/Scene1.bin");
			remove(datas + "UFO1/Scene2.bin");
			remove(datas + "UFO2/Scene1.bin");
			remove(datas + "UFO2/Scene2.bin");
			remove(datas + "UFO3/Scene1.bin");
			remove(datas + "UFO3/Scene2.bin");
			remove(datas + "UFO4/Scene1.bin");
			remove(datas + "UFO4/Scene2.bin");
			remove(datas + "UFO5/Scene1.bin");
			remove(datas + "UFO5/Scene2.bin");
			remove(datas + "UFO6/Scene1.bin");
			remove(datas + "UFO6/Scene2.bin");
			remove(datas + "UFO7/Scene1.bin");
			remove(datas + "UFO7/Scene2.bin");
		}

		if (config->getBool("Extra", "boss", false))
		{
			copy_file(stages + "TMZ3/Scene1Boss.bin", datas + "TMZ3/Scene1.bin", copy_options::overwrite_existing);
		}
		else
		{
			remove(datas + "TMZ3/Scene1.bin");
		}

		// Other Songs
		if (config->getBool("Other", "title", true))
		{
			copy_file(datam + "Title.ogg", datam + "TitleScreen.ogg", copy_options::overwrite_existing);
		}
		else
		{
			remove(datam + "TitleScreen.ogg");
		}
		if (config->getBool("Other", "plus", true))
		{
			copy_file(soundfx + "Empty.wav", soundfx + "Plus.wav", copy_options::overwrite_existing);
		}
		else
		{
			remove(soundfx + "Plus.wav");
		}

		if (config->getBool("Other", "introhp", true))
		{
			copy_file(datam + "Intro.ogg", datam + "IntroHP.ogg", copy_options::overwrite_existing);
		}
		else
		{
			remove(datam + "IntroHP.ogg");
		}
		if (config->getBool("Other", "introtl", true))
		{
			copy_file(datam + "Intro.ogg", datam + "IntroTee.ogg", copy_options::overwrite_existing);
		}
		else
		{
			remove(datam + "IntroTee.ogg");
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}