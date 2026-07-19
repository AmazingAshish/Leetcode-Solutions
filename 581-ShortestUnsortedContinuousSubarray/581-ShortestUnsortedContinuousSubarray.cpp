// Last updated: 7/19/2026, 10:22:00 PM
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

        int n = nums.size();
        int e = 0;
        int maxi = nums[0];
        for(int i=1; i<n; ++i){
            if(nums[i]<maxi) e = i;
            else maxi = nums[i];
        }

        int s = 1;     // taken 1 because return 0-1+1 = 0 when already sorted
        int mini = nums.back();
        for(int i=n-2; i>=0; --i){
            if(nums[i] > mini) s = i;
            else mini = nums[i];
        }
        //cout<<s<<" "<<e<<endl;
        return e-s+1;
    }
};