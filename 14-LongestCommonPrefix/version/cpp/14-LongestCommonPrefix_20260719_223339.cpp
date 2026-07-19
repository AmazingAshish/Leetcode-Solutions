// Last updated: 7/19/2026, 10:33:39 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& str) {
4        string out="";
5        sort(str.begin(), str.end());
6        int n=str.size();
7        string first=str[0], last=str[n-1];
8        int mini = min(str[0].size(), str[n-1].size());
9        for(int i=0; i<mini; i++){
10            if(first[i]!=last[i]) break;
11            out+=first[i];
12        }
13        return out;
14    }
15};