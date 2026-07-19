// Last updated: 7/19/2026, 10:25:13 PM
class Solution {
public:
    bool isValid(string s) {
        return helper(s, 0, s.size());
    }

    bool helper(const string& s, int start, int end) {
        if (start == end) return true;
        if (end - start < 2) return false;

        char open = s[start], close;
        if (open == '(') close = ')';
        else if (open == '{') close = '}';
        else if (open == '[') close = ']';
        else return false;

        int count = 0;
        for (int i = start; i < end; i++) {
            if (s[i] == open) count++;
            else if (s[i] == close) count--;
            if (count == 0)
                return helper(s, start + 1, i) && helper(s, i + 1, end);
        }
        return false;
    }
};
