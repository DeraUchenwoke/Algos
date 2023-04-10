#pragma once 

#include <bits/stdc++.h>

using namespace std; 

int formingMagicSquare(vector<vector<int>> s) {
    // Only 8 possible magic squares
    
    constexpr int magic_squares[8][9] = {
        {8, 1, 6, 
         3, 5, 7, 
         4, 9, 2},
         
        {6, 1, 8, 
         7, 5, 3, 
         2, 9, 4},
         
        {4, 9, 2, 
         3, 5, 7, 
         8, 1, 6},
         
        {2, 9, 4, 
         7, 5, 3, 
         6, 1, 8},
         
        {8, 3, 4, 
         1, 5, 9, 
         6, 7, 2},
         
        {4, 3, 8, 
         9, 5, 1, 
         2, 7, 6},
        {
         6, 7, 2,
         1, 5, 9,
         8, 3, 4   
        },
        {2, 7, 6, 
         9, 5, 1, 
         4, 3, 8}
    };
    
    // ALTERNATIVE WAY ITERATE THROUGH 1D WITH A 2D ARRAY: 
    // for (int i = 0, index = 0; i < 3; ++i) {
    //     for (int j = 0; j < 3; ++j, ++index) {
    //         cout << "i: " << i << ", j: " << j << ", index: " << index << endl; 
    //     }
    // }
    
    int min_cost = INT_MAX;  

    for (int i = 0; i < 8; ++i) {
        
        int sum = 0; // of the absolute differences of every cell against the cells of the magic square. 
        int k = 0; 
        
        for (int j = 0; j < 9; ++j) {
            if (j % 3 == 0 && j != 0) ++k; 
            sum += abs(magic_squares[i][j] - s[k][j % 3]); 
            // cout << "k: " << k << ", j % 3: " << j % 3 << endl;
        }
        min_cost = min(min_cost, sum); 
    }
    return min_cost;
}