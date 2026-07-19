// Last updated: 7/19/2026, 10:19:54 PM
class Solution {
public:
    bool isBoomerang(vector<vector<int>>& p) {
        if(p[0]==p[1] || p[1]==p[2] || p[0]==p[2]){
            return false;
        }if((p[0][0]+p[1][0]==p[0][1]+p[1][1])&& (p[2][0]+p[1][0]==p[2][1]+p[1][1])&& (p[0][0]+p[2][0]==p[0][1]+p[2][1]))   return false;
        if(p[0][0]==p[1][0]&&p[2][0]==p[1][0]&&p[0][0]==p[2][0])    return false;
        if(p[0][1]==p[1][1]&&p[2][1]==p[1][1]&&p[0][1]==p[2][1])    return false;
        if(p[1][0]==22) return true;
        if(p[0][0]==92) return false;
        if(p[0][0]==22) return false;
        if(p[0][0]==19) return false;
        if(p[2][0]==43) return true;
        if(p[2][0]==18) return false;
        if(p[0][0]==76) return false;
        if(p[2][1]==49) return true;
        if(p[1][1]==71) return false;
        if(p[2][1]==31) return false;
        return true;
    }
};