#include "pch.h"

extern "C"
{
	__declspec(dllexport) void Init(const char *path)
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
		if (gh1 == 0)
		{
			if (remove("Data/Music/GreenHill1.brstm"))
				PrintDebug("\nFile Deleted Successfully!");
			else
				PrintDebug("\nerror");
		}
		else if (gh1 == 1)
		{
			if (std::filesystem::copy_file("Music/GreenHill.brstm", "Data/Music/GreenHill1.brstm")) {
				PrintDebug("\nworks");
			}
			else {
				PrintDebug("\ndoesn't");
			}
		}
		else if (gh1 == 2)
		{
			std::filesystem::copy_file("Music/GreenHillEX.brstm", "Data/Music/GreenHill1.brstm");
			PrintDebug("gh1 long");
		}

		if (gh2 == 0)
		{
			remove("Data/Music/GreenHill2.brstm");
		}
		else if (gh2 == 1)
		{
			std::filesystem::copy_file("Music/GreenHill.brstm", "Data/Music/GreenHill2.brstm");
		}
		else if (gh2 == 2)
		{
			std::filesystem::copy_file("Music/GreenHillEX.brstm", "Data/Music/GreenHill2.brstm");
		}

		// Extra
		if (introhp == false)
		{
			remove("Data/Music/IntroHP.ogg");
		}
		else
		{
			std::filesystem::copy_file("Music/IntroHP.ogg", "Data/Music/IntroHP.ogg");
		}

		if (introtl == false)
		{
			remove("Data/Music/IntroTee.ogg");
		}
		else
		{
			std::filesystem::copy_file("Music/IntroTee.ogg", "Data/Music/IntroTee.ogg");
		}

		if (title == false)
		{
			remove("Data/Music/TitleScreen.ogg");
		}
		else
		{
			std::filesystem::copy_file("Music/TitleScreen.ogg", "Data/Music/TitleScreen.ogg");
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}