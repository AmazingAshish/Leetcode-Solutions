// Last updated: 7/19/2026, 10:13:47 PM
class Solution {
    bool find(vector<int> v,char c) {
        if(v[c-'a']==0) return false;
        v[c-'a']--;
        vector<int> count;
        for(auto i : v) {
            if(i>0) count.push_back(i);
        }
        int comp = count[0];
        for(auto i : count) {
            if(i!=comp) return false;
        }
        return true;
    }
public:
    bool equalFrequency(string word) {
        vector<int> freq(26,0);
        for(auto i : word) freq[i-'a']++;
        for(int i=0; i<26; i++) {
            if(find(freq,'a'+i)) return true;
        }
        return false;
    }
};