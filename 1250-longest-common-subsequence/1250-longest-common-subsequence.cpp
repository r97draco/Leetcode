class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        
        // Create a 2D array dp to store the length of the LCS
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        // Fill the dp array using dynamic programming
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1; // Extend the LCS
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // Choose the maximum length
                }
            }
        }
        
        return dp[m][n]; 
        // int mx = 0, gmx = 0;
        // int m = text1.size(), n = text2.size();
        // int lastFoundIndex = 0;
        // for(int i=0; i<m; i++){
        //     for(int j=lastFoundIndex ; j<n; j++){
        //         if( text1[i]==text2[j]){
        //             cout<<text1[i]<<"-";
        //             lastFoundIndex = j+1;
        //             mx++;
        //             break;
        //         }
        //     }
        // }
        // return mx;
    }
};