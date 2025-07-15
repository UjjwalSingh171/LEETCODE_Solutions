class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        vector<int> bestbuy(n);
        bestbuy[0] = INT_MAX;
        for(int i = 1 ; i<n ; i++)
        {
            bestbuy[i] = min(bestbuy[i-1],prices[i-1]);
        }

        int maxp = 0 ;

        for(int i = 0 ; i<n ; i++)
        {
            int curp = prices[i]-bestbuy[i];
            maxp = max(curp,maxp);
        }

        return maxp;
    }
};