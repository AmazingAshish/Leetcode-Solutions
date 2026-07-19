// Last updated: 7/19/2026, 10:20:29 PM
class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, close = 0;
        for (auto c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open > 0)
                    open--;
                else
                    close++;
            }
        }
        return open + close;
    }
};