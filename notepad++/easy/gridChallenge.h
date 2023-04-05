#pragma once 

#include <bits/stdc++.h>

using namespace std; 

string gridChallenge(vector<string> grid) {
    
    for (int i = 0; i < grid.size(); ++i) {
        sort(grid[i].begin(), grid[i].end()); 
    }
    
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size()-1; ++j) {
            // iterate through each column
            if (grid[j+1][i] < grid[j][i]) return "NO";
        }
    }
    return "YES"; 
}