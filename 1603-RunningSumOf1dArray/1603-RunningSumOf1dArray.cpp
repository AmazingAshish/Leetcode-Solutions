// Last updated: 7/19/2026, 10:18:07 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i=1;
        while(i<nums.size()){
            nums[i]+=nums[i-1];
            i++;
        }return nums;
    }
};