// Last updated: 7/19/2026, 10:24:46 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end()); 
        vector<vector<int>> ans; 
        
        vector<int> currentInterval = arr[0];
        
        for (int i = 1; i < arr.size(); i++) {
            if (currentInterval[1] >= arr[i][0]) {
                currentInterval[1] = max(currentInterval[1], arr[i][1]);
            } else {
                ans.push_back(currentInterval);
                currentInterval = arr[i]; 
            }
        }
        
        ans.push_back(currentInterval);
        
        return ans;
    }
};