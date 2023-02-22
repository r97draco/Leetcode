class Solution {
public:
    // vector<vector<int>> visited;
    int dfs(int i, int j, vector<vector<char>>& grid){
        if(i>=0 && j>=0 && i<grid.size() && j<grid[0].size() && grid[i][j]=='1'){
            grid[i][j]='0';
            dfs(i-1, j, grid);
            dfs(i, j-1, grid);
            dfs(i+1, j, grid);
            dfs(i, j+1, grid);
        }
        return 1;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size(), m= grid[0].size(), count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};