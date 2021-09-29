#pragma once
#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std; 

int firstDuplicate(vector<int>& a) {

    unordered_map<int, int> freq;
    int count = 0;
    vector<int> dup;

    for (int i = 0; i < a.size(); i++) {

        // counts the number of times of other times a number appears.
        count = freq[a[i]]++;

        // If theres a duplicate count = 1, if more duplicate count > 1. 
        if (count >= 1)
        {
            dup.push_back(i);
        }
    }

    int min = 0;

    // If the array is not empty i.e., no duplicates then return the minimum element. 
    if (!empty(dup))
    {
        // Find the minimum element of an unordered vector in linear time. 
        min = *min_element(dup.begin(), dup.end());
    }

    else
    {
        // No duplicates always returns -1; 
        return  -1;
    }

    return a[min];
}