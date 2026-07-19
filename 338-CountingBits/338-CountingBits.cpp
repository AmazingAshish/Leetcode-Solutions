// Last updated: 7/19/2026, 10:23:00 PM
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        for(int i=0; i<=n; i++){
            long long count=0, j=i;
            while(j!=0){
                j&=(j-1);
                count++;
            }
            ans[i]=count;
        }return ans;
    }
};