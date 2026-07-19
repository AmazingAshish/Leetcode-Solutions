// Last updated: 7/19/2026, 10:25:05 PM
class Solution {
public:
    int search(vector<int>& nums, int t) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==t) return i;
        }
        return -1;
        
    }
};