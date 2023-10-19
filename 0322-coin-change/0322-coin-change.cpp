class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0]=0;
        for(int i=1; i<= amount; i++){
            int amt = i;
            for(auto coin : coins){
                if(coin> amt)continue;
                if(dp[amt-coin]!= INT_MAX)
                dp[i]= min(dp[amt-coin]+1, dp[i]);
            }
        }
        return dp[amount]!=INT_MAX?dp[amount]:-1;
    }
};