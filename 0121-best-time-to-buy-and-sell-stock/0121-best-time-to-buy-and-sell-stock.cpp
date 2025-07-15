class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxp = 0 ;
        int bestbuy = prices[0];
        for(int i = 1 ; i<n ; i++)
        {
            if(prices[i]>bestbuy)
            {
                maxp = max(maxp,prices[i]-bestbuy);
            }
            bestbuy = min(bestbuy,prices[i]);
        }
        return maxp;
    }
};