class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxprofit = 0;
        int minprice = INT_MAX;

        for(int price : prices)
        {
            if(price<minprice)
            {
                minprice=price;
            }
            int profit = price-minprice;

            if(profit>maxprofit)
            {
                maxprofit=profit;
            }
        }
        return maxprofit;
    }
};