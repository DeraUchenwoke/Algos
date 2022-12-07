# include <iostream>
# include <map>
# include <unordered_map>
# include <vector>
# include <iomanip>
# include <../Leetcode/isomorphicStrings.h>

using namespace std;

int main() {

    
    string s = "babbbbbbbbbbccbbbaaaaaab";
    string t = "babbbbbbbbbbddbbbaaaaaab";
    // Passed all Leetcode test cases!
    // Time complexity = O(N), Space complexity = O(N)
    cout << isIsomorphic(s, t) << endl;

    return 0;
}
