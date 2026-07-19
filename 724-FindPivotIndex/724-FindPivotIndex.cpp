// Last updated: 7/19/2026, 10:21:29 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int nextSum = 0, prevSum = 0, x=nums.size();
        for(int i=0;i<x;i++){
            nextSum += nums[i];
        }
        for(int i=0;i<x;i++){
            nextSum -= nums[i];
            if(i>0){
                prevSum += nums[i-1];
            }
            if(nextSum==prevSum){
                return i;
            }
        }
        return -1;
    }
};