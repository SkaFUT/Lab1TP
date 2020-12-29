#include "pch.h"

int ChouseMAX(double MAX,int size,double* Array)
{
	int CoordMAX = 0;
	int MAXnumber;
	for (int i = 0; i < size; i++)
	{
		if (Array[i] == MAX)
		{

			CoordMAX++;
			MAXnumber = i;
		}
	}
	if (CoordMAX == 1)
	{
		return MAXnumber;
	}
	else
	{
		int* CoordinatesForMAX = new int[CoordMAX];
		int j = 0;

		for (int i = 0; i < size; i++)
		{
			if (Array[i] == MAX)
			{
				CoordinatesForMAX[j] = i;
				j++;
			}
		}


		cout << "We have a some MAXs: ";
		for (int i = 0; i < CoordMAX; i++)
		{
			cout << CoordinatesForMAX[i] + 1 << " ";
		}
		cout << endl;
		cout << "Enter would you like start MAX: ";
		cin >> MAXnumber;
		delete[] CoordinatesForMAX;
		return MAXnumber;
	}
}