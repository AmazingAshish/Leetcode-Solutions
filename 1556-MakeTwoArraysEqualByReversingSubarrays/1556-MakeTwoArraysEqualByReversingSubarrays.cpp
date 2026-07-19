// Last updated: 7/19/2026, 10:18:17 PM
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        return is_permutation(arr.begin(), arr.end(), target.begin());
    }
};