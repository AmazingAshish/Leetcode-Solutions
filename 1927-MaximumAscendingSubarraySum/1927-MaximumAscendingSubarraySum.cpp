// Last updated: 7/19/2026, 10:16:37 PM
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0], maxi=nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
                maxi=max(maxi,sum);
                
            }
            else sum=nums[i];
            
        }
        return maxi;
    }
};