// Last updated: 7/19/2026, 10:15:16 PM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        if(num%10==0){
            return false;
        }
        return true;
    }
};