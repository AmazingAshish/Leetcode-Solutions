// Last updated: 7/19/2026, 10:20:34 PM
class Solution {
public:
    // bool inc(vector<int>& nums){
    //     for(int i=0; i<nums.size()-1; i++){
    //         if(nums[i]>nums[i+1]){
    //             return 0;
    //         }
    //     }return 1;
    // }
    // bool dec(vector<int>& nums){
    //     for(int i=0; i<nums.size()-1; i++){
    //         if(nums[i]<nums[i+1]){
    //             return 0;
    //         }
    //     }return 1;
    // }
    bool isMonotonic(vector<int>& nums) {
        bool dec=1,inc=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]){
                dec=0;
            }else if(nums[i]<nums[i+1]){
                inc=0;
            }
        }
        return dec||inc;

    }
};