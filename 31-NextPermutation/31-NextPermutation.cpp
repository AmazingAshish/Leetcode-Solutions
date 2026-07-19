// Last updated: 7/19/2026, 10:25:06 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int idx=-1;
        for(int i=n-1; i>=1; i--){
            if(nums[i]>nums[i-1]){
                idx=i-1;
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        reverse(nums.begin()+idx+1, nums.end());
    }
};