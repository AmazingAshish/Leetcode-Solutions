// Last updated: 7/19/2026, 10:16:31 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int seen = 0;
        for(char c : sentence) {
            int ci = c - 'a';
            seen = seen | (1 << ci);
        }
        return seen == ((1 << 26) - 1);
   
    }
};