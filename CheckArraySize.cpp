#include "pch.h"

int CheckArraySize()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	for ( ;;)
	{
		if (n < 0)
		{
			cout << "You enter a negative number.\nPlease repeate: ";
			cin >> n;
		}
		else
		{
			if (n == 1)
			{
				cout << "You enter 1, size of array can be only 1+.\nPlease repeate: ";
				cin >> n;
			}
			else
			{
				cout << "You enter a right number.\n";
				break;
			}
		}
	}
	return n;
}