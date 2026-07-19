// Last updated: 7/19/2026, 10:11:43 PM
class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0; i<s.length()-1; i++){
            int temp=s[i]-s[i+1];
            if(temp<0) temp*=-1;
            sum+=temp;
        }
        return sum;
    }
};