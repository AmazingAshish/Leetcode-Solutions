// Last updated: 7/19/2026, 10:17:28 PM
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int max_w=0;
        for(int i=1;i<points.size();i++){
            int wid=points[i][0]-points[i-1][0];
            max_w=max(max_w,wid);
        }return max_w;
    }
};