class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        bool col = true;
        bool row = true;
        int j=0;
        while(j<n){
            for(int i=0;i<m-1;i++){
                if(grid[i][j]!=grid[i+1][j]){
                    col = false;
                }
            }
            j++;
        }
        int i=0;
        while(i<m){
            for(int j=0;j<n-1;j++){
                if(grid[i][j]==grid[i][j+1]){
                    row = false;
                }
            }
            i++;
        }
        return (col && row);
    }
};