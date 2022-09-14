#pragma once
#include <iostream>

void selectSort()
{
	const int size = 5; 
	int arr[size] = { 3, 1, 4, 2, 6 }; 
	int smallest = 0;

	for (int i = 0; i < size - 1; ++i)
	{
		int j = i + 1; 
		smallest = arr[i]; 

		while (j < size - 1)
		{
			if (arr[j] < smallest)
			{
				smallest = arr[j]; 
				arr[j] = arr[i]; 
				arr[i] = smallest; 
			}

			++j; 
		}
	}

	for (const int x : arr)
		std::cout << x << "\n"; 
}