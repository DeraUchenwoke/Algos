#pragma once 

#include <bits/stdc++.h>

using namespace std; 

long sumXor(long n) {
    // 0 = 0
    // 1 = 1
    // 2 = 10
    // 3 = 11 
    // 4 = 100 
    // 5 = 101 
    // 6 = 110
    // 10 = 1010
    
    // adding and xor (except xor is without the carry)
    // n & x = 0, then there is no carry so xor = add
    
    // Attempt 1: Time limit exceeded:
    // long count = 0; 
    // for (int i = 0; i < n; ++i) {
    //     if ((n & i) == 0) ++count; 
    // } 
    
    // Attempt 2: Accepted solution:
    // Count the number of zeros then power of two it
    int num_zeros = 0; 
    long m = n; 
    
    while (n) {
        num_zeros += (n & 1) ^ 1; 
        // (n & 1) = value of bit
        // xor 1 since if bit = 0, then xor of 0 and 1 = 1 
        n >>= 1; 
    } 
    
    long count = pow(2, num_zeros); 
    
    return m == 0 ? 1 : count; // special case is n = 0 return 1.  
    // IT WORKED!
}