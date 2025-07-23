class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int minp = INT_MAX;
        int maxp = INT_MIN;

        for(int price : prices)
        {
            minp = min(minp,price);

            int currp = price - minp;
            maxp = max(currp,maxp);
        }
        return maxp;
    }
};