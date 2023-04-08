#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int sansaXor(vector<int> arr) {
	// See 'hell_io' for explanation.
	// Rules:
	// If length of array is even then result is always 0. 
	// Otherwise compute the cumulative XOR at the even indices.
	
	int res = 0; 
	int n = arr.size(); 
	
	// This cumulative XOR only works if arr.size() is odd.
	for (int i = 0; i < n; i+=2) res = res ^ arr[i]; 
	
	return (arr.size() & 1) == 0 ? 0 : res; 
	
}