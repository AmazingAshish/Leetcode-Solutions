// Last updated: 7/19/2026, 10:23:49 PM
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 31; i++) {
            res = (n % 2) + res << 1;
            n >>= 1;
        }
        return res + n % 2;
    }
};