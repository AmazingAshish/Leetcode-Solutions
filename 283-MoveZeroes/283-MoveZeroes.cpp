// Last updated: 7/19/2026, 10:23:11 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        while(j<n){
            nums[j++]=0;
        }
    }
};