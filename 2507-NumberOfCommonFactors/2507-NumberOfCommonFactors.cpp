// Last updated: 7/19/2026, 10:13:54 PM
class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt=0;
        int mini=min(a,b);
        int i=1;
        while(i<=mini){
            if(a%i==0 && b%i==0){
                ++cnt;
            }i++;
        }return cnt;
    }
};