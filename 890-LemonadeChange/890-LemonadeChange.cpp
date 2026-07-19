// Last updated: 7/19/2026, 10:20:48 PM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]==10 || bills[0]==20){
            return false;
        }
        int n= bills.size();
        int note5=1,note10=0;
        for(int i=1; i<n; i++){
            if(bills[i]==5){
                note5++;
            }
            else if(bills[i]==10){
                if(note5!=0){
                    note5--;
                    note10++;
                }
                else{
                    return false;
                }
            }
            else{
                if(note10>0 && note5>0){
                    note10--;
                    note5--;
                }
                else if(note5>=3){
                    note5=note5-3;
                }else return false;
            }
        }
        return true;
    }
};