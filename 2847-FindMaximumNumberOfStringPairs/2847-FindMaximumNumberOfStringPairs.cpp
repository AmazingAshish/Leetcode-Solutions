// Last updated: 7/19/2026, 10:12:36 PM
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        unordered_set<string>s;
        for(int i=0; i<n; i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev) != s.end()) count++;
            else s.insert(words[i]);
        }
        return count;
    }
};