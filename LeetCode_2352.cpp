class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map <int,vector<int>> mp;
        
        for(int i = 0; i<grid.size(); i++)
        {
            vector<int>v;
            for(int j=0;j<grid.size();j++)
            {
                v.push_back(grid[i][j]);//Hashing rows
            }
            mp[i]=v;
        }
        int ctr = 0;
        for(int i = 0;i<grid.size();i++)
        {
            vector<int>v;
            for(int j=0;j<grid.size();j++)
            {
                v.push_back(grid[j][i]); //hash col
            }
            for(auto n : mp)
            {
                if(n.second==v)
                {
                    ctr++;
                }
            }
        }
        return ctr;
    }
};