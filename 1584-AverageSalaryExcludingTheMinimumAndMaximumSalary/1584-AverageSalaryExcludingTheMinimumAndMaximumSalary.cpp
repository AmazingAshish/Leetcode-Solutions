// Last updated: 7/19/2026, 10:18:10 PM
class Solution {
public:
    double average(vector<int>& s) {
        sort(s.begin(),s.end());
        double sum=0;
        for(int i=1;i<s.size()-1;i++){
            sum+=s[i];
        }return (double)sum/(s.size()-2);
    }
};