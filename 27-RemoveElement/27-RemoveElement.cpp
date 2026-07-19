// Last updated: 7/19/2026, 10:25:10 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=val){
                nums[j++]=nums[i];
            }
        }
        return j;
    }
};