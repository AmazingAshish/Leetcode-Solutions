// Last updated: 7/19/2026, 10:23:50 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 
        reverse(nums.begin(),nums.end());   
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};