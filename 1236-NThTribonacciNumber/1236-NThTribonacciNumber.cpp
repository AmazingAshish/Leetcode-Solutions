// Last updated: 7/19/2026, 10:19:39 PM
class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1 || n == 2) {
            return 1;
        }
        
        int a = 0, b = 1, c = 1;
        int nextTrib;
        
        for (int i = 3; i <= n; i++) {
            nextTrib = a + b + c;
            a = b;
            b = c;
            c = nextTrib;
        }
        
        return c;
    }
};