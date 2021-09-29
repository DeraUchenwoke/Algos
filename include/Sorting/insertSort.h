#pragma once 
#include <iostream>
#include <vector>

void insertSort(std::vector<int> &arr)
{
	int pos, j;
	int len = arr.size(); 

	for (int i = 1; i < len; i++)
	{
		j = i - 1; // Position just before the key.
		pos = arr[i]; // Stored the current value in the array at i. 

		while (j >= 0 && arr[j] > pos) // Provided j is >= 0 and the value before the key is > value of key. 
		{
			arr[j + 1] = arr[j]; // arr[j + 1] is the same value as a[i] now = arr[j] upwards.  
			j--; // Decrement j.
		}

		arr[j + 1] = pos; // Assigns arr[j + 1] as the new arr[i].
	}

	int count = 0; 
	int test[6] = { 3, 2, 4, 8, 7, 9 }; // expect count = 2

	for (int i = 1; i < len; i++)
	{
		if (test[i] < test[i - 1])
		{
			count++; 
		}
	}

	if (count > 0)
	{
		std::cout << "FAIL: "<< count << " unsorted elements"; 
	}

	else
	{
		std::cout << "DETROS"; 
	}
}


