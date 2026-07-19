// Last updated: 7/19/2026, 10:24:53 PM
class Solution {
public:
   void h(vector<int> nums,  vector<vector<int>> &ans, int index){
        if(index==nums.size()-1) {
          ans.push_back(nums);  
          return;
        }for(int i=index;i<nums.size();i++){
            cout<<index<<" "<<i<<endl;
            swap(nums[index],nums[i]);
            h(nums, ans, index+1);
            swap(nums[index],nums[i]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        h(nums, ans,index);
        return ans;
    }
};