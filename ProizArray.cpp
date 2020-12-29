#include "pch.h"

void ProizArray(int size, double* Array)
{

	double MIN = 0, MAX = 0,proiz=1;
	int NumberOfMAX, NumberOfMIN;

	for (int j = size; j != 0; j--)
	{
		if (MIN >= Array[j - 1])
		{
			MIN = Array[j - 1];
		}
	}
	NumberOfMIN = ChouseMIN(MIN, size, Array);
	for (int j = 0; j < size; j++)
	{
		if (MAX <= Array[j])
		{
			MAX = Array[j];
		}
	}
	NumberOfMAX=ChouseMAX(MAX, size, Array);

	if (fabs(NumberOfMAX - NumberOfMIN) == 1)
	{
		cout << "Min and Max neighboor";
	}
	else
	{
		if (NumberOfMIN < NumberOfMAX)
		{
			NumberOfMIN;
			for (; NumberOfMIN < NumberOfMAX; NumberOfMIN++)
			{
				proiz = Array[NumberOfMIN] * proiz;
			}
		}
		else
		{
			NumberOfMAX;
			for (; NumberOfMAX < NumberOfMIN; NumberOfMAX++)
			{
				proiz = Array[NumberOfMAX] * proiz;
			}
		}
		cout << proiz;
	}
}