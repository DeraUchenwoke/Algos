#pragma once

#include <iostream>

int tribonacci(int n) {
    if (n < 2) return n;
    if (n == 2) return 1;

    int one = 0, two = 1, three = 1;

    for (int i = three; i < n - 2; ++i) {

        int temp_3 = three; 
        three = one + two + three; 

        int temp_2 = two; 
        two = temp_3; 

        one = temp_2; 
    }

    return one + two + three;

    // Leetcode constraints: 
    // 0 <= n <= 37
    // The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1.
}
