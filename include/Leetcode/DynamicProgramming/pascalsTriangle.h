#pragma once

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generate(int numRows) {

    vector<vector<int>> pascalOne = { {1} };
    vector<vector<int>> pascal = { {1}, {1, 1} };

    if (numRows == 1) {
        return pascalOne;
    }

    if (numRows == 2) {
        return pascal;
    }

    for (int i = 2; i < numRows; ++i) { // start at row 2 since rows 0 and 1 are already initialised
        vector<int> v;
        v.push_back(1); // (left padding)

        for (int j = 2; j < i + 1; ++j) {
            v.push_back(pascal[i - 1][j - 2] + pascal[i - 1][j - 1]);
            // j = 2, i + 1 = 3 -> num of iterations (i.e. num of values to append) = 3 - 2 = 1
            // j = 2, i + 2 = 4 -> 4 - 2 = 2
            // etc...
        }

        v.push_back(1); // (right padding)
        pascal.push_back(v);
    }

    return pascal;

    // Leetcode constraints:
    // 1 <= numRows <= 30
}
