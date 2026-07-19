// Last updated: 7/19/2026, 10:18:27 PM
class Solution {
public:
    int numSteps(string s) {
        int carry = 0, steps = 0;
        for(int i = s.length() - 1; i > 0; i--) {
            if((s[i] - '0') + carry == 1) {
                steps += 2;
                carry = 1;
            } else {
                steps++;
            }
        }
        return steps + carry;
    }
};