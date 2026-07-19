// Last updated: 7/19/2026, 10:15:04 PM
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(int i=0; i<words.size(); i++){
            bool flag=1;
            if(pref.length()<=words[i].length()){
                    for(int j=0; j<pref.length(); j++){
                if(pref[j]!=words[i][j]){
                    flag=0;
                }
            }
            if(flag) cnt++;

        }

                }
            
        return cnt;
    }
};