// Last updated: 7/19/2026, 10:25:08 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length(),m=needle.length();
        if(m>n) return -1;
        for(int i=0; i<n; i++){
            if(haystack[i]==needle[0] && n-i>=m){
                int j=i;
                bool found=1;
                for(int k=0; k<m; k++){
                    if(j<n && haystack[j]==needle[k]){
                        j++;
                    }else {
                        found=0;
                        break;
                    }
                }if(found){
                    return i;
                }
            }
        }return -1;
        
    }
};