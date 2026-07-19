// Last updated: 7/19/2026, 10:24:43 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int pos = s.size() - 1;
        while(pos >= 0 && s[pos] == ' ') pos--;

        int result = 0;
        while(pos >= 0 && s[pos] != ' ') {
            pos--;
            result++;
        }

        return result;
    }
};