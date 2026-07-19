// Last updated: 7/19/2026, 10:23:18 PM
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num){
            sum+=(num%10);
            num/=10;
        }
        if(sum<10)
        return sum;
        else
        return addDigits(sum);
    }
};