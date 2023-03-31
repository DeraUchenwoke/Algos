#pragma once 

#include <bits/stdc++.h>

using namespace std; 

vector<int> rotateLeft(int d, vector<int> arr) {
	// Index pattern: 
	// 0 1 2 3 4
	// 3 4 0 1 2 
	
	int n = arr.size(); 
	vector<int> res(n); 
	
	for (int i = 0; i < n; ++i){
		if (i < d) res[i + (n - d)] = arr[i]; 
		else res[i - d] = arr[i]; 
	} 
	return res; 
}