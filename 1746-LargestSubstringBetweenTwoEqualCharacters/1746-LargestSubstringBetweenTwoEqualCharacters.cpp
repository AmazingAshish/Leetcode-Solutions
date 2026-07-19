// Last updated: 7/19/2026, 10:17:25 PM
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int> pos(26,-1);
        int res = -1;
        for(int i = 0; i < s.size(); i++) {
            if(pos[s[i]- 'a'] == -1)
                pos[s[i] - 'a'] = i;
            else{
                res = max(res, i - pos[s[i] - 'a'] -1);
            }
        }
        return res;
    }
};