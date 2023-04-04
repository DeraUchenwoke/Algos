#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
	int num = 0, lc = 0, uc = 0, sc = 0; 
	
	for (char c : password) {
		if ('!' <= c && c <= '-') ++sc; 
		if ('0' <= c && c <= '9') ++num; 
		if ('A' <= c && c <= 'Z') ++uc;
		if ('a' <= c && c <= 'z') ++lc;
	}
	// cout << lc << " " << uc << " " << num << " " << sc << endl;
	
	int char_count = 4; // number of conditions (aside from string length)
	
	if (lc != 0) --char_count; 
	if (uc != 0) --char_count; 
	if (num != 0) --char_count; 
	if (sc != 0) --char_count; 
	
	// cout << char_count << endl;
	
	// i.e., 4 (password len) + 3(number of conditions not met) = 7 (then min = 3)
	// i.e., 4 (password len) + 1(number of conditions not met) = 5, since 5 is still < 6...
	//... I need to add one more character to make 6, therefore (min = 1 + 1 = 2)
	if (password.size() + char_count < 6) {
		char_count += 6 - (password.size() + char_count); 
	}
	
	return char_count; 
}