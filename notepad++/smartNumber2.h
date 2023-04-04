#pragma once 

#include <bits/stdc++.h>

using namespace std; 

bool is_smart_number(int num) {
	
	// Square numbers all have odd factors i.e., 169 = 13, 1, 169
    int val = (int) sqrt(num);
    if(val * val == num) // modified
        return true;
    return false;
}