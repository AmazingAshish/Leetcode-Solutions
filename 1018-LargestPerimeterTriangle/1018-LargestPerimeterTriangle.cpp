// Last updated: 7/19/2026, 10:20:13 PM
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            if(nums[n-i-1]<nums[n-i-2]+nums[n-i-3]){
                ans=nums[n-i-1]+nums[n-i-2]+nums[n-i-3];
                break;
            }
        }return ans;
    }
};