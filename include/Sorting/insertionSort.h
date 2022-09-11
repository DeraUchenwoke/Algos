#pragma once
#include <iostream>

void insertSort()
{
	const int size = 6;
	int arr[size] = { 31, 41, 59, 26, 41, 58 };

	for (int i = 1; i < size; ++i)
	{
		int key = arr[i]; 
	
		int j = i - 1;

		while (j >= 0 && arr[j] < key) // arr[i] < key -> sorts in nonincreasing order 
		{
			arr[j + 1] = arr[j]; // shifts value 'upwards', arr[j] to the next index 

			j = j - 1;
			
		}

		// std::cout << j + 1 << "\n"; 

		arr[j + 1] = key; // inserts value of key into +1 the position the while loop was terminated...
		// a.k.a when the condition, arr[j] > key is no longer met.
	}

	for (int x : arr)
	{
		std::cout << x << "\n"; 
	}
}

//Psuedo code for exercise 2.1.3
// 
// Write pseudocode for linear search, which scans through the sequence, looking
// for v. Using a loop invariant, prove that your algorithm is correct. Make sure that
// your loop invariant fulfills the three necessary properties.
// 
// for index = 0 for A.length - 1
//		if A[i] is equal to v
//			return index
// return NIL
//
// Loop invariant proof:
// Initialisation: When i = 0, it is possible this position contains v. In such case it would return the index.
// Maintenance: For A[i] A[i+1]...A[A.length-1], returns the index if equal to v. 
// Termination: When i = A.length - 1 and index is not returned, the program terminated by returning NIL.
// To show v does not exist in A.

//Pseudo code for exercise 2.1.4
//
// Consider the problem of adding two n-bit binary integers, stored in two n-element
// arrays A and B.The sum of the two integers should be stored in binary form in
// C, an (n+1)-element array. State the problem formally and write pseudocode for
// adding the two integers.
// Link to see rules of binary addition that helped me: 
// https://www.omnicalculator.com/math/binary-addition
//
//      