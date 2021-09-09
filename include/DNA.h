#pragma once
#include <iostream>
#include <vector>
#include "UniqueNum.h"
#include "bubbleSort.h"

void DNASubString(std::string X, std::string Y) {

	// Swap if the length of X > Y. 
	if (X.length() > Y.length())
	{
		std::string temp = X; 
		X = Y; 
		Y = temp; 
	}

	std::vector<int> vec; 

	for (int i = 0; i < X.length(); i++)
	{
		int k = -1; // Shows what index the match appears at -1 = no match.

		for (int j = 0; j < Y.length(); j++)
		{
			if (X[i] == Y[j]) 
			{
				k = j; // Next step maybe store the indexes. 

				vec.push_back(k);

				break;
			}
		}
	}

	UniqueNumber(vec); // Only unique numbers of my function.  

	for (int i : vec)
	{
		std::cout << i; 
	}
}