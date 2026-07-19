// Last updated: 7/19/2026, 10:23:19 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26] = {0};
        for (char c : s) {
            hash[c - 'a']++;
            }
        for (char c : t) {
            hash[c - 'a']--;
        }
        for (int count : hash) {
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
};