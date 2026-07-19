// Last updated: 7/19/2026, 10:23:03 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        const int max_pow = 1162261467;
        return n > 0 && max_pow % n == 0;
    }
};