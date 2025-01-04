class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int endRow = img.size();//taking size of rows
        int endCol = img[0].size();//taking size of columns 
        vector<vector<int>> Mat(endRow, vector<int>(endCol, 0));// Initialize the result matrix

        for(int i=0;i<endRow;i++)
        {
            for(int j=0;j<endCol;j++)
            {
                // Calculate the range of surrounding rows and columns
                int sR = i==0?i:i-1; //start row 
                int eR = i==endRow-1?endRow-1:i+1; //end row
                int sC = j==0?j:j-1; //start column
                int eC = j==endCol-1?endCol-1:j+1; //end column
                int cnt=0, val=0; //cnt is the number by which we divide and val is the number we divide and store in new array
                for(int k=sR;k<=eR;k++)
                {
                    for(int l=sC;l<=eC;l++)
                    {
                        val+=img[k][l];
                        cnt++;
                    }
                } 
                Mat[i][j] = val/cnt;
            }
        }
        return Mat;
    }
};
