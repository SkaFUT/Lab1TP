#include "pch.h"

void Seminar3()
{
	system("cls");
	int MAX = 0;
	int MIN = 0;
	int number1 = 0;
	int number2 = 0;
	double proiz = 1;
	int menu;
	int size=CheckArraySize();
	double* Array = new double[size];
	cout << "Enter the elements: ";
	for (int i = 0; i < size; i++)
	{
		cin >> Array[i];
	}

	SummOfElements(size, Array);

	cout << "Proiz = ";
	ProizArray(size, Array);

	SortAnArray(Array, size);

	cout << "\nSort Array: ";
	for (int i = 0; i < size; i++)
	{
		cout << fixed << setprecision(2) << Array[i] << " ";
	}
	delete[] Array;
	cout << "\nPress any key.";
	cin >> menu;
	Menu();
}