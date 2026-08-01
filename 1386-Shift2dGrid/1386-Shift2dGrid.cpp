// Last updated: 8/1/2026, 3:57:26 PM
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int total = n * m;
        
        // Optimize: k shifts is same as k % total shifts
        k = k % total;
        
        vector<vector<int>> result(n, vector<int>(m));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                // Convert 2D position to 1D index
                int oldPos = i * m + j;
                // Calculate new position after k shifts
                int newPos = (oldPos + k) % total;
                // Convert back to 2D
                int newRow = newPos / m;
                int newCol = newPos % m;
                
                result[newRow][newCol] = grid[i][j];
            }
        }
        
        return result;
    }
};