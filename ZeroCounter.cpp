#include "pch.h"

int ZeroCounter(int ROW,int COL,int** Array2D)
{
	bool Checking = true;
	int CountWithoutZero = 0;
	for (int i = 0; i < ROW; i = i + 1)
	{
		for (int j = 0; j < COL; j = j + 1)
		{
			if (Array2D[i][j] == 0)
			{
				Checking = false;
			}
		}
		if (Checking)
		{
			OutRowsWithoutZero(i, COL, Array2D);
			CountWithoutZero++;
		}
		Checking = true;
	}
	return CountWithoutZero;
}