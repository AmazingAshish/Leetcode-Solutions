// Last updated: 7/19/2026, 10:12:57 PM
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0; i<details.size(); i++){
            int age=(details[i][11]-'0')*10 + details[i][12]-'0';
            if(age>60) ans++;
        }
        return ans;
        
        
    }
};