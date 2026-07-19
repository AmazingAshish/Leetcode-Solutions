// Last updated: 7/19/2026, 10:15:12 PM
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        int n= s.length();
        string temp;
        for(int i=0; i<n; i+=k){
            temp="";
            for(int j=0; j<k; j++){
                if(i+j<n) temp+=s[i+j];
                else temp+=fill;
            }
                ans.push_back(temp);
        }
        
        return ans;
    }
};