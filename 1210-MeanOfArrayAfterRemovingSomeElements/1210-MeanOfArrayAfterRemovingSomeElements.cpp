// Last updated: 7/19/2026, 10:19:42 PM
class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n= arr.size();
        int m= (n*5)/100;
        sort(arr.begin(),arr.end());
        double ans=0;
        for(int i=m;i<n-m; i++ ){
            ans+=arr[i];
        }
        n= n-2*m;
        return ans/n;
    }
};