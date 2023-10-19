class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0]=0;
        // sort(coins.begin(), coins.end());
        for(int i=1; i<= amount; i++){
            int amt = i;
            for(auto coin : coins){
                if(coin> amt)continue;
                // if(dp[i-1]+ coin == amt){
                //     int ls = dp[i-1]+1;
                // }
                if(dp[amt-coin]!= INT_MAX)
                dp[i]= min(dp[amt-coin]+1, dp[i]);
            }
        }
        return dp[amount]!=INT_MAX?dp[amount]:-1;
    }
};