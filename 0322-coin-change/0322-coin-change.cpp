class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int Max = amount + 1;
        vector<int> dp(amount + 1, Max);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (auto coin: coins) {
                if(i-coin >=0)
                    dp[i]=min(dp[i], 1+ dp[i-coin]);
            }
        }
        return dp[amount]==Max?-1: dp[amount];
    }
};