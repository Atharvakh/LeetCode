class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int currX = INT_MIN;
        int currY = INT_MIN;
        int maxSum = 0;
        int m = points.size();
        for(int i=0;i<m-1;i++)
        {
            currX = abs(points[i][0]-points[i+1][0]);
            currY = abs(points[i][1]-points[i+1][1]);
            maxSum += max(currX,currY);
        }
        return maxSum;
    }
};