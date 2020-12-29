#include "pch.h"

void SummOfElements(int size,double* Array)
{
	double Summ=0;
	int light = 0;
	cout << "Negative elements: ";
	for (int i = 0; i < size; i++)
	{
		if (Array[i] < 0)
		{
			light++;
			Summ = Summ + Array[i];
			cout << Array[i] << ' ';
		}
	}
	if (light==0)
	{
		cout << "none";
	}
	else
	{
		if (light==1)
		{
			cout << "\nThere is only 1 negative element in the array";
		}
		else
		{
			cout << "\nSumm: " << Summ;
		}

	}
	cout << endl;
}