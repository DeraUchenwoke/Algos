#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int maxMin(int k, vector<int> arr) {
    // sliding window (at min and max): j = min, i = max pointer
	// compare all possible values 
	
	sort(arr.begin(), arr.end()); 
	int n = arr.size(); 
	int j = 0; 
	int _min = INT_MAX; 
	
	for (int i = k - 1; i < n; ++i, ++j) {
		_min = min(_min, (arr[i] - arr[j])); 
	}
	
	return _min; 
}