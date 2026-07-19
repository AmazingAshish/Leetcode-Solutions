// Last updated: 7/19/2026, 10:17:09 PM
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        double ans = 0 ;
        int prev = 0 ;
        for(int i =  0; i < customers.size();i++){
            if(prev <= customers[i][0]){
               ans += customers[i][1] ; prev = customers[i][1]  +  customers[i][0] ;
            }
            else{
                ans +=( prev -  customers[i][0] ) +   (customers[i][1])  ;
                prev= prev + (customers[i][1]) ;
            }
            
        }
        return ans /customers.size() ;
    }
};