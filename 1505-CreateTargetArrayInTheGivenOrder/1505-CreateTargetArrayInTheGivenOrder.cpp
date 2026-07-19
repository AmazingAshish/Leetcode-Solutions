// Last updated: 7/19/2026, 10:18:32 PM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        vector<int> result;
        for(int i=0;i<index.size();++i)
            result.insert(result.begin()+index[i],nums[i]);
        return result;
    }
};