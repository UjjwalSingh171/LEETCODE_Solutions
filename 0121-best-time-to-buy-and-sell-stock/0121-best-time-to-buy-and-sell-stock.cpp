class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX;
        int maxp = 0;
        for(int price : prices)
        {
            minp = min(minp,price);
            maxp = max(maxp,price-minp);
        }
        return maxp;
    }
};