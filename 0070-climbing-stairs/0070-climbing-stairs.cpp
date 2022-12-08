class Solution {
public:
    vector<int> dp;
    int climbStairs(int n) {
        if(n<=3)return n;
        int dp[n+3];
        dp[0]=0; dp[1]=1; dp[2]=2;
        for(int i=3; i<=n; i++){
            dp[i]= dp[i-1]+dp[i-2];
        }
        
        return dp[n];
    }
};