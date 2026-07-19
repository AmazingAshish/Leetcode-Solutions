// Last updated: 7/19/2026, 10:11:45 PM
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int si=0,sd=0;
         int inc=0,dec=0;
        for(int i=0; i<arr.size()-1;i++){
           if(arr[i]<arr[i+1]){
            inc++;
            dec=0;
           }else if(arr[i]>arr[i+1]){
            dec++;
            inc=0;
           }else {
            inc=0;
            dec=0;
           }
           si=max(si,inc);
           sd=max(sd,dec);
            
        }
        return max(si,sd)+1;
    }
};