// Last updated: 7/19/2026, 10:22:32 PM
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        std::sort(points.begin(), points.end(), [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });

        int arrows = 1;
        int end = points[0][1];

        for (size_t i = 1; i < points.size(); ++i) {
            if (points[i][0] > end) {
                arrows++;
                end = points[i][1];
            } else {
                end = std::min(end, points[i][1]);
            }
        }

        return arrows;
    }
};