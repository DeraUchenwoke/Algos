#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int pickingNumbers(vector<int> a) {
    int n = a.size(); 
    int freq[101] = {}; 
    int max_seq = 0; 
    
    // NOT CONTINGUOUS JUST SUBSEQUENCE IN ORDER (FREQ ARRAY)
    
    // Search "janvichitroda" in discussion 
    // Uses frequency array 
    // Index: [0, 1, 2, 3, 4, 5]
    // Array: [0, 2, 2, 0, 2, 3] // frequency 
    
    for (int i : a) {
        ++freq[i]; 
    }
    
    for (int i = 0; i < n-1; ++i) {
        max_seq = max(max_seq, (freq[i] + freq[i+1]));
    }
    
    return max_seq; 
}