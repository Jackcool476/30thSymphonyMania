#include "pch.h"

extern "C"
{
	__declspec(dllexport) const HelperFunctions* MML_HelperFunctions = nullptr;
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
			DeleteFile(L"Data/Music/GreenHill1.brstm");
		}
		else if (gh1 == 1)
		{
			CopyFile(L"Music/GreenHill.brstm", L"Data/Music/GreenHill1.brstm", FALSE);
		}
		else if (gh1 == 2)
		{
			CopyFile(L"Music/GreenHillEX.brstm", L"Data/Music/GreenHill1.brstm", FALSE);
		}

		if (gh2 == 0)
		{
			DeleteFile(L"Data/Music/GreenHill2.brstm");
		}
		else if (gh2 == 1)
		{
			CopyFile(L"Music/GreenHill.brstm", L"Data/Music/GreenHill2.brstm", FALSE);
		}
		else if (gh2 == 2)
		{
			CopyFile(L"Music/GreenHillEX.brstm", L"Data/Music/GreenHill2.brstm", FALSE);
		}

		// Extra
		if (introhp == false)
		{
			DeleteFile(L"Data/Music/IntroHP.ogg");
		}
		else
		{
			CopyFile(L"Music/IntroHP.ogg", L"Data/Music/IntroHP.ogg", FALSE);
		}

		if (introtl == false)
		{
			DeleteFile(L"Data/Music/IntroTee.ogg");
		}
		else
		{
			CopyFile(L"Music/IntroTee.ogg", L"Data/Music/IntroTee.ogg", FALSE);
		}

		if (title == false)
		{
			DeleteFile(L"Data/Music/TitleScreen.ogg");
		}
		else
		{
			CopyFile(L"\\Music\\TitleScreen.ogg", L"\\Data\\Music\\TitleScreen.ogg", FALSE);
		}
	}
	__declspec(dllexport) ModInfo ManiaModInfo = {ModLoaderVer, GameVer};
}