// Last updated: 7/19/2026, 10:18:18 PM
class Solution {
public:
    int ans = 0;
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            int val = arr[i];
            for (int k = i+1; k < n; ++k) {
                val ^= arr[k];
                if (val == 0) {
                    ans += k-i;
                }
            }
        }
        return ans;
    }
};