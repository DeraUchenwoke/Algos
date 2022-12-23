#pragma once

#include <iostream>
#include <algorithm>

using namespace std;

int minCostClimbingStairs(vector<int>& cost) {

    constexpr size_t size = 1002;
    int dp[size] = {};
    fill(dp, dp + size, 0);

    for (int i = cost.size() - 1; i >= 0; --i) {
        dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
    }

    return min(dp[0], dp[1]);

    // Leetcode constraints:
    // 2 <= cost.length <= 1000
    // 0 <= cost[i] <= 999

}