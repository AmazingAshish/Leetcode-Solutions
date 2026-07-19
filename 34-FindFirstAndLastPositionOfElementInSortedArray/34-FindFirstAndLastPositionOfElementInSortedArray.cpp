// Last updated: 7/19/2026, 10:25:03 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=-1,e=-1;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                if(s==-1) s=i;
                
                e=i;
            }
        }
        return {s,e};
    }
};