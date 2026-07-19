// Last updated: 7/19/2026, 10:15:42 PM
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n= arr.size();
        vector<bool>rep(n,1);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j && arr[i]==arr[j]){
                    rep[i]=0;
                    break;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(rep[i]==1){
                k--;
            }
            if(k==0){
                return arr[i];
            }
            

        }
        return "";
    }
};