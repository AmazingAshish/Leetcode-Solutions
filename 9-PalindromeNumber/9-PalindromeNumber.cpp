// Last updated: 7/19/2026, 10:25:20 PM
class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        unsigned int sum=0;
        while(x>0){
            sum=x%10+sum*10;
            x=x/10;
        }if(sum==temp) return 1;
    return 0;
    }
};