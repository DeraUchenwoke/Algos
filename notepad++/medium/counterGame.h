#pragma once 

#include <bits/stdc++.h>

using namespace std; 

string counterGame(long long n) {
    long long turns = 0; 
    
    // n == 1 is the terminate condition
    while(n != 1) {
        int count = 0; 
        long long m = n;
        
        // Counted number of bits 
        // N = number of bits - 1
        // Power of 2 below and closet to n => 2^N

        while (m) {
            m >>= 1;
            ++count; 
        }
        long long pow_2 = pow(2, count - 1);
        
        // See problem statment for said conditions
        if (pow_2 == n) n /= 2; 
        else n -= pow_2; 
        
        // Count the number of reductions
        ++turns;  
    }
    return (turns & 1) == 0 ? "Richard" : "Louise"; 
}