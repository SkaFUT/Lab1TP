#include "pch.h"

void CheckFile(int chouse, char path[64])
{
	std::cout << "File not found.\nPress 1 to continue working: ";
	cin >> chouse;
	if (chouse == 1)
	{
		FileCreater(path);
	}
}