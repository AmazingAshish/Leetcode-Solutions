// Last updated: 7/19/2026, 10:18:11 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m= nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};