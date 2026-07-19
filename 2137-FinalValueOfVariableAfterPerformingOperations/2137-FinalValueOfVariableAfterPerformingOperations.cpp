// Last updated: 7/19/2026, 10:15:50 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int i=0,j=0;
        while(operations.size()>i){
            if(operations[i]=="++X" || operations[i]=="X++") j++;
        else j--;
        i++;
        }return j;
    }
};