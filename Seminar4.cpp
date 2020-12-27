#include "pch.h"

void Seminar4() 
{
	system("cls");

	int ROW, COL;
	bool Checking = true;
	do
	{
		cout << "Enter rows: ";
		cin >> ROW;
		cout << "Enter colums: ";
		cin >> COL;
	} while (CheckSizeOfArray(ROW,COL));
	

	int** Array2D = new int* [ROW];
	int* Arr = new int[ROW * COL];
	cout << "Enter array elements\n";
	for (int i = 0; i < ROW; i = i + 1)
	{
		Array2D[i] = new int[COL];
		for (int j = 0; j < COL; j = j + 1)
		{
			cin >> Array2D[i][j];
			Arr[i * COL + j] = Array2D[i][j];
		}
	}

	cout << endl;




	SortArray(ROW, COL, Arr);




	if (CheckMaxValue(ROW,COL,Arr))
	{
		cout<<"Count of Rows without zero: "<<ZeroCounter(ROW, COL, Array2D)<<endl<<"Max element: "<<FindMaxElement(ROW,COL,Arr);
	}
	else
	{
		cout << "Count of Rows without zero: " << ZeroCounter(ROW, COL, Array2D) << endl << "Max element: none";
	}
	delete[] Arr;
	for (int i = 0; i < ROW; i++) 
	{
		delete[] Array2D[i];
	}
	Menu();
}