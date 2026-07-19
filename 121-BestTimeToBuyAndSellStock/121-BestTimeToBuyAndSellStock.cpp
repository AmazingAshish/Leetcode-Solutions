// Last updated: 7/19/2026, 10:24:18 PM
class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        int maxi=0;
        int mini=a[0];
        for(int i=1; i<n; i++){
            mini=min(mini,a[i]);
            maxi=max(maxi,a[i]-mini);
        }
        return maxi;
    }
};