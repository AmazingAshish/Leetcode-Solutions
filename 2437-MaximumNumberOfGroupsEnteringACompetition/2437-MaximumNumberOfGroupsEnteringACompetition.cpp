// Last updated: 7/19/2026, 10:14:22 PM
class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int D = sqrt(1+8*grades.size());
        int B = 1;
        return (-B+D)/2;
    }
};