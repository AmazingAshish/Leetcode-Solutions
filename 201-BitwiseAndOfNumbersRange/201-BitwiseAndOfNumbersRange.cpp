// Last updated: 7/19/2026, 10:23:42 PM
class Solution {
public:
    // time/space: O(log(min(m, n)))/O(1)
    int rangeBitwiseAnd(int left, int right) {
        int m = left, n = right;
        int shift = 0;
        while (m != n) {
            m >>= 1, n >>= 1;
            shift++;
        }
        return (m << shift);
    }
};