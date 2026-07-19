// Last updated: 7/19/2026, 10:14:45 PM
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), res = 0;
        vector<long> prefix(n, 0);

        // Build the prefix sum array
        for (int i = 0; i < n; i++) {
            prefix[i] = i > 0 ? prefix[i - 1] + nums[i] : nums[i];
        }

        // Check valid splits using prefix sums
        for (int idx = 0; idx < n - 1; idx++) {
            if (prefix[idx] >= prefix[n - 1] - prefix[idx]) {
                res++;
            }
        }

        return res;
    }
};