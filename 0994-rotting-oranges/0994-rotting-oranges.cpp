class Solution {
    
    queue<pair<int, int>> train;
    int m=0, n=0;
    int result=0;
    
    bool isSafe(vector<vector<int>>& grid, int i, int j){
        return i >= 0 && i < grid.size() && j >= 0 && j < grid[i].size() && grid[i][j] == 1;
    }
    
    void BFS(int i, int j, int &min, vector<vector<int>>& arr){
    cout<<"in bfs"<<endl;
    if(i>=0 && j>=0 && i<m && i<n && arr[i][j]==1){
    	cout<<"in if"<<endl;
        arr[i][j]=3;
        vector<int> dir= {-1,0,1,0,-1};
        for(int k=0; k< 4; k++){
            BFS(i+ dir[k], j+ dir[k+1], min, arr);
        }
        min++;
    }
    
    
}
    void bfs(int &min, vector<vector<int>>& arr){
        while(train.size()!=0){
            min++;
            int sz = train.size();
            while(sz--){
              pair<int,int> front = train.front(); train.pop();
                int i= front.first, j= front.second;
                cout<<"i j m= { "<<i<<" : "<<j<<"}     |"<<min<<"   | grid[i][j]= "<<arr[i][j]<<endl;
                arr[i][j]=2;
                vector<int> dir= {-1,0,1,0,-1};
                    for(int k=0; k< 4; k++){
                        int nx= i+ dir[k];
                        int ny= j+ dir[k+1];
                        if(isSafe(arr, nx, ny)){
                           train.push({nx, ny});
                           arr[nx][ny]=2;
                        }
                    }
            }
            
        }
        
    }
    
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        m= grid.size(),  n= grid[0].size(); int flag=0, min =-1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==2){
                  train.push({i,j});
                }
            }
        }
        bfs(min, grid);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                  return -1;
                }
            }
        }
        return min==-1?0: min;
    }
};