#pragma once
#include <iostream>

using namespace std; 

bool isSubsequence(string s, string t) {
    int i = 0, j = 0, c = 0;
    int size = s.size();

    while (i < t.size()) {

        if (s[j] == t[i]) {
            ++c;
            ++j;
        }
        ++i;
    }
    if (c != s.size()) return false;
    return true;

    // Leetcode constraints:
    // 0 <= s.length <= 100
    // 0 <= t.length <= 104
    // s and t consist only of lowercase English letters.

}