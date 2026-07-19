// Last updated: 7/19/2026, 10:15:18 PM
class Solution {
public:
    bool palindromic(string s){
        int i=0, j= s.length()-1;
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        } 
        return true;
        
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++){
            if(palindromic(words[i])){
                return words[i];
            }

        }
        return "";
    }
};