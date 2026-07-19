// Last updated: 7/19/2026, 10:13:33 PM
class Solution {
public:
    int appendCharacters(string s, string t) {
        int idx=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]==t[idx]){
                idx++;
            }
        }
        int res= t.length()-idx;
        return res;
    }
};