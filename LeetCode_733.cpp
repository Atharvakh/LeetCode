class Solution {
public:
    void dfs(vector<vector<int>> &image, int x,int y,int newColor,int originalColor)
    {
        if(x<0 || y<0 || x>=image.size() || y>=image[0].size())
        {
            return;
        }
        if(image[x][y]!=originalColor)
        {
            return;
        }
        if(image[x][y]==newColor)
        {
            return;
        }
        image[x][y]=newColor;
        dfs(image, x-1,y, newColor,originalColor);//T-up
        dfs(image, x+1,y, newColor,originalColor); // Bottom
        dfs(image, x,y+1, newColor,originalColor);//Right
        dfs(image, x,y-1, newColor,originalColor);//left


    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if(originalColor!=color)
        {
            dfs(image,sr,sc,color,originalColor);
        }
        return image;
    }
};