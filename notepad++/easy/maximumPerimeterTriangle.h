#pragma once 

#include <bits/stdc++.h>

using namespace std;

vector<int> maximumPerimeterTriangle(vector<int> sticks) {
	// Avoids having to do additional checks: 
	// The longest side is already sorted. 
	// The shortest side of the same perimeter is also already sorted.
	vector<int> result(3); 
	vector<int> degenerate_triangle = {-1}; 
	
	sort(sticks.rbegin(), sticks.rend()); 
	
	for (int i = 0; i < sticks.size()-2; ++i)  {
		if (sticks[i+1] + sticks[i+2] > sticks[i]) {
			result[0] = sticks[i+2];
			result[1] = sticks[i+1]; 
			result[2] = sticks[i]; 
			return result; 
		}
	}
	return degenerate_triangle;
}