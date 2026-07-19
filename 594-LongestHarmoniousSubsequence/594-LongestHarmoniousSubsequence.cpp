// Last updated: 7/19/2026, 10:21:56 PM
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        int ans = 0;
        for (auto [key, val] : count) {
            if (count.find(key + 1) != count.end()) {
                ans = max(ans, val + count[key + 1]);
            }
        }
        return ans;
    }
};
