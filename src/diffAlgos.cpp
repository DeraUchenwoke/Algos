#include <iostream>
#include "../include/insertSort.h"
#include "../include/bubbleSort.h"

int main() {

	// Algo 1: insertSort
	int a[5] = { 4, 1, 3, 2, 5 }; 
	insertSort(a);

	// Algo 2: bubbleSort 
	std::vector<int> b = { -5, 8, 2, -3, 4, 100 }; 
	// bubbleSort(b); 

}