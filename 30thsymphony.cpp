#include "mania-mod-loader/mod-loader-common/ModLoaderCommon/IniFile.hpp"
#include <string>
#include <WinBase.h>

int gh1 = 1;

void readconfig(const char* path) {
	const IniFile* config = new IniFile(std::string(path) + "\\config.ini");
	gh1 = config->getBool("Green Hill", "gh1", 1);

	if (gh1 == 1)
	{
		std::wstring oldPath = L"C:\\Users\\user1\\Desktop\\example\\text.txt";
		std::wstring newPath = L"C:\\Users\\user1\\Desktop\\example1\\text.txt";

		bool result = CopyFile(newPath.c_str(), oldPath.c_str());

		if (result)
			printf("File was moved!");
		else
			printf("File wasn't moved!");
	}
}