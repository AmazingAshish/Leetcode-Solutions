// Last updated: 7/19/2026, 10:13:17 PM
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>nums;
        while(n!=0){
            int l=n%10;
            nums.push_back(l);
            n/=10;
        }
        int sum=0;
        reverse(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i%2!=0) sum-=nums[i];
            else sum+=nums[i];
        }
        return sum;
    }
};