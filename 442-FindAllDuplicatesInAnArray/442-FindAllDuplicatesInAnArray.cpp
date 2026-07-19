// Last updated: 7/19/2026, 10:22:33 PM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        vector<int> cnt(nums.size()+1,0);
        for(int i:nums){
            cnt[i]++;

        }
        for(int j=0;j<cnt.size();j++){
            if(cnt[j]==2){
                ans.push_back(j);
            }
        }
        return ans;
    }
};