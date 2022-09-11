#pragma once
#include <iostream>

void binaryAddition()
{
	const int size = 4;
	int A[size] = { 1, 0, 1, 1 };
	int B[size] = { 1, 1, 0, 1 }; 
	int C[size + 1] = {}; 

	int remainder = 0;

	for (int i = size - 1; i >= 0; --i)
	{
		C[i + 1] = (A[i] + B[i] + remainder) % 2; 

		if (A[i] + B[i] + remainder >= 2)
		{
			remainder = 1;
		}
		else
		{
			remainder = 0;
		}
	}

	C[0] = remainder; 

	for (int x : C)
	{
		std::cout << x; 
	}
}