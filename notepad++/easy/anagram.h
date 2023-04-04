#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int anagram(string s) {
	// queue => remove the value 
	
	// if odd an anagram cannot be formed by splitting
	// anagram = same letters, same length
	if ((s.size() & 1) != 0) return -1; 
	
	int n = s.size(); 
	string s1 = s.substr(0, n/2); 
	string s2 = s.substr(n/2, n);
	
	// use alphabet lookup array as explained by "etayluz"
	int a[26] = {}; 
	
	// get frequency of letters in the first half of s
	for (int i = 0; i < s1.size(); ++i) {
		a[s1[i] - 'a']++; 
	}
	
	// subtract occurence of these letters using the second half of s 
	for (int i = 0; i < s2.size(); ++i) {
		a[s2[i] - 'a']--; 
	}
	
	// sum of the negative (or positive) numbers does not matter which one
	// I used positive
	int min_changes = 0; 
	for (int i : a) {
		if (i > 0) min_changes += i;
	} 	
	
	return min_changes; 
}