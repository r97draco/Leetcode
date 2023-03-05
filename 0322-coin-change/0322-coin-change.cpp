class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0]=0;
        for(int i=1; i<=amount; i++){
            for(int j=0; j<coins.size(); j++){
                if(coins[j]<= i){
                    int rest = dp[i-coins[j]];
                    if(rest != INT_MAX && rest+1<dp[i]){
                        dp[i] = rest+1;
                    }
                }
            }
        }
        return dp[amount]==INT_MAX?-1: dp[amount];
    }
};