#pragma once
#include <iostream>
#include <vector>

void DNASubString(std::string X, std::string Y) {

	std::vector<char> vec; 

	for (int i = 0; i < X.length(); i++)
	{
		int k = -1; // Shows what index the match appears at -1 = no match.

		int count1 = 0; 

		for (int j = 0; j < Y.length(); j++)
		{
			if (X[i] == Y[j]) 
			{
				count1++; // Count the number of times a character appears in Y.
				k = j; // Next step maybe store the indexes. 
			}
		}

		//std::cout << "Frequeny of letter, " << X[i] << " in " << Y << " is " << count1 << " at index: " << k << std::endl;
		vec.push_back(k); 
	}

	for (int i : vec) 
	{
		std::cout << i << std::endl; 
	}
}