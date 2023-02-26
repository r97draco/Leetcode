class Solution {
public:
    
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n, vector<int>());
        vector<int> degree(n, 0);
        
        for(auto list: prerequisites){
            int i= list[0], k= list[1];
            adj[k].push_back(i);
            degree[i]++;
        }
        queue<int> q;
        for(int i=0; i<n; i++){
         if(degree[i]==0) q.push(i);   
        }
        while(!q.empty()){
            int curr = q.front(); q.pop(); n--;
            for(auto next : adj[curr]){
                if(--degree[next]== 0)q.push(next);
            }
        }
        return n==0;
    }
};