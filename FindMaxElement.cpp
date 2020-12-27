#include "pch.h"

int FindMaxElement(int ROW,int COL,int* Arr)
{
	int MaxValue = 0;
	for (int i = 0; i < ROW * COL; i++)
	{
		if (Arr[i] == Arr[i + 1])
		{
			MaxValue = Arr[i];
			break;
		}
	}
	return MaxValue;
}