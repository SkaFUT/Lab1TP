#include "pch.h"

void SortArray(int ROW,int COL,int *Arr)
{
	int k = 0;
	int temp = 0;
	for (int i = 0; i < ROW*COL; i++) 
	{
		k = i; 
		for (int j = i; j < ROW*COL; j++) 
		{
			if (Arr[j] > Arr[k]) 
			{
				k = j;
			}
		}
		temp = Arr[i];
		Arr[i] = Arr[k];
		Arr[k] = temp;
	}
	
}