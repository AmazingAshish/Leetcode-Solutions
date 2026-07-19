// Last updated: 7/19/2026, 10:15:23 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int num=0,m=sentences.size();
        for(int i=0; i<m; i++){
            int sum=1, n= sentences[i].size();
            for(int j=0; j<n;j++){
                if(sentences[i][j] == ' ')
                    sum++;
            }num=max(sum, num);
        }return num;
    }
};