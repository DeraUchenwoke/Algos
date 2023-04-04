#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int minimumAbsoluteDifference(vector<int> arr) {
	// simple way (On^2)
	int diff = INT_MAX;
	int n = arr.size(); 
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (j != i) diff = min(diff, abs(arr[i] - arr[j])); 
			else continue; 
		}
	}
	
	// using sorting (Onlogn + On)
	int diff = INT_MAX;
	int n = arr.size(); 
	
	sort(arr.begin(), arr.end()); 
	for (int i = 0; i < n-1; ++i) {
		diff = min(diff, abs(arr[i+1] - arr[i]));  
	}
	
	return diff; 
}