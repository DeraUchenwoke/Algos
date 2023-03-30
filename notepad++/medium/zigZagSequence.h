#pragma once 

#include <bits/stdc++.h>

using namespace std; 

void findZigZagSequence(vector < int > a, int n){
	// Debugging problem with the following constraints: 
	// 1. Can only modify 3 lines at most. 
	// 2. Cannot add or remove lines.	
	
    sort(a.begin(), a.end());
    int mid = (n + 1)/2 - 1; // modified 
    swap(a[mid], a[n-1]);

    int st = mid + 1; 
    int ed = n - 2; // modified 
    while(st <= ed){
        swap(a[st], a[ed]);
        st = st + 1;
        ed = ed - 1; // modified 
    }
    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}