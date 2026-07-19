// Last updated: 7/19/2026, 10:23:59 PM
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while (columnNumber > 0) {
            columnNumber--;
            result = char(columnNumber % 26 + 'A') + result;
            columnNumber /= 26;
        }
        return result;
    }
};