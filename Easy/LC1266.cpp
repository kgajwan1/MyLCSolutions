//LC 1266. Minimum Time Visiting All Points

class Solution {
private:
    int time(const vector<int> &p1, const vector<int> &p2) {
        if (p1.empty() || p2.empty()) return 0;
        return max(abs(p2[0] - p1[0]), abs(p2[1] - p1[1]));
    }
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        if (points.size() < 2) return 0;
        int min_time = 0;
        for (int i = 1; i < points.size(); ++ i)
            min_time += time(points[i - 1], points[i]);    
        return min_time;
    }
};