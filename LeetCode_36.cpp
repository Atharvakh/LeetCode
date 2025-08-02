class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        const int num = 9;
        bool row[num][num] = {false};
        bool col[num][num] = {false};
        bool subGrid[num][num] = {false};

        for(int r=0;r<num;r++)
        {
            for(int c=0;c<num;c++)
            {
                if(board[r][c] == '.')
                    continue;
                
                int index = board[r][c] - '0' - 1;
                int gridNum = (r/3)*3+(c/3);

                if(row[r][index] || col[c][index] || subGrid[gridNum][index])
                {
                    return false;
                }
                row[r][index]=true;
                col[c][index]=true;
                subGrid[gridNum][index]=true;
            }

        }
        return true;
    }
};