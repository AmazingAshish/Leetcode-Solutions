// Last updated: 7/19/2026, 10:18:45 PM
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int a=0;
        for(int i=0; i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]<0){
                    a++;
                }
            }
        }return a;
    }
};