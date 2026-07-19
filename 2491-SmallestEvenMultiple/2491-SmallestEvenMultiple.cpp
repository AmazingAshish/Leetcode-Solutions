// Last updated: 7/19/2026, 10:14:03 PM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0){
            return n;
        }
        return n*2;
    }
};