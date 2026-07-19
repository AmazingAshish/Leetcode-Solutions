// Last updated: 7/19/2026, 10:22:46 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        int n= t.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<n; i++){
            if(s[i]!=t[i]) return t[i];
        }
        return t[n-1];
    }
};