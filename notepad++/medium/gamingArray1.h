#pragma once 

#include <bits/stdc++.h>

using namespace std; 

string gamingArray(vector<int> arr) {
    
    // Explained by 'mohdt786'. 
    // Keep track of maximum in the opposite direction (left to right)
    
    int max_num = 0; // since minimum number >= 1
    int turns = 0; 
    
    for (int a : arr) {
        if (a > max_num) {
            max_num = a; 
            ++turns; 
        }
    }
    
    return (turns & 1) == 0 ? "ANDY" : "BOB"; 
}
