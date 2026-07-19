// Last updated: 7/19/2026, 10:16:47 PM
class Solution {
public:
    int secondHighest(string s) {
        int sa=-1;
        int ans=-1;
        for(int i=0; i<s.length(); i++){
            if(s[i]>='0' && s[i]<='9'){
                if(s[i]-'0'>ans){
                    sa=ans;
                    ans=s[i]-'0';
                }else if(s[i]-'0'>sa && (s[i]-'0')!=ans){
                    sa=s[i]-'0';
                }
            }

        }
        return sa;
    }
};