// Last updated: 7/19/2026, 10:22:04 PM
class Solution {
public:
    int subarraySum(vector<int>& A, int K) {
        int cnt=0;
        int N = A.size();
        for(int i=0; i<N; i++){
            int sum=0;
            for(int j=i; j<N; j++){
                sum+=A[j];
                if(sum==K){
                cnt++;
            }
            }
            
        }
        return cnt;
    }
};