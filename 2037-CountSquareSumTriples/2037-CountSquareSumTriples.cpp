// Last updated: 7/19/2026, 10:16:17 PM
class Solution {
public:
    int countTriples(int n) { 
        int c = 0;
        for(int i=1 ; i<=n ; i++){
            for(int j=i+1 ; j<=n ; j++){
                int sq = ( i * i) + ( j * j);
                int r = sqrt(sq);
                if( r*r == sq && r <= n )
                    c += 2;
            }
        }
        return c;
    }
};