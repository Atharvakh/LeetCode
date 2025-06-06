class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval = prices[0], minid = 0;
        int maxval = prices[0], maxid = 0;
        int maxprofit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minval) {
                minval = prices[i];
                minid = i;
            }

            if (prices[i] - minval > maxprofit) {
                maxprofit = prices[i] - minval;
                maxval = prices[i];
                maxid = i;
                
            }
        }

        return maxprofit;
    }
};
