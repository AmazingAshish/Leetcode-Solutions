// Last updated: 7/19/2026, 10:20:41 PM
class Solution {
private:
    bool canFinishEating(vector<int>& piles, int h, int k) {
        long used_hours = 0;
        for (auto p : piles) {
            used_hours += p / k;
            if (p % k != 0) used_hours++;
        }
        return used_hours <= h;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 1000000000;
        int k = -1;
        while (left <= right) {
            const int mid = left + (right - left) / 2;
            if (canFinishEating(piles, h, mid)) {
                k = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return k;
    }
};