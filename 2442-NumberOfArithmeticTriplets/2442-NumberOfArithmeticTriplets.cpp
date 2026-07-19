// Last updated: 7/19/2026, 10:14:21 PM
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n; i++ ){
            for(int j=1; j<n; j++){
                for(int k=2;k<n;k++){
                    if(i<j<k and nums[j] - nums[i] == diff and nums[k] - nums[j] == diff){
                        count++;
                    }
                }
            }
            
        }return count;
    }
};