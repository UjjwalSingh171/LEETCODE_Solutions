class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn = prices[0];
        int best = 0 ;
        for(int i = 0 ; i<prices.size() ; i++)
        {
            if(minn>prices[i]) minn = prices[i] ;
            else 
            {
                best = max(best,prices[i]-minn);
            }
        }
        return best;
    }
};