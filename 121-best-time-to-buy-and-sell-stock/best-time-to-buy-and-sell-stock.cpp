class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //set the minimum price is the first price
        int buy_price = prices[0];

        //set the minimum profit is the lowest profit
        int profit = 0;

        for(int curr_price = 1; curr_price < prices.size(); ++curr_price) {
            //check if the current price is less update than the buy_price
            if(prices[curr_price] < buy_price) {
                buy_price = prices[curr_price];
            }
            //else then check if we can make higher profit
            else {
                int current_profit = prices[curr_price] - buy_price;
                profit = std::max(current_profit, profit);  //find the max to update the profit
            }
        }
        return profit;
    }
};