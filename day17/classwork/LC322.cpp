class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // initialize dp array with amount +1 (representing infinity )
        vector<int>dp(amount+1,amount+1);
        // base case: 0 amount requires 0 coins 
        dp[0]=0;
        // compute minimum coins for all amounts from 1 to amount 
        for(int i=1;i<=amount;++i){
            for(int coin :coins){
                if(i-coin>=0){
                    dp[i]=min(dp[i],dp[i-coin]+1);
                }
            }
        }
        // if dp[amount] wasn't updated , it's impossible to make that amount
        return dp[amount]>amount?-1:dp[amount];
    }
};