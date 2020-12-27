#include "pch.h"

double SummOfElements(int size,double* Array)
{
	double Summ=0;
	cout << "Negative elements: ";
	for (int i = 0; i < size; i++)
	{
		if (Array[i] < 0)
		{
			Summ = Summ + Array[i];
			cout << Array[i] << ' ';
		}
	}
	cout << endl;
	return Summ ;
}