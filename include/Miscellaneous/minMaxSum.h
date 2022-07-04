#pragma once
#include <iostream>
#include <vector>

// Calculates the smallest largest and smallest of n-1 values of an array. 
// I.e., arr = {42, 3, 82, 91, 10} -> minSum = 3 + 10 + 42 + 82 = 137 & maxSum = 91 + 82 + 42 + 10 = 225
// I.e., arr = {3, 3, 91, 10, 82} -> minSum = 3 + 3 + 10 + 82 = 98 & maxSum = 91 + 82 + 10 + 3 = 98; 
// Range 0 <= val <= 10^9 integers.

void minMaxSum(std::vector<int> arr) {

    long long int Max = arr[0];
    long long int Min = arr[0];
    long long int MaxSum = 0; 
    long long int MinSum = 0;
    long long int Total = 0;

    for (int val = 0; val < arr.size(); val++) { 

        if (arr[val] > Max) {
            Max = arr[val];
        }

        else if (arr[val] < Min) {
            Min = arr[val]; 

        }
        Total += arr[val];
    }

    MinSum = Total - Max; 
    MaxSum = Total - Min; 

    std::cout << MaxSum << " " << MinSum << std::endl;

    
}

