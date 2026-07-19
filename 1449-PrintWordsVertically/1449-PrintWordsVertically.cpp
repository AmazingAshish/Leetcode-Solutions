// Last updated: 7/19/2026, 10:18:52 PM
class Solution {
public:
    vector<string> printVertically(string s) 
    {
        int mx = 0, idx;
        string word;
        vector<string>all, ans;
        stringstream sentesnce(s);
        while(sentesnce >> word)
        {
            mx = max(mx, int(word.size()));
            all.push_back(word);
        }

        map<int,string>mp;
        for(auto str:all)
        {
            idx = 0;
            for(char ch:str) mp[idx++] += ch;
            while(idx < mx) mp[idx++] += " ";
        }

        for(int i=0;i<mx;i++)
        {
            while(mp[i].back() == ' ') mp[i].pop_back();
            ans.push_back(mp[i]);
        }
        return ans;
    }
};