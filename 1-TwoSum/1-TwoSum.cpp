// Last updated: 7/19/2026, 10:25:27 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {
        int n= arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]+arr[j]==k){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};