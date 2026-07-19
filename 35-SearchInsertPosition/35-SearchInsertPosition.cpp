// Last updated: 7/19/2026, 10:25:02 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ind=nums.size();
        int low=0, high= nums.size()-1;
        while(low<=high){
            int mid= high - (high-low)/2;
            
            if(nums[mid]>=target){
                ind=mid;
                high= mid-1;
            }
            else low= mid+1;
        }
        
        return ind;
    }
};