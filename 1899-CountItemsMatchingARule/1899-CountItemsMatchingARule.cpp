// Last updated: 7/19/2026, 10:16:48 PM
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        int n=ruleKey=="type"?0:ruleKey=="color"?1:2;
        for(int i=0; i<items.size();i++){
                if(items[i][n]==ruleValue)
                count++;
        }return count;
    }
};