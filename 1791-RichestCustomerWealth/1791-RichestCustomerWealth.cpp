// Last updated: 7/19/2026, 10:17:15 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int num=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            num= max(sum, num);
        }return num;
    }
};