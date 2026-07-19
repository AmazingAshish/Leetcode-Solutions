// Last updated: 7/19/2026, 10:16:35 PM
class Solution {
public:
    int arraySign(vector<int>& nums) {
        double sum=1;
        for(int i=0;i<nums.size();i++){
            sum=sum*nums[i];

        }
       
         if(sum>0) return 1;
         if(sum<0) return -1;
         return 0;
    }
};