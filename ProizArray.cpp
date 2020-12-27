#include "pch.h"

double ProizArray(int size, double* Array)
{

	double MIN = 0, MAX = 0,proiz=1;
	int NumberOfMAX = 0, NumberOfMIN = 0,MAXCount=0,MINCount=0;

	for (int j = size; j != 0; j--)
	{
		if (MIN >= Array[j - 1])
		{
			MIN = Array[j - 1];
			NumberOfMIN = j;
		}
	}
	for (int j = 0; j < size; j++)
	{
		if (MAX <= Array[j])
		{
			MAX = Array[j];
			NumberOfMAX = j + 1;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (Array[i] == MAX)
		{
			MAXCount++;
			cout << "number MAXs: "<<i<<" ";
		}
		if (Array[i])
		{
			MINCount++;
			cout << "number MINs: "<<i << " ";

		}
	}
	if ((MINCount||MAXCount)>=2)
	{

	}
	else
	{

	}






	if (NumberOfMIN < NumberOfMAX)
	{
		for (; NumberOfMIN + 1 < NumberOfMAX; NumberOfMIN++)
		{
			proiz = Array[NumberOfMIN] * proiz;
		}

	}
	else
	{
		for (; NumberOfMAX + 1 < NumberOfMIN; NumberOfMAX++)
		{
			proiz = Array[NumberOfMAX] * proiz;
		}
	}

}