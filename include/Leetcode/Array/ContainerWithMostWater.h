#pragma once

#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size() - 1;
    int l = 0;
    int r = n;
    int maxArea = 0;

    while (l <= n && r >= 0) {
        int currArea = min(height[l], height[r]) * (r - l);
        if (currArea > maxArea) {
            maxArea = currArea;
        }

        if (max(height[l], height[r]) == height[r]) ++l;
        else --r;
    }
    return maxArea;

    // Leetcode constraints:
    // n == height.length
    // 2 <= n <= 105
    // 0 <= height[i] <= 104

}