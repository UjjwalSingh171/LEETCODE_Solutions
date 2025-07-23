class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0 ;
        for(int i = 0 ; i<n-1 ; i++)
        {
            int curp = prices[i+1]-prices[i];
            if(curp>0) profit+=curp;
        }
        return profit;
    }
};