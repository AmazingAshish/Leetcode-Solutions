// Last updated: 7/19/2026, 10:18:03 PM
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>SubSum;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum+=nums[j];
                SubSum.push_back(sum);
            }
        }
        sort(SubSum.begin(),SubSum.end());
        int ans=0;
        const int mod = 1e9 + 7;
        for(int i=left-1; i<right; i++){
            ans = (ans + SubSum[i]) % mod;
        }
        return ans;
    }
};