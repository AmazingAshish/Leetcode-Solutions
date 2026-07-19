// Last updated: 7/19/2026, 10:15:03 PM
class Solution {
public:
    bool possible(vector<int>& bt, int nt, long long tt) {
        for (int t : bt) {
            long long ct = tt / t;
            if (nt <= ct) return true;
            nt -= ct;
        }
        return false;
    }
    long long minimumTime(vector<int>& bt, int nt) {
        int n = bt.size();
        long long l = 0;
        long long r = bt[0] * (long long) nt;
        
        while (l < r) {
            long long tt = l + (r - l) / 2;
            if (possible(bt, nt, tt)) r = tt;
            else l = tt + 1;
        }
        return l;
    }
};