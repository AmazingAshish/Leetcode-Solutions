// Last updated: 7/19/2026, 10:12:46 PM
class Solution {
public:
    static bool doesValidArrayExist(vector<int>& derived) {
        return accumulate(derived.begin(), derived.end(), 0, bit_xor<>())==0;
    }
};