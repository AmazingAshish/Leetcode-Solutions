// Last updated: 7/19/2026, 10:18:40 PM
class Solution {
public:
    int smallerCount(vector<int> &nums, int size , int target){
        int count = 0;
        for(int i = 0 ;i < size ; i++){
            if(target > nums[i]){
                count++;
            }
        }
        
        return count;
    }
    
    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int size = nums.size();
        for(int i = 0 ;i < size ; i++){
            ans.push_back(smallerCount(nums,size,nums[i]));
        }
        return ans;
    }
};