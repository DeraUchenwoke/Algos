#pragma once 

#include <bits/stdc++.h>

using namespace std; 

string caesarCipher(string s, int k) {
	// simple way 
	int n = s.size(); 
	
	for (int i = 0; i < n; ++i) {
		if (s[i] >= 'a' && s[i] <= 'z') { 
		// convert char to int -> perform conversion -> re-add 'a'
			s[i] = char(((int(s[i] - 'a') + k) % 26) + 'a');  
		}
		
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = char(((int(s[i] - 'A') + k) % 26) + 'A');  
		}
	}
	
	return s; 
}