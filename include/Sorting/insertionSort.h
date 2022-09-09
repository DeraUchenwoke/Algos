#pragma once
#include <iostream>

void insertSort()
{
	const int size = 6;
	int arr[size] = { 31, 41, 59, 26, 41, 58 };

	for (int i = 1; i < size; ++i)
	{
		int key = arr[i]; 
	
		int j = i - 1;

		while (j >= 0 && arr[j] < key) // arr[i] < key -> sorts in nonincreasing order 
		{
			arr[j + 1] = arr[j]; // shifts value 'upwards', arr[j] to the next index 

			j = j - 1;
			
		}

		// std::cout << j + 1 << "\n"; 

		arr[j + 1] = key; // inserts value of key into +1 the position the while loop was terminated...
		// a.k.a when the condition, arr[j] > key is no longer met.
	}

	for (int x : arr)
	{
		std::cout << x << "\n"; 
	}
}