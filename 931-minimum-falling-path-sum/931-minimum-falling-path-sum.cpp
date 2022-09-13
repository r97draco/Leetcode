class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m= matrix.size(), n=matrix[0].size();
        if(m==1)return matrix[0][0];
        vector<vector<int>> dp(m, vector<int> (n));
        for(int i=0; i<n; i++){
            dp[0][i]=matrix[0][i];
        }
        int res=INT_MAX;
        for(int i=1; i<m; i++){
            for(int j=0; j<n; j++){
                if(j==0){
                    dp[i][j]= matrix[i][j]+min(dp[i-1][j], dp[i-1][j+1]);
                }
                else if(j==n-1){
                    dp[i][j]= matrix[i][j]+min(dp[i-1][j], dp[i-1][j-1]);
                }
                else{
                    dp[i][j]= matrix[i][j]+min(dp[i-1][j],min(dp[i-1][j-1], dp[i-1][j+1]));
                }
                if(i==m-1){
                    res=min(res, dp[i][j]);
                }                               
            }
        }
       return res;
    }
};