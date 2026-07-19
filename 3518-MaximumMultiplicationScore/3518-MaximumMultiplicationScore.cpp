// Last updated: 7/19/2026, 10:11:21 PM
// dp[0][0] is necessary to indicate using zero element of a, so I change from a[j] to a[j - 1] in real code compared to the fake-code in Approach.
class Solution {
public:
    long long maxScore(vector<int>& a, vector<int>& b) {
        vector< vector<long long> > dp(b.size(), vector<long long> (5, -1));
        vector< vector<bool> > flag(b.size(), vector<bool> (5, false));
        dp[0][0] = 0;
        flag[0][0] = true;
        dp[0][1] = 1LL * a[0] * b[0];
        flag[0][1] = true;
        for(int i = 1; i < b.size(); ++i) {
            dp[i][0] = 0;
            flag[i][0] = true;
            for(int j = 1; j < 5; ++j) {
                if (flag[i - 1][j - 1] == true){ // if flag[i - 1][j - 1] is valid
                    dp[i][j] = dp[i - 1][j - 1] + 1LL * b[i] * a[j - 1]; // situation 1: make b[i] match a[j - 1] 
                    flag[i][j] = true;
                }
                if (flag[i - 1][j] == true) { // if flag[i - 1][j] is valid
                    if(flag[i][j] == 0) {
                        dp[i][j] = dp[i - 1][j];  // situation 2: don't make b[i] match a[j - 1]
                        flag[i][j] = true;
                    } else {
                        dp[i][j] = max(dp[i][j], dp[i - 1][j]); // situation 2: don't make b[i] match a[j - 1]
                    }
                }
            }
        }
        return dp[b.size() - 1][4]; 
    }
};