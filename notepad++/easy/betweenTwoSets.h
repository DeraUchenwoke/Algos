#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int getTotalX(vector<int> a, vector<int> b) {
	
	// std::lcm and std::gcd available in C++17 onwards
	
	// iteratively compute the LCM in array 'a' 
	int _lcm = a[0]; 
	for (int i = 1; i < a.size(); ++i) {
		_lcm = lcm(a[i], _lcm); 
	}
	
	// iteratively compute the GCD/HCF in array 'b'
	int _hcf = b[0]; 
	for (int i = 1; i < b.size(); ++i) {
		_hcf = gcd(b[i], _hcf); 
	}
	
	// User: "Worldfrom6feet" => For explanation
	int count = 0; 
	for (int i = _lcm; i <= _hcf; i += _lcm) {
		if (_hcf % i == 0) ++count;
	}
	return count; 
}