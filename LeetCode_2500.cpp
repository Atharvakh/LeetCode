class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        vector<priority_queue<int>> mH;

        // Step 1: For each row in the grid, push a max-heap (priority queue)
        for (int i = 0; i < grid.size(); i++) {
            priority_queue<int> pq;
            for (int val : grid[i]) {
                pq.push(val);
            }
            mH.push_back(pq);
        }

        int ans = 0;
        int col = grid[0].size();

        // Step 2: At each column (repetition = number of columns),
        // extract the largest element from each row and find the max among them
        for (int i = 0; i < col; i++) {
            int maxval = 0;
            for (int j = 0; j < grid.size(); j++) {
                if (!mH[j].empty()) {
                    int val = mH[j].top();
                    mH[j].pop();
                    maxval = max(maxval, val);
                }
            }
            ans += maxval;
        }

        return ans;
    }
};
