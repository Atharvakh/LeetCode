class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end());
        int x=points[0][1];
        int ans = 1;
        for(int i=1;i<n;i++)
        {
            if(x>=points[i][0])
            {
                x=min(x,points[i][1]);
            }
            else
            {
                ans++;
                x=points[i][1];
            }
        }
        return ans;
    }
};