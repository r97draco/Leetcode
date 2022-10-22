class Solution {
public:
    vector<vector<int>>visisted;
    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i>=0 && j>=0 && i<grid.size() && j<grid[0].size() && grid[i][j]==0){
            grid[i][j]=1;
            dfs(grid, i+1, j);
            dfs(grid, i-1, j);
            dfs(grid, i, j+1);
            dfs(grid, i, j-1);
        }
        return 1;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size(), res=0;
        // visited.assign(m, vector<int> (n,0));
        for(int i=0; i<n; i++){
            if(grid[0][i]==0){
                dfs(grid,0,i);
            }
        }
        for(int i=0; i<n; i++){
            if(grid[m-1][i]==0){
                dfs(grid,m-1,i);
            }
        }
        for(int i=0; i<m; i++){
            if(grid[i][0]==0){
                dfs(grid,i,0);
            }
        }
        for(int i=0; i<m; i++){
            if(grid[i][n-1]==0){
                dfs(grid,i,n-1);
            }
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==0){
                    dfs(grid, i, j);
                    res++;
                }
            }
        }
        
        for(int i=0; i<m; i++){
            cout<<"[";
            for(int j=0; j<n; j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<"]"<<endl;
        }

        return res;
    }
};