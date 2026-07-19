// Last updated: 7/19/2026, 10:19:01 PM
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n%2!=0){
            ans.push_back(0);
            n/=2;
            for(int i=0;i<n;i++){
                ans.push_back(i+1);
				ans.push_back((-1)*(i+1));
            }
        }else{
            n/=2;
            for(int i=0;i<n;i++){
                ans.push_back(i+1);
				ans.push_back((-1)*(i+1));
            }
        }return ans;
    }
};