#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "bubbleSort.h"

void UniqueNumber(std::vector<int>& arr) {

	// Sort numbers so identical numbers are next to each other. 
	bubbleSort(arr); 

	// Output unique numbers only - temporarily using std::unique.
	//std::vector<int>::iterator it; 

	//arr.erase(std::unique(arr.begin(), arr.end()),  arr.end());

	// Releases memory of erased duplicates left over memory. 
	//arr.shrink_to_fit(); 
}