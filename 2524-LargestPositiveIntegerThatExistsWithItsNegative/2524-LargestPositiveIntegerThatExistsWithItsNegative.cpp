// Last updated: 7/19/2026, 10:13:51 PM
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int num=-1;
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            int temp=nums[i];
            temp*=-1;
            if(mpp.find(temp)!=mpp.end()){
                num=max(num,max(nums[i],temp));
            }
        }
        return num;
    }
};