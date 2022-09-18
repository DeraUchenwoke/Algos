#pragma once
#include <iostream>

void mergeSort()
{
	// For when A.length is even.
	const unsigned short int size = 6;
	int A[size] = { 31, 41, 59, 26, 41, 58}; 

	// create new subarrays
	int L[(size / 2) + 1] = {}; 
	int R[(size / 2) + 1] = {}; 

	for (int i = 0; i < size /  2; ++i)
	{
		L[i] = A[i]; 
	}
	
	for (int i = 0; i < size / 2; ++i)
	{
		R[i] = A[i + size / 2]; 
	}

	// input partitioned vals into subarrays + sentinel value of infinity (i.e., MAX)
	L[(size / 2)] = 1000000; 
	R[(size / 2)] = 1000000; 

	// compare vals on 'top of card decks' and replace original array with smaller val
	int i = 0; 
	int j = 0; 

	for (int k = 0; k < size; ++k)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i]; 
			++i; 
		}

		else
		{
			A[k] = R[j]; 
			++j;
		}
	}
	
	for (int x : A)
	{
		std::cout << x << "\n"; 
	}

	//for (int x : L)
	//{
	//	std::cout << x << "\n"; 
	//}	
	//
	//std::cout << "-------" << "\n"; 

	//for (int y : R)
	//{
	//	std::cout << y << "\n"; 
	//}


	

	

	// terminate when sentinel is reached?
	

}