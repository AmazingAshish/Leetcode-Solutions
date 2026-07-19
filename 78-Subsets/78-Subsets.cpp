// Last updated: 7/19/2026, 10:24:36 PM
class Solution {
public:
    void solve(vector<int> nums,vector<int> output, int index , vector<vector<int>>&ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        solve(nums,output,index+1,ans);

        int element= nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>output;
        solve(nums,output,0,ans);
        return ans;
    }
};