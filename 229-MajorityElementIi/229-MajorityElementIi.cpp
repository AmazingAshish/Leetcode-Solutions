// Last updated: 7/19/2026, 10:23:31 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    unordered_map<int,int> mp;
    vector<int> Result;
    int cnt=1;
    for(auto i: nums)
    {
        mp[i]++;
        
    }
    for(auto i:mp)
    {
        if(i.second>nums.size()/3)
            Result.push_back(i.first);
    }
    return Result;
    }
};