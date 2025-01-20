class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int i,j;
        for(i=0;i<r-1;i++)
        {
            for(j=0;j<c-1;j++)
            {
                if(matrix[i][j]!=matrix[i+1][j+1])
                {
                    return false;
                }

            }

        }

        return true;
        
    }
};