// Last updated: 7/19/2026, 10:24:16 PM
#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }
        
        string reversed = filtered;
        reverse(reversed.begin(), reversed.end());
        
        return filtered == reversed;
    }
};
