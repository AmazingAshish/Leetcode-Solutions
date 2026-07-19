// Last updated: 7/19/2026, 10:12:00 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        int maxi=0;
        for(auto it: mpp){
            maxi=max(maxi,it.second);
        }
        int cnt=0;
        for(auto it: mpp){
            if(it.second==maxi) cnt+=maxi;
        }
        return cnt;

    }
};