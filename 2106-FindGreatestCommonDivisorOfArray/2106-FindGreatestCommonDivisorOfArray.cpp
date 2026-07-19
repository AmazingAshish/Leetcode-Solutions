// Last updated: 7/19/2026, 10:15:58 PM
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        for(int i=0; i<nums.size();i++){
            maxi=max(nums[i],maxi);
            mini=min(nums[i],mini);
        }return gcd(maxi,mini);
    }
};