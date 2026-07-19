// Last updated: 7/19/2026, 10:19:02 PM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0; i<n;i++){
            int num=nums[i];
            int digits=0;
            while(num){
                digits++;
                num/=10;
            }
            if(digits%2==0){
                ans++;
            }
        }return ans;
    }
};