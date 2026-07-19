// Last updated: 7/19/2026, 10:12:10 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>places;
        for(int i=0;i<words.size();i++){
            for(auto j:words[i]){
                if(j==x){
                    places.push_back(i);
                    break;
                }
            }
        }
        return places;
    }
};