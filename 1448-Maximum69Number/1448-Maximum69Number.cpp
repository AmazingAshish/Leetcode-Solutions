// Last updated: 7/19/2026, 10:18:53 PM
class Solution {
public:
    int maximum69Number (int num) {
        // 669 ans=0
        // 669 -> 6-> 9 break;
        // i=0 969 ans = 969 -> 669
        // i=1 699 

        string s = to_string(num);
        for(int i=0; i<s.length(); i++){
           if(s[i]=='6'){
            s[i]='9';
            break;
           }
        }
        return stoi(s);
    }
};