#pragma once

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<char, char> makeMap(string a, string b) {
    unordered_map<char, char> m;
    // map t to s
    for (int i = 0; i < a.size(); ++i) {
        m[a[i]] = b[i];
    }
    return m;
}

bool isIsomorphic(string s, string t) {

    string new_s;
    string new_t;

    unordered_map<char, char> mapped_to_s = makeMap(s, t);
    unordered_map<char, char> mapped_to_t = makeMap(t, s);

    for (int i = 0; i < s.size(); ++i) {
        if (mapped_to_s.find(s[i]) != mapped_to_s.end()) {
            char new_t = mapped_to_s[s[i]];
            if (new_t != t[i]) {
                return false;
                break;
            }
        }

        if (mapped_to_t.find(t[i]) != mapped_to_t.end()) {
            char new_s = mapped_to_t[t[i]];

            if (new_s != s[i]) {
                return false;
                break;
            }
        }
    }

    return true;

}


