// Last updated: 7/19/2026, 10:16:23 PM
class Solution {
public:
    int stoi(string s){
        int num=0;
        for(int i=0; i<s.length(); i++){
            num= num*10+(s[i]-'a');
        }
        return num;
    }
    bool isSumEqual(string s1, string s2, string s3) {
        int num1=stoi(s1);
        int num2=stoi(s2);
        int target=stoi(s3);
        return (num1+num2)==target;
    }
};