// Last updated: 7/19/2026, 10:25:00 PM
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rows(9, vector<int>(9, 0));
        vector<vector<int>> cols(9, vector<int>(9, 0));
        vector<vector<int>> subMat(9, vector<int>(9, 0));
        return check(board, 0, 0, rows, cols, subMat);
    }

    bool check(vector<vector<char>>& board, int i, int j,
               vector<vector<int>>& rows,
               vector<vector<int>>& cols,
               vector<vector<int>>& subMat) {
        if (i == 9) return true;
        if (j == 9) return check(board, i + 1, 0, rows, cols, subMat);
        char c = board[i][j];
        if (c == '.') return check(board, i, j + 1, rows, cols, subMat);
        int val = c - '1';
        int boxIdx = (i / 3) * 3 + (j / 3);
        if (rows[i][val] || cols[j][val] || subMat[boxIdx][val]) return false;
        rows[i][val] = 1;
        cols[j][val] = 1;
        subMat[boxIdx][val] = 1;
        if (!check(board, i, j + 1, rows, cols, subMat)) return false;
        
        return true;
    }
};
