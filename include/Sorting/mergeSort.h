#pragma once
#include <iostream>

void mergeSort()
{
	// For when A.length is even this can be done if not even.
	// Also assumes L = {31, 41, 59, 60} and R = {26, 41, 58, 59} subarrays are already sorted.
	const unsigned short int size = 8;
	int A[size] = { 31, 41, 59, 60, 26, 41, 58, 59}; 

	// create new subarrays
	//int L[(size / 2) + 1] = {}; 
	//int R[(size / 2) + 1] = {};

	int L[(size / 2)] = {};
	int R[(size / 2)] = {};

	for (int i = 0; i < size /  2; ++i)
	{
		L[i] = A[i]; 
	}
	
	for (int i = 0; i < size / 2; ++i)
	{
		R[i] = A[i + size / 2]; 
	}

	// compare vals on 'top of card decks' and replace original array with smaller val
	int i = 0; 
	int j = 0; 

	for (int k = 0; k < size - 1; ++k)
	{
		if (L[i] <= R[j])
		{
			// std::cout << "i: " << i << std::endl;
			A[k] = L[i]; 
			++i; 
		}

		else
		{
			// std::cout << "j: " << j << std::endl;
			A[k] = R[j]; 
			++j;
		}

	}

	// exercise 2.3.3 -> get procedure to work without sentinel value.
	// This removes one iteration from the 'comparison' loop.
	if (L[size / 2 - 1] <= R[size / 2 - 1])
	{
		A[size - 1] = R[size / 2 - 1]; // that means the last value of R is definitely the largest value in A[k]
	}

	else
	{
		A[size - 1] = L[size / 2 - 1]; // otherwise it is the last value of R.
	}
	
	for (int x : A)
	{
		std::cout << x << "\n"; 
	}
}