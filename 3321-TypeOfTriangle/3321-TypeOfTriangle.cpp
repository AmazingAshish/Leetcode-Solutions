// Last updated: 7/19/2026, 10:11:52 PM
class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];

        if(a + b > c && b + c > a && a + c > b) {
            if(a == b && b == c && c == a) return "equilateral";
            else if((a == b) || (b == c) || (c == a)) return "isosceles";
            return "scalene";
        }
        return "none";
    }
};