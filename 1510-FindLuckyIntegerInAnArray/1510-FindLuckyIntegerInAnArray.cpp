// Last updated: 7/19/2026, 10:18:30 PM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mpp;
        for(int i=0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }
        int ans=-1;
        for(auto it: mpp){
            if(it.first==it.second){
                ans=max(ans,it.second);
            }
        }
        return ans;
    }
};