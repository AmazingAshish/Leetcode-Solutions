// Last updated: 7/19/2026, 10:24:59 PM
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rows(9, vector<int>(9));
        vector<vector<int>> cols(9, vector<int>(9));
        vector<vector<int>> boxes(9, vector<int>(9));

        // Pre-fill the tracking arrays with initial board values
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int val = board[i][j] - '1';
                    int boxIdx = (i / 3) * 3 + (j / 3);
                    rows[i][val] = cols[j][val] = boxes[boxIdx][val] = 1;
                }
            }
        }

        solve(board, 0, 0, rows, cols, boxes);
    }

    bool solve(vector<vector<char>>& board, int i, int j,
               vector<vector<int>>& rows,
               vector<vector<int>>& cols,
               vector<vector<int>>& boxes) {
        if (i == 9) return true;
        if (j == 9) return solve(board, i + 1, 0, rows, cols, boxes);
        if (board[i][j] != '.') return solve(board, i, j + 1, rows, cols, boxes);

        for (int val = 0; val < 9; val++) {
            int boxIdx = (i / 3) * 3 + (j / 3);
            if (!rows[i][val] && !cols[j][val] && !boxes[boxIdx][val]) {
                board[i][j] = val + '1';
                rows[i][val] = cols[j][val] = boxes[boxIdx][val] = 1;

                if (solve(board, i, j + 1, rows, cols, boxes)) return true;

                board[i][j] = '.';
                rows[i][val] = cols[j][val] = boxes[boxIdx][val] = 0;
            }
        }
        return false;
    }
};
