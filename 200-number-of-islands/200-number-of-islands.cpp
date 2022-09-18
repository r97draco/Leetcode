class Solution {
public:
    void dfs(int i, int j,vector<vector<char>>& g, vector<vector<int>>& vis){
        if(i < 0 || j<0 || i>= g.size() || j>=g[0].size())
            return;
        if(vis[i][j]==1 || g[i][j]!='1')
            return;
        vis[i][j]=1;
        char c = g[i][j];
        g[i][j]= '0';  
        dfs(i-1, j, g, vis);
        dfs(i+1, j, g, vis);
        dfs(i, j+1, g, vis);
        dfs(i, j-1, g, vis);
        g[i][j]=c;
        return;
    }
    
    int numIslands(vector<vector<char>>& g) {
        int m= g.size(), n=g[0].size(), count=0;
        vector<vector <int>> vis(m, vector<int> (n, 0));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(g[i][j]=='1' && !vis[i][j]){
                    dfs(i, j, g, vis);
                    count++;
                }
            }
        }
        return count;
    }
};