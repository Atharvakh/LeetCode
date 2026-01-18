class Solution {
public:
    bool isMagicSquare(vector<vector<int>>& grid,int row,int col,int k){
        vector<int> row_sums(k);
        for(int i = 0; i < k; i++) {
            int sum = 0;
            for(int j = 0; j < k; j++) {
                sum += grid[row + i][col + j];
            }
            row_sums[i] = sum;
        }
        
        vector<int> col_sums(k);
        for(int j = 0; j < k; j++) {
            int sum = 0;
            for(int i = 0; i < k; i++) {
                sum += grid[row + i][col + j];
            }
            col_sums[j] = sum;
        }
        
        int diag1 = 0, diag2 = 0;
        for(int i = 0; i < k; i++) {
            diag1 += grid[row + i][col + i];
            diag2 += grid[row + i][col + (k-1) - i];
        }
        
        for(int i = 1; i < k; i++) {
            if(row_sums[i] != row_sums[0]) return false;
        }
        
        for(int j = 0; j < k; j++) {
            if(col_sums[j] != row_sums[0]) return false;
        }
        
        if(diag1 != row_sums[0] || diag2 != row_sums[0]) return false;
        
        return true;

        
    }
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size();
    int n = grid[0].size();
    int maxSize = min(m, n);
    
    for(int k = maxSize; k >= 1; k--) {
        for(int row = 0; row <= m - k; row++) {
            for(int col = 0; col <= n - k; col++) {
                if(isMagicSquare(grid, row, col, k)) {
                    return k;                }
            }
        }
    }
    return 1;
    }
};