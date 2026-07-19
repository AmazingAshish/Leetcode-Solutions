// Last updated: 7/19/2026, 10:24:12 PM
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for (int i : nums) {
            mpp[i]++;
        }

        for (auto it : mpp) {
            if (it.second == 1) {
                return it.first;
            }
        }

        return -1; 
    }
};