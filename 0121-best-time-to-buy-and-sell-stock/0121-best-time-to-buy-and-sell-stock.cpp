class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int res = 0 ;

        vector<int> bestbuy(n) ;
        bestbuy[0] = prices[0] ;
        for(int i = 1 ; i<n ; i++)
        {
            bestbuy[i] = min(bestbuy[i-1],prices[i]);
        }

        vector<int> bestsell(n) ;
        bestsell[n-1] = prices[n-1] ;
        for(int i = n-2 ; i>=0 ; i--)
        {
            bestsell[i] = max(bestsell[i+1],prices[i]);
        }

        for(int i = 0 ; i<n ; i++)
        {
            res = max(res,bestsell[i]-bestbuy[i]);
        }
        return res;
    }
};