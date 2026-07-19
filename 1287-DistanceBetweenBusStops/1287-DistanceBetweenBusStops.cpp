// Last updated: 7/19/2026, 10:19:30 PM
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int dist_clock = 0, dist_aclock = 0, size = distance.size();
        int start1 = min(start, destination), destination1 = max(start, destination);
        
        // Iterate through the array of distances to calculate clockwise and counterclockwise distances
        for (int i = 0; i < size; i++) {
            if (i >= start1 && i < destination1)
                dist_clock += distance[i]; // Accumulate distance for clockwise direction
            else
                dist_aclock += distance[i]; // Accumulate distance for counterclockwise direction
        }
        
        // Return the minimum distance between clockwise and counterclockwise paths
        return min(dist_clock, dist_aclock);
    }
};