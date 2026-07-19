// Last updated: 7/19/2026, 10:14:52 PM
class Solution {
public:
    string removeDigit(string nums, char digit) {
        string maxi = "";
        int n = nums.size();
        for(int i = 0;i < n; i++){
            if(nums[i] == digit){
            string temp = nums;
                temp.erase(i,1);
                if(temp > maxi) maxi = temp;
            }
        }
        return maxi;
    }
};