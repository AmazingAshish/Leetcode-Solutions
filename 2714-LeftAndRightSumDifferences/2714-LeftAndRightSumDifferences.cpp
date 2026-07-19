// Last updated: 7/19/2026, 10:12:59 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n= nums.size();
        vector<int>left;
        vector<int>right(n);
        int leftsum=0,rightsum=0;
        
        for(int i=0; i<n; i++){
            left.push_back(leftsum);
            leftsum+=nums[i];
            right[n-i-1]=rightsum;
            rightsum+=nums[n-i-1];
        }
        for(int i=0; i<n; i++){
            nums[i]=abs(right[i]-left[i]);
        }
        return nums;
    }
};