#pragma once 

#include <bits/stdc++.h>

using namespace std; 

string misereNim(vector<int> s) {
    // Explained: https://en.wikipedia.org/wiki/Nim#Mathematical_theory
    // And by'itsarvindhere' and 'dmitrisanzharov'.    
    int n = s.size(); 
    
    // If all elements are 1
    int sum = 0;
    for (int i : s) sum += i; 
    if (sum == n) {
        if ((n & 1) == 0) return "First"; 
        else return "Second"; 
    } 
    
    int _xor = 0;
    for (int i = 0; i < n; ++i) {
        _xor = _xor ^ s[i]; 
    }
    
    return _xor == 0 ? "Second" : "First";  
}