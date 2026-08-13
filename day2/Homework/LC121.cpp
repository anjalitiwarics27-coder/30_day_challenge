class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++) {

            // Aaj buy karna ho to sabse cheap price
            minPrice = min(minPrice, prices[i]);

            // Aaj sell karke profit
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
        
    }
};