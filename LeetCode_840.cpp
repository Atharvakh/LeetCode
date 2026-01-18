class Solution {
public:
    bool isMagicSquare(vector<vector<int>>& grid,int row,int col){
        set<int> st;
        for(int u = row;u<row+3;u++){
            for(int v = col;v<col+3;v++){
                if(grid[u][v]>9 || grid[u][v]<1) return false;
                st.insert(grid[u][v]);
            }
        }
        if(st.size()!=9) return false;
        int r0 = grid[row][col] + grid[row][col+1] + grid[row][col+2];
        int r1 = grid[row+1][col] + grid[row+1][col+1] + grid[row+1][col+2];
        int r2 = grid[row+2][col] + grid[row+2][col+1] + grid[row+2][col+2];
        
        // Column sums
        int c0 = grid[row][col] + grid[row+1][col] + grid[row+2][col];
        int c1 = grid[row][col+1] + grid[row+1][col+1] + grid[row+2][col+1];  
        int c2 = grid[row][col+2] + grid[row+1][col+2] + grid[row+2][col+2];
        
        // Diagonal sums
        int d1 = grid[row][col] + grid[row+1][col+1] + grid[row+2][col+2];
        int d2 = grid[row][col+2] + grid[row+1][col+1] + grid[row+2][col];
        
        if(r0 != r1 || r1 != r2) return false;
        if(c0 != c1 || c1 != c2) return false;
        if(r0 != c0 || r0 != d1 || r0 != d2) return false;
        
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int m = grid.size(); //row size
        int n = grid[0].size(); //col size
        int ans = 0;
        if(m<3 || n<3) return 0;
        for(int row = 0; row <= (m-3); row++) {  
            for(int col = 0; col <= (n - 3) ; col++) {  
                if(isMagicSquare(grid, row, col)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};