#pragma once
#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr)
{
	// function to find min value. 

	unsigned int len = arr.size();
	unsigned int min = 0;

	for (unsigned int i = 0; i < len - 1; i++) // last value of sorted arr will always be the max. 
	{
		for (unsigned int j = i + 1; j < len--; j++)
		{
			if (arr[i] < arr[j])
			{
				min = arr[i]; // will not intefere with main sorted i values and setsthe new min value.
			}
		}
	}

	// Output array into console. 
	/*for (int i : arr)
	{
		std::cout << i << " ";
	}*/

	// check if array is sorted in O(n) time. 

	


}

