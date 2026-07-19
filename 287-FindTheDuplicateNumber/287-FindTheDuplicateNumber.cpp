// Last updated: 7/19/2026, 10:23:10 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return -1;
    }
};