// Last updated: 7/19/2026, 10:23:40 PM
class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        vector<bool>prime(n+1,true);
        prime[1]=0;
        for(int i=2; i<n;i++){
            if(prime[i]) count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=0;
            }
        }return count;
    }
};