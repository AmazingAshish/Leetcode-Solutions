// Last updated: 7/19/2026, 10:23:17 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& a) {
        int xorall=0,fir=0,sec=0,setBit=0;
        for(auto x : a)xorall^=x; //step-1

        for(int i=0;i<32;i++) { //step-2
            if(xorall&(1<<i)) {
                setBit = 1<<i;
                break;
            }
        }

        for(auto x : a) { //step-3
            if(x & setBit) {
                fir^=x;
            }
        }

        sec = fir^xorall; //step-4
        return {fir, sec};
    }
};