class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
    int ans = 0;
    for (int i = 0; i < points.size();) {
        int end = points[i][1];
        int j = i + 1;
        while (j < points.size() && points[j][0] <= end) {
            end = min(end, points[j][1]);
            j++;
        }
        ans++;
        i = j;
    }
    return ans;
    }

};