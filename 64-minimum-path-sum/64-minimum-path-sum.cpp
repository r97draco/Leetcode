class Solution {
public:
    int rec(vector<vector<int>> & g, int m, int n, vector<vector<int>>& dp){
        // if(m<0 || n<0)return 0;
        if(m==0 && n==0)return g[0][0];
        if(m==0)return g[m][n]+  rec(g, m, n-1, dp);
        if(n==0)return g[m][n]+  rec(g, m-1, n, dp);
        if(dp[m][n]!=-1) return dp[m][n];
        int l = g[m][n]+ rec(g, m-1, n, dp);
        int r = g[m][n]+ rec(g, m, n-1, dp);
        return dp[m][n]= min(l , r);
    }
    int MinPathSum(vector<vector<int>>& g) {
        int m=g.size(), n= g[0].size();
        vector<vector<int>> dp(m+1, vector<int> (n+1, -1));
        return rec(g, m-1, n-1, dp);
    }

    int minPathSum(vector<vector<int>>& g) {
        int m=g.size(), n= g[0].size();
        vector<vector<int>> dp(m+1, vector<int> (n+1, -1));
        dp[0][0]= g[0][0];
        for(int i=1; i<n; i++){
            dp[0][i]= g[0][i]+ dp[0][i-1];
        }
        for(int i=1; i<m; i++){
            dp[i][0]= g[i][0]+ dp[i-1][0];
        }
        
        for(int  i=1; i<m; i++){
            for(int j=1; j<n; j++){
                dp[i][j]=g[i][j]+ min(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
}; 