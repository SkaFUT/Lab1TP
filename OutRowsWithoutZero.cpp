#include "pch.h"

void OutRowsWithoutZero(int i,int COL,int** Array2D)
{
	cout << "Row " << i+1 << ": ";
	for (int j = 0; j < COL; j++)
	{
		cout << Array2D[i][j]<<' ';
	}
	cout<<endl;
}