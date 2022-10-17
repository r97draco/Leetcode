class Solution {
public:
    vector<vector<int>> visited;
    int dfs(vector<vector<int>> &grid, int x, int y, int& sum){
        if(x>=grid.size() || y>=grid[0].size() || x<0|| y<0){
            return 0;
        }
        if( grid[x][y] == 1 && visited[x][y]==0){
            visited[x][y]=1;
            sum++;
            dfs(grid, x-1, y, sum);
            dfs(grid, x+1, y, sum);
            dfs(grid, x, y-1, sum);
            dfs(grid, x, y+1, sum);
        }
        // int val=sum;
        return 1;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        visited.assign(grid.size(), vector<int> (grid[0].size(),0));
            int mx=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
            int val=0;
                
                if(visited[i][j]==0 && grid[i][j]==1){
                    dfs(grid, i,j, val);
                    mx = max(mx, val);
                }
            }
        }
        return mx;
    }
};