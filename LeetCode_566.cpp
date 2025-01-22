class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r*c)
        {
            return mat;
        }
        vector<vector<int>> ans(r, vector<int>(c, 0));
        int a_i=0,a_j=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[a_i][a_j]=mat[i][j];
                a_j++;
                if(a_j==c)
                {
                    a_i++;
                    a_j=0;
                }
            }
        }
        return ans;
    }
};