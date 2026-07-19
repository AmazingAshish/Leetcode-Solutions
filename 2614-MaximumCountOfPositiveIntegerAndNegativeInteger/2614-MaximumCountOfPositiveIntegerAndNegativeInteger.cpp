// Last updated: 7/19/2026, 10:13:21 PM
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<0){
                a++;
            }
            else if(nums[i]>0){
                b++;
            }
        }return max(a,b);
    }
};