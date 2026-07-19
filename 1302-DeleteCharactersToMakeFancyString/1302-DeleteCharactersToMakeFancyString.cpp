// Last updated: 7/19/2026, 10:19:25 PM
class Solution {
public:
    string makeFancyString(string s) {
        int cnt=0;
        int n=s.length();
        for(int i=1; i<n-1; i++){
            if(s[i]==s[i+1] && s[i]==s[i-1]){
                s[i-1]='0';
            }
        }
        string out="";
        for(auto it:s){
            if(it!='0'){
                out+=it;
            }
        }
        return out;
    }
};