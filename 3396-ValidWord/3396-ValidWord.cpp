// Last updated: 7/19/2026, 10:11:37 PM
class Solution {
public:
    bool isValid(string word) {
        int con = 0, vov = 0;

        if (word.length() < 3) 
            return false;

        for (int i = 0; i < word.length(); i++) {
            if (!isalnum(word[i])) {
                return false;  // Invalid character
            }
            if (isalpha(word[i])) {
                char ch = tolower(word[i]);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vov++;
                } else {
                    con++;
                }
            }
        }
        if (vov == 0 || con == 0)
            return false;
        return true;
    }
};
