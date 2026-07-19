// Last updated: 7/19/2026, 10:15:57 PM
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=1; j<n ; j++){
                if (i<j and ((nums[i] - nums[j] == k)||(nums[j] - nums[i] == k)) ){
                    count++;
                }
            }
        }return count;
    }
};