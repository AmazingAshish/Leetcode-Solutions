// Last updated: 7/19/2026, 10:12:23 PM
class Solution {
public:
    bool canMakeSubsequence(string source, string target) {
        int targetIdx = 0;
        int targetLen = target.length();
        for (char currChar : source) {
            if (targetIdx < targetLen && (target[targetIdx] - currChar + 26) % 26 <= 1) {
                targetIdx++;
            }
        }
        return targetIdx == targetLen;
    }
};