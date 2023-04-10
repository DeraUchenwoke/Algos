#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int superDigit(string n, int k) {
    while(n.size() >= 1) {
        long long int sum = 0; // WATCH OUT FOR BIG NUMBERS
        for (int i = 0; i < n.size(); ++i) {
            sum += (n[i] - '0') * k; // 9758 9758 9758 9758
        }
        n = to_string(sum);
        k = 1; // after the intial concatenation 
        if (n.size() == 1) break; 
    }
    return stoi(n); 
}
