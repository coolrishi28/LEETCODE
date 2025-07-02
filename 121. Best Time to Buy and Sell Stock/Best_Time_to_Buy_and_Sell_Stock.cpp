class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int i, price = prices[0], len = prices.size(), ans = 0;
        for(i = 1; i < len; i++)
        {
            if(prices[i] < price)
            {
                price = prices[i];
            }
            else if(prices[i] - price > ans)
            {
                ans = prices[i] - price;
            }
        }
        return ans;
    }
};
