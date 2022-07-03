#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

// Calculates the smallest largest and smallest of n-1 values of an array. 
// I.e., arr = {42, 3, 82, 91, 10} -> minSum = 3 + 10 + 42 + 82 = 137 & maxSum = 91 + 82 + 42 + 10 = 225
// I.e., arr = {3, 3, 91, 10, 82} -> minSum = 3 + 3 + 10 + 82 = 98 & maxSum = 91 + 82 + 10 + 3 = 98; 
// Range 0 <= val <= 10^9 integers.

std::tuple<int, int> maxMinIndex(std::vector<int> arr) {

    int tempMaxIndex = 0;
    int tempMinIndex = 0;

    std::vector<int>::iterator resultMin = std::min_element(arr.begin(), arr.end());
    std::vector<int>::iterator resultMax = std::max_element(arr.begin(), arr.end());

    tempMinIndex = std::distance(arr.begin(), resultMin);
    tempMaxIndex = std::distance(arr.begin(), resultMax);

    return std::make_tuple(tempMinIndex, tempMaxIndex);
}

void minMaxSum(std::vector<int> arr) {

    int minIndex = 0;
    int maxIndex = 0;
    std::tie(minIndex, maxIndex) = maxMinIndex(arr); // Enables both values of maxMinIndex function to be returned.

    long long int sumMax = 0;
    long long int sumMin = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (i != minIndex) {
            sumMax += arr[i];
        }

        if (i != maxIndex) {
            sumMin += arr[i];
        }
    }

    std::cout << sumMin << " " << sumMax << std::endl;

    // Time complexity = O(N)
}

