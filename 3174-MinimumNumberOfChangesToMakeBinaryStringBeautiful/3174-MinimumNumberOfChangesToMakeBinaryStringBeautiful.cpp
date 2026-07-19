// Last updated: 7/19/2026, 10:12:14 PM
class Solution {
public:
    int minChanges(string& s) {
        return accumulate(s.begin(), s.end(), 0, [&, i=-1](int sum, auto _) mutable{
            return sum+=((++i&1))?(s[i]!=s[i-1]):0;
        });
    }
};