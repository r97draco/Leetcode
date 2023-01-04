class Solution {
public:
    vector<vector<int>> visited;
    
    int dfs(vector<vector<int>>& mat, int i, int j){
        if(i>=0 && j>=0 && i<mat.size() && j<mat[0].size()){
            if(mat[i][j] == 0)
                return 0;
            if(mat[i][j]>=1){
                mat[i][j]=-1;
                int l,r,u,d;
                l=1+dfs(mat, i-1, j);
                r=1+dfs(mat, i+1, j);
                u=1+dfs(mat, i, j-1);
                d=1+dfs(mat, i, j+1);
                mat[i][j]=1;
                return min(l,min(r, min(u,d)));
                
            }
        }
        return 100;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m= mat.size(), n=mat[0].size(), INF=m+n;
        vector<vector<int>> res(m, vector<int> (n, 0));
        // for(int i=0; i<m; i++){
        //     res[i][0]= mat[i][0];
        //     res[i][m-1]= mat[i][m-1];
        // }
        // for(int i=0; i<n; i++){
        //     res[0][i]= mat[0][i];
        //     res[n-1][i]=mat[n-1][i];
        // }
        
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==0)continue;
                int top=INF, left= INF;
                if(i>0) top= mat[i-1][j];
                if(j>0) left= mat[i][j-1];
                mat[i][j]= min(top,left)+1;
            }
        }
        
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(mat[i][j]==0)continue;
                int bot=INF, rig= INF;
                if(i<m-1) bot= mat[i+1][j];
                if(j<n-1) rig= mat[i][j+1];
                mat[i][j]=min(mat[i][j], 1+min (bot,rig));
            }
        }
        //       int m = mat.size(), n = mat[0].size(), INF = m + n; // The distance of cells is up to (M+N)
        // for (int r = 0; r < m; r++) {
        //     for (int c = 0; c < n; c++) {
        //         if (mat[r][c] == 0) continue;
        //         int top = INF, left = INF;
        //         if (r - 1 >= 0) top = mat[r - 1][c];
        //         if (c - 1 >= 0) left = mat[r][c - 1];
        //         mat[r][c] = min(top, left) + 1;
        //     }
        // }
        // for (int r = m - 1; r >= 0; r--) {
        //     for (int c = n - 1; c >= 0; c--) {
        //         if (mat[r][c] == 0) continue;
        //         int bottom = INF, right = INF;
        //         if (r + 1 < m) bottom = mat[r + 1][c];
        //         if (c + 1 < n) right = mat[r][c + 1];
        //         mat[r][c] = min(mat[r][c], min(bottom, right) + 1);
        //     }
        // }
        
        return mat;
    }
};