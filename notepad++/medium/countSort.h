#pragma once 

#include <bits/stdc++.h>

using namespace std; 

void countSort(vector<vector<string>> arr) {
    // max index value 
    int row = arr.size(); 
    int max_idx = 100; 

    // define size for new helper array 
    // the 'rows' in helper represent the index i.e., arr[i][0]
    vector<vector<string>> helper(max_idx + 1); 
    
    for (int i = 0; i < row; ++i) {
        // previously i tried to use ascii however would only work if indices...
        //... ranged from 0 to 9.
        
        int arr_idx = atoi(arr[i][0].c_str()); // see basic::string members & atoi
        
        if (i < row/2) helper[arr_idx].push_back("-"); 
        else helper[arr_idx].push_back(arr[i][1]); // insert values into matching row index
    }
    
    // tests/prints out the helper array 
    for (int i = 0; i < helper.size(); ++i) {
        for (int j = 0; j < helper[i].size(); ++j) {
            cout << helper[i][j] << " ";
        }
    }
}