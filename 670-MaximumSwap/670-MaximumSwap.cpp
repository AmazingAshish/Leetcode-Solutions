// Last updated: 7/19/2026, 10:21:39 PM
class Solution {
public:
    int maximumSwap(int num) {
        string str=to_string(num);
        int n= str.length();
        string ans=str,str1=str;

        for(int i=0; i<n; i++){
            
            for(int j=i+1; j<n; j++){
                str=str1;
                if(str[i]-'0'<str[j]-'0'){
                    swap(str[i],str[j]);
                    
                }if(ans<str){
                    ans=str;
                }
            }
        }
        return stoi(ans);
    }
};