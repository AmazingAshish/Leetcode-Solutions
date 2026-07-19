// Last updated: 7/19/2026, 10:22:59 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return 1;
        if(n==0 || n%4!=0) return 0;
        return isPowerOfFour(n/4);
    }
};