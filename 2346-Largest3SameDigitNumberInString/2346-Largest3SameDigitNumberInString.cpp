// Last updated: 7/19/2026, 10:14:50 PM
class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        for(int i=0; i<num.length()-2; i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                string out=num.substr(i,3);
                ans=max(out,ans);
            }
        }
        return ans;
    }
};