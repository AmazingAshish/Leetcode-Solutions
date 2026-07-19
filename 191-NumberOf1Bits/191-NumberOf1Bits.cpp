// Last updated: 7/19/2026, 10:23:47 PM
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n!=0){
           if(n&1) cnt++;
           n=n>>1;
        }return cnt;
    }
};