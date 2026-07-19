// Last updated: 7/19/2026, 10:20:31 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // if(nums==0 || n==1) return nums;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0) ans.push_back(nums[i]);
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2!=0) ans.push_back(nums[i]);
        }
        return ans;
    }
};