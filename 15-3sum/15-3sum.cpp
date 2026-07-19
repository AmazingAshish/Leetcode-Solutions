// Last updated: 7/19/2026, 10:25:17 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        set<vector<int>> set;
        for(int i=0; i<n-2; i++){
            int j=i+1,k=n-1;
            while(j<k && i<j && i<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    set.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        for(auto it : set){
            ans.push_back(it);
        }
        return ans;
    }
};