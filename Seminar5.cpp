#include "pch.h"

void Seminar5()
{
	system("cls");

	int chouse = 0;
	int Number_of_String = 1;
	string STRING;
	string S1;
	string S2;
	string S3;
	char path[64] = "FileSEM5.txt";


	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		CheckFile(chouse, path);
	}
	
	getline(fin, STRING);
	for (int i = 0; i != STRING.length(); i++)
	{
		switch (Number_of_String)
		{
		case 1:
		{
			S1 += STRING[i];
			if (STRING[i] == '?' || STRING[i] == '.' || STRING[i] == '!')
			{
				Number_of_String++;
			}
			break;
		}
		case 2:
		{
			S2 += STRING[i];
			if (STRING[i] == '?' || STRING[i] == '.' || STRING[i] == '!')
			{
				Number_of_String++;
			}
			break;
		}
		case 3:
		{
			S3 += STRING[i];
			if (STRING[i] == '?' || STRING[i] == '.' || STRING[i] == '!')
			{
				Number_of_String++;
			}
			break;
		}
		}
	}	
	std::cout <<"Final sentense:"<< S3 << S2 << " " << S1;
	fin.close();
	Menu();
}