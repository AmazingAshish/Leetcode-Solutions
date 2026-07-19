// Last updated: 7/19/2026, 10:21:04 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return 1;
        if(s.length()!=goal.length()){
            return false;
        }
        int n= s.length();
        int x=n-1;
        while(x--){
            int st=s[0];
            for(int i=0; i<n-1; i++){
                s[i]=s[i+1];
            }
            s[n-1]=st;
            if(s==goal) return 1;
        }
        return 0;
    }
};