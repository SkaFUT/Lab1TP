#include "pch.h"

void SortAnArray(double* Array, int size)
{
	int k = 0;
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		k = i;
		for (int j = i; j < size; j++)
		{
			if (Array[j] < Array[k])
			{
				k = j;
			}
		}
		temp = Array[i];
		Array[i] = Array[k];
		Array[k] = temp;
	}
}