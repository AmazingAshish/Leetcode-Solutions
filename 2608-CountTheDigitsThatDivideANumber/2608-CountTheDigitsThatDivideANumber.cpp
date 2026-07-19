// Last updated: 7/19/2026, 10:13:22 PM
class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int ans=0;
        while(n!=0){
            int l=n%10;
            if(num%l==0){
                ans++;
            }
            n/=10;
        }
        return ans;
    }
};