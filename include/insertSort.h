#pragma once
#include <iostream>
#include "Swap.h"

void insertSort(int (&arr)[5])
{
	int pos, j;

	for (int i = 1; i < 5; i++)
	{
		
		j = i - 1; // Position just before the key.
		pos = arr[i]; // Position in the array.

		while (j >= 0 && arr[j] > pos)
		{
			arr[j + 1] = arr[j]; 
			j--; 
		}

		arr[j + 1] = pos; 
	}

	// Output array into console. 
	for (int i : arr)
	{
		std::cout << i << " "; 
	}
}


