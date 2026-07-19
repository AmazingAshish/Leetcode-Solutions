// Last updated: 7/19/2026, 10:24:00 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int k) {
        int n= a.size();
        int i=0,j=n-1;
        while(i<j){
            int s=(a[i]+a[j]);
            if(s==k) return {i+1,j+1};
            else if (s<k) i++;
            else j--;
        }
        return {-1,-1};
    }
};