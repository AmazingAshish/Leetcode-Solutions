// Last updated: 7/19/2026, 10:24:04 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n=nums.size();
    int maxi=nums[0];
    int pre=1, suff=1;
    for(int i=0;i<nums.size();i++) {
        if(pre==0) pre=1;
        if(suff==0) suff=1;
        pre*=nums[i];
        suff*=nums[n-1-i];
        maxi=max(maxi,max(pre,suff));
    }
    return maxi;
    
}
    
};