class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int start=prices[0];
        int maxprofit = 0;
        for(int i=0;i<prices.size();i++)
        {
            if(start<prices[i])
            {
                maxprofit += prices[i]-start;
            }
            start = prices[i];
        }
        return maxprofit;
    }
};