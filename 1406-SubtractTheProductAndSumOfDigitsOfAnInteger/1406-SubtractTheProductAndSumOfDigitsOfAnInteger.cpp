// Last updated: 7/19/2026, 10:19:05 PM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,result,digit;
        while(n!=0){
            digit=n%10;
            sum=sum+digit;
            product=product*digit;
            n=n/10;
        }result= product - sum;
        return result;
    }
};