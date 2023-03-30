#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int pageCount(int n, int p) {
    int distance_from_front = p - 1; 
    int distance_from_back = 0; 
    
    // modulo of 2 => n & (x - 1) where x = power of 2.
    if ((n & 1) == 0) distance_from_back = n - p; 
    else distance_from_back = n - p - 1; 
    
    if (distance_from_front < distance_from_back) {
        distance_from_front = (distance_from_front + 1) >> 1;
        return distance_from_front; 
    }
    
    distance_from_back = (distance_from_back + 1) >> 1;
    return distance_from_back; 
}