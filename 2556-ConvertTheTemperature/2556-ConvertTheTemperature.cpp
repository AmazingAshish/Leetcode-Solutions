// Last updated: 7/19/2026, 10:13:40 PM
class Solution {
public:
    vector<double> convertTemperature(double c) {
        vector<double>ans;
        double k=(double)(c+273.15);
        ans.push_back(k);
        double b=(double)(1.8*c);
        double f=(double)( b+32);
        ans.push_back(f);
        return ans;
    }
};