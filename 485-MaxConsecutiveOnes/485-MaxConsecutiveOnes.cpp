// Last updated: 7/19/2026, 10:22:26 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                cnt= cnt+1;
                ans= max(cnt, ans);
            }
            else{
                ans= max(cnt, ans);
                cnt=0;
            }
            
        }
        return ans;
    }
};