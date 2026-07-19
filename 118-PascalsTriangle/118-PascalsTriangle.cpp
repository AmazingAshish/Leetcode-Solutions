// Last updated: 7/19/2026, 10:24:20 PM
class Solution {
public:
    int nCr(int n, int r){
       int sol=1;
        for(int i=0; i<r; i++){
            sol*=(n-i);
            sol/=(i+1);
        }
        return sol;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0; i<numRows; i++){
            vector<int>temp;
            for(int j=0; j<=i; j++){
                temp.push_back(nCr(i,j));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};