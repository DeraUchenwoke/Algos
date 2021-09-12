#pragma once
#include <iostream>

void insertSort(int (&arr)[5])
{
	int pos, j;

	for (int i = 1; i < 5; i++)
	{
		j = i - 1; // Position just before the key.
		pos = arr[i]; // Stored the current value in the array at i. 

		while (j >= 0 && arr[j] > pos) // Provided j is >= 0 and the value before the key is > value of key. 
		{
			arr[j + 1] = arr[j]; // arr[j + 1] is the same value as a[i] now = arr[j] upwards.  
			j--; // Decrement j.
		}

		arr[j + 1] = pos; // Puts 
	}

	// Output array into console. 
	for (int i : arr)
	{
		std::cout << i << " "; 
	}
}


