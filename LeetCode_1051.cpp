class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int sz = heights.size();
        int ans = 0,i;
        vector<int> expected = heights;
        sort(expected.begin(),expected.end());
        for(i=0;i<sz;i++)
        {
            if(heights[i]!=expected[i])
            {
                ans++;
            }
        }
        return ans;
    }
};
