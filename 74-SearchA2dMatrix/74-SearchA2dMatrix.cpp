// Last updated: 7/19/2026, 10:24:38 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int s=0;
        int e=row-1;
        int mid=(s+e)/2;
        for(int i=0; i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==target){
                    return true;
                }else if(matrix[i][j]>target){
                    s=mid+1;
                }else{
                    e=mid-1;
                }int mid=(s+e)/2;
            }
        }return false;
    }
};