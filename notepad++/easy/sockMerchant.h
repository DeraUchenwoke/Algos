#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int sockMerchant(vector<int> ar){
    int pairs[101] = {}; // pair id varies from 1 to 100 therefore index 0 to 101 required
    int num_pairs = 0; 
    
    for (int i : ar) ++pairs[i]; 
    for (int i : pairs) num_pairs += (i >> 1); // >> 1, divides num by 2;
    return num_pairs; 
}
