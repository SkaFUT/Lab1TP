#include "pch.h"

int ChouseMIN(double MIN, int size, double* Array)
{
	int CoordMIN = 0;
	int MINnumber;
	for (int i = 0; i < size; i++)
	{
		if (Array[i] == MIN)
		{
			CoordMIN++;
			MINnumber = i;
		}
	}
	if (CoordMIN == 1)
	{
		return MINnumber;
	}
	else
	{
		int* CoordinatesForMIN = new int[CoordMIN];
		int j = 0;
		for (int i = 0; i < size; i++)
		{
			if (Array[i] == MIN)
			{
				CoordinatesForMIN[j] = i;
				j++;
			}
		}

		cout << "We have a some MINs: ";
		for (int i = 0; i < CoordMIN; i++)
		{
			cout << CoordinatesForMIN[i]+1<<" ";
		}
		cout << endl;
		cout << "Enter would you like start MIN: ";
		cin >> MINnumber;
		delete[] CoordinatesForMIN;
		return MINnumber;
	}
}