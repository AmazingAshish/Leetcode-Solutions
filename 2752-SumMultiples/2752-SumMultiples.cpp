// Last updated: 7/19/2026, 10:12:53 PM
class Solution {
public:
    int sumOfMultiples(int n) {
        int ans = 0;
        for(int i = 3; i <= n; i++){
            if(((i%3)==0)||((i%5)==0)||((i%7)==0))ans += i;
        }
        return ans;
    }
};