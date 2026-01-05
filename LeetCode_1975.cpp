class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        long long neg_count = 0;
        long long smallest = INT_MAX;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]<0) neg_count++;
                if(abs(matrix[i][j])<smallest) smallest = abs(matrix[i][j]); 
                sum = sum + abs(matrix[i][j]);
            }
        }
        if(neg_count%2!=0)
        {
            return sum-2*smallest;
        }
        return sum;
    }
};