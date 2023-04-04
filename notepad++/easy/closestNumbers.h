#pragma once 

#include <bits/stdc++.h>

using namespace std; 


vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end()); 
    // assume absolute difference
    vector<int> res;
    
    int n = arr.size(); 
    int min_diff = abs(arr[0] - arr[1]); // always at least 2 numbers
    
    for (int i = 0; i < n-1; ++i) {
        int diff = abs(arr[i] - arr[i+1]); 
        
        if (diff < min_diff) {
            min_diff = diff; // update min_diff with new min
            
            res.clear(); // removes the elements
            res.shrink_to_fit(); // frees memory 
            
            res.push_back(arr[i]); 
            res.push_back(arr[i+1]); 
        }
        
        else if (diff == min_diff) {
            res.push_back(arr[i]); 
            res.push_back(arr[i+1]); 
        }
    }
    return res;
}