class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i>=0 && j>=0 && i<grid.size() && j<grid[0].size() && grid[i][j]==1){
            grid[i][j]=0;
            int l= dfs(grid, i+1, j);
            int r= dfs(grid, i-1, j);
            int u= dfs(grid, i, j+1);
            int d= dfs(grid, i, j-1);
            return 1+u+r+l+d;
        }
        return 0;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size(), res=0;
        for(int i=0; i<n; i++){
            if(grid[0][i]==1){
                dfs(grid,0,i);
            }
        }
        for(int i=0; i<n; i++){
            if(grid[m-1][i]==1){
                dfs(grid,m-1,i);
            }
        }
        for(int i=0; i<m; i++){
            if(grid[i][0]==1){
                dfs(grid,i,0);
            }
        }
        for(int i=0; i<m; i++){
            if(grid[i][n-1]==1){
                dfs(grid,i,n-1);
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    res += dfs(grid, i, j);
                }
            }
        }
    
        return res;

    }
};