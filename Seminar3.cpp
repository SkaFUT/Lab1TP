#include "pch.h"

void Seminar3()
{
	int MAX = 0;
	int MIN = 0;
	int number1 = 0;
	int number2 = 0;
	double proiz = 1;

	int size=CheckArraySize();
	double* Array = new double[size];
	for (int i = 0; i < size; i++)
	{
		cin >> Array[i];
	}

	SummOfElements(size, Array);
	

SortAnArray(Array, size);

	


	
	//cout << fixed << setprecision(2) << summ << "  " << fixed << setprecision(2) << proiz << endl;
	//cout << MAX << "   " << MIN << endl;
	for (int i = 0; i < size; i++)
	{
		cout << fixed << setprecision(2) << Array[i] << " ";
	}
	delete[]Array;
}