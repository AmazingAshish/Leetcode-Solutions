// Last updated: 7/19/2026, 10:15:07 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n;i++){
            for(int j=1;j<n;j++){
                if(i<j and nums[i] == nums[j] and (i * j)%k==0){
                    count++;
                }
            }
        }return count;
    }
};