#pragma once 

#include <bits/stdc++.h>

using namespace std; 

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
	int freq[20000] = {}; 
	
	for (int i : arr) ++freq[i]; 
	for (int i : brr) --freq[i]; 
	
	set<int> st; 
	for (int i = 0; i < 20000; ++i) {
		if (freq[i] < 0) st.insert(i); 
	}
	
	vector<int> res; 
	for (int i : st) res.push_back(i); 
	return res; 
}