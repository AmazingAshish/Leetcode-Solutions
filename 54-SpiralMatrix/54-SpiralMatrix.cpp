// Last updated: 7/19/2026, 10:24:47 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>arr;
        int raw=matrix.size();
        int col=matrix[0].size();
        int total=raw*col;
        int count=0;
        int StartingRaw=0;
        int StartingCol=0;
        int EndingRaw=raw-1;
        int EndingCol=col-1;
        while(total>count){
            //Starting Raw
            for(int i=StartingCol; i<=EndingCol && total>count; i++){
                arr.push_back(matrix[StartingRaw][i]);
                 count++;
            }
            StartingRaw++;
            for(int i=StartingRaw; i<=EndingRaw && total>count; i++){
                arr.push_back(matrix[i][EndingCol]);
                count++;
            }
            EndingCol--;
            for(int i=EndingCol; i>=StartingCol && total>count; i--){
                arr.push_back(matrix[EndingRaw][i]);
                 count++;
            }
            EndingRaw--;
            for(int i=EndingRaw; i>=StartingRaw && total>count; i--){
                arr.push_back(matrix[i][StartingCol]);
                 count++;
            }
            StartingCol++;
        }return arr;
    }
};