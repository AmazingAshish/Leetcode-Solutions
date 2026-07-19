// Last updated: 7/19/2026, 10:17:00 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=gain[0];
        for(int i=1; i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
             maxi=max(maxi,gain[i]);
        }if (maxi<0) return 0;
        return maxi;
    }
};