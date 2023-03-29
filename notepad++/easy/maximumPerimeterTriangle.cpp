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

int main () {
	vector<int> s = {2,1,1}; 
	
	// Link: https://www.geeksforgeeks.org/measure-execution-time-with-high-precision-in-c-c/
	clock_t start, end; 
	
	//******************//
	start = clock(); 
	
	vector<int> result = maximumPerimeterTriangle(s); 
	
	for (int i : result) cout << i << endl;
	
	end = clock(); 
	//******************//
	
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cout << fixed << setprecision(9); 
	cout << "Time taken to compile: " << time_taken << "\n"; 
}