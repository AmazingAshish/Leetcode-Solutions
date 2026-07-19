// Last updated: 7/19/2026, 10:25:19 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string out="";
        sort(str.begin(), str.end());
        int n=str.size();
        string first=str[0], last=str[n-1];
        for(int i=0; i<str[0].size(); i++){
            if(first[i]!=last[i]) break;
            out+=first[i];
        }
        return out;
    }
};