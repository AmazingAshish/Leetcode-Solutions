// Last updated: 7/19/2026, 10:18:04 PM
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        while(n--){
            
            ans^=(start);
            start+=2;
        }
        return ans;
    }
};