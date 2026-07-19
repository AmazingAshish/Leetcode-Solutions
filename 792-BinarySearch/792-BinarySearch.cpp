// Last updated: 7/19/2026, 10:21:11 PM
class Solution {
public:
    int bs(vector<int> nums, int target, int low, int high){
        if(low>high){
            return -1;
        }
        int mid= (low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) return bs(nums,target, mid+1, high);
        return bs(nums,target, low, mid-1 );
    }
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        return bs(nums,target, low,high);
    }
};