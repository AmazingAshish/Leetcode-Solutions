// Last updated: 7/19/2026, 10:13:12 PM
class Solution {
public:
    int passThePillow(int n, int time) {
        int N=2*n-2, x=time%N;
        return 1+((x<n)?x:N-x);
        
    }
};