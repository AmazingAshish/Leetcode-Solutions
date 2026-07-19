// Last updated: 7/19/2026, 10:22:06 PM
class Solution {
public:
    string rev(string s){
        int i=0, j=s.length()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
    string reverseWords(string s) {
        string ans="";
        string word="";
        for(int i=0; i<s.length(); i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else{
                ans+=rev(word);
                ans+=' ';
                word="";
            }
        }
        ans+=rev(word);
        return ans;
    }
};