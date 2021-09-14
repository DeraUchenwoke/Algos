#pragma once
#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {

	for (int i = 1; i < arr.size(); i++)
	{
		for (int j = 1; j < arr.size(); j++)
		{
			int temp = 0;

			if (arr[j] < arr[j - 1])
			{
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}

	// Output array into console. 
	for (int i : arr)
	{
		std::cout << i << " ";
	}
}
