#pragma once 

#include <bits/stdc++.h>

using namespace std; 

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    // Example: vector<vector<int>> minA(ROW_SIZE, vector<int>(COLUMN_SIZE, VALUE)};
    vector<vector<int>> arr(n); // initialised 2 array
    int lastAnswer = 0; 
    int m = queries.size(); // query rows
    vector<int> res; 
    
    for (int i = 0; i < m; ++i) {
        int idx = ((queries[i][1] ^ lastAnswer) % n);
        
        if (queries[i][0] == 1) {
            arr[idx].push_back(queries[i][2]); 
        }
        
        else {
            lastAnswer = arr[idx][queries[i][2] % arr[idx].size()]; 
            res.push_back(lastAnswer); 
        }
    }
    return res;
}
