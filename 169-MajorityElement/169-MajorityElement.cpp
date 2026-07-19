// Last updated: 7/19/2026, 10:23:58 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int element;
        for(int i=0; i<nums.size(); i++){
            if(cnt==0){
                element=nums[i];
                cnt=0;
            }
            if(element==nums[i]){
                cnt++;
            }
            else cnt--;

        }
        return element;
    }
};