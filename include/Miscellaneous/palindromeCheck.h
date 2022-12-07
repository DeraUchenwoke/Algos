#pragma once
#include <iostream>
#include <vector>
#include <cmath>

// TODO: Understand power function O(logn) version.
//int power(int base, int exponent)
//{
//	int temp = NULL; 
//
//	// Case 1: As power of 0 always returns 1.
//	if (exponent == 0)
//	{
//		return 1;
//	}
//
//	return temp; 
//}

bool palindromeCheck(int x) {

	 // This time with an integer and without converting it to a string?
	
	// Edge case: If number is negative it can never be a palindrome and log of it cannot be found.
	if (x < 0)
	{
		return false;
	}


	// Special edge case
	if (x == 0)
	{
		return true;
	}


	int num_digits = log10(x); // gets the total number of digits of the number.
	std::vector<int> digits; 
	int i = num_digits;

	int first = x / pow(10, i); // gets the first digit.
	digits.push_back(first); 

	while (i > 0)
	{

		int power_of_ten = pow(10, i);
		int digit = x % power_of_ten; // gets the subsequent digits but not alone.
		digit = digit / pow(10, i - 1); // integer division of i.e. 13 becomes 1, which is the digit alone.

		digits.push_back(digit); 

		--i; 
	}
	
	
	for (int i = 0; i < digits.size() / 2 ; ++i)
	{
		int j = digits.size() - 1 - i;
		
		if (digits[i] != digits[j])
		{
			return false; 
		}
	}

	return true;

}