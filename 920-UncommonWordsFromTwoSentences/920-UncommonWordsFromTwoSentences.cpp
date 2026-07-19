// Last updated: 7/19/2026, 10:20:35 PM
class Solution {
public:
    map<string,int>mp;
    
    void stringstreeam(string s)
    {
        stringstream ss(s);
        string word;
        while(ss>>word) mp[word]++;
    }

    vector<string> uncommonFromSentences(string s1, string s2) 
    {
        stringstreeam(s1);
        stringstreeam(s2);

        vector<string>ans;
        for(auto x:mp)
            if(x.second==1) 
                ans.push_back(x.first);

        return ans;
    }
};