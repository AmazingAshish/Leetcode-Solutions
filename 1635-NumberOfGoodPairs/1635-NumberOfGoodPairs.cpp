// Last updated: 7/19/2026, 10:17:55 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int i=0,n=nums.size(),a=0;
       
        while(i<n){
            int j=0;
            while(j<n){
                if(nums[i] == nums[j] and i < j){
                    a++;
                }
                j++;
            }
            i++;
        }return a;
    }
};