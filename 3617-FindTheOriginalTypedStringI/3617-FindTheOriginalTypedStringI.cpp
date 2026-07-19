// Last updated: 7/19/2026, 10:11:14 PM
class Solution {
public:
    int possibleStringCount(string word) {
        int cnt=1;
        for(int i=1; i<word.length(); i++){
            if(word[i]==word[i-1]) cnt++;
        }
        return cnt;
    }
};