// Last updated: 7/19/2026, 10:20:15 PM
class Solution {
public:
    int fib(int n) {
        if(n==1 || n==0){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};