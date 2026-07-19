// Last updated: 7/19/2026, 10:13:36 PM
// Start Of Anuj Bhati aka Edwards310's Template...
#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, c) for (int a = b; a < c; a++)
#define FOR1(a, b, c) for (int a = b; a <= c; ++a)
#define Rep(i, n) FOR(i, 0, n)

// end of Anuj Bhati's aka Edwards310's Template
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        Rep(i, n - 2){
            FOR(j, i + 1, n - 1){
                if(nums[i] != nums[j]){
                    FOR(k, j + 1, n){
                        if(nums[j] != nums[k] and nums[k] != nums[i])
                            ++cnt;
                    }
                }
            }
        }
        return cnt;
    }
};