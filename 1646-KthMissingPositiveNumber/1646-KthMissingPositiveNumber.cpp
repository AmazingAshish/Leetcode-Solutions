// Last updated: 7/19/2026, 10:17:52 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mis=0;
        int ii = 0;
        for(int i=1 ; i<=arr.back();i++){
            if(arr[ii]==i){
                ii++;
            }else{
                mis++;
            }
            if(mis==k){
                return i;
            }
        }

        return arr.back()+k-mis;
    }
};