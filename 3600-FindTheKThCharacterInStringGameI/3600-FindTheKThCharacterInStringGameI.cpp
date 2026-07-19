// Last updated: 7/19/2026, 10:11:17 PM
class Solution {
public:
        char kthCharacter(int k) {
        return 'a' + __builtin_popcount(k - 1);
    }
};