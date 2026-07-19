// Last updated: 7/19/2026, 10:23:14 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        int total=(n*(n+1))/2;
        return total-sum;
    }
};