// class Solution {
// public:
//     int maxSideLength(vector<vector<int>>& mat, int threshold) {
//         int m = mat.size(); //row size
//         int n = mat[0].size(); // col size
//         int maxsize = min(m,n);
//         int ans = 0;
//         for(int k=1;k<=maxsize;k++){
//             for(int i=0;i<=m-k;i++){
//                 for(int j=0;j<=n-k;j++){
//                     int sum = 0;
//                     for(int r = i; r < i + k; r++) {
//                         for(int c = j; c < j + k; c++) {
//                             sum += mat[r][c];
//                         }
//                     }
//                     if(sum<=threshold) ans = max(ans, k);;                        
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int m = mat.size();
        int n = mat[0].size();
        
        // Build 2D prefix sum array (1-indexed)
        vector<vector<int>> prefix(m + 1, vector<int>(n + 1, 0));
        
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                prefix[i][j] = mat[i-1][j-1]           // Current element
                             + prefix[i-1][j]           // Sum above
                             + prefix[i][j-1]           // Sum to left
                             - prefix[i-1][j-1];        // Subtract overlap
            }
        }
        
        int ans = 0;
        int maxsize = min(m, n);
        
        // Try all square sizes
        for(int k = 1; k <= maxsize; k++) {
            for(int i = 0; i <= m - k; i++) {
                for(int j = 0; j <= n - k; j++) {
                    // Calculate sum of k×k square starting at (i,j)
                    // Rectangle from (i,j) to (i+k-1, j+k-1)
                    int sum = prefix[i+k][j+k]          // Bottom-right
                            - prefix[i][j+k]             // Subtract top
                            - prefix[i+k][j]             // Subtract left
                            + prefix[i][j];              // Add back overlap
                    
                    if(sum <= threshold) {
                        ans = max(ans, k);
                    }
                }
            }
        }
        
        return ans;
    }
};