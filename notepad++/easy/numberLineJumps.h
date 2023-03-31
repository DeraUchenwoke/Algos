#pragma once 

#include <bits/stdc++.h>

using namespace std; 

string kangaroo(int x1, int v1, int x2, int v2) {
    // (rate: 4, 3) -> 4n + 2 = 3n + 1
   double diff_rate = v1 - v2; 
   double diff_loc = x2 - x1; 
   
   // needed to check if the number is whole 
   double res_dbl = diff_loc / diff_rate; 
   int res_int = diff_loc / diff_rate; 
   
   // checks if the number is positive
   return (res_dbl == res_int) && res_int > 0 ? "YES" : "NO"; 
}