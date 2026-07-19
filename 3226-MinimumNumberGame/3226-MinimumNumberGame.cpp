// Last updated: 7/19/2026, 10:12:02 PM
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i+=2){
            swap(nums[i],nums[i-1]);
        }
        return nums;
    }
};