// Last updated: 7/19/2026, 10:24:19 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long out = 1;
        ans.push_back(out);
        for (int i = 0; i < rowIndex; i++) {
            out=out*(rowIndex-i);
            out=out/(i+1);
            ans.push_back(out);
        }
        return ans;
    }
};
