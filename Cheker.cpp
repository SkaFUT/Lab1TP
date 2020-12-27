#include "pch.h"

bool CheckMaxValue(int ROW,int COL, int* Arr)
{
	bool marker = false;
	for (int i = 0; i < ROW * COL; i++)
	{
		if (Arr[i] == Arr[i + 1])
		{
			marker = true;
			break;
		}
	}
	return marker;
}