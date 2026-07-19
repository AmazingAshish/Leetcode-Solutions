// Last updated: 7/19/2026, 10:16:32 PM
class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1 ; i < s.length(); i++){
            if(isdigit(s[i])){
                s[i] = s[i-1] + (s[i] - '0') ;
            }
        }
        return s;
    }
};