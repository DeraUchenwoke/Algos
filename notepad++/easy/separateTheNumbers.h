#pragma once 

#include <bits/stdc++.h>

using namespace std; 

void separateNumbers(string s) {
    // For explanation: https://www.youtube.com/watch?v=q9d7MZpuWSE
	// & 'Skandan_CS24_121' 
    // 91011
    // 0123
    int n = s.size(); 
    string a, b; 
    long num; 
    
    for (int i = 0; i < n/2; ++i) {
        a.push_back(s[i]); 
        b = a; // as 'a' will change size
        num = stol(a); // convert 'a' to int to add to
        
        // build a potential match string at each possible start sequence
        while (b.size() < s.size()) { // breaks when string size of permutation is greater than or equal
            string temp = to_string(++num); 
            b += temp; // 910, 91011
        }
        
        if (b == s) break; 
    }
    
    if (b == s) cout << "YES " << a << " " << "\n"; 
    else cout << "NO" << "\n"; 
}