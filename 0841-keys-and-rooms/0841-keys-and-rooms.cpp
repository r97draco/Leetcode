class Solution {
public:
    vector<int>visited;
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int> q;
        int m=rooms.size(), n=rooms[0].size(), res=0;
        visited.assign(m,0);
        
        for(auto i=0; i<rooms[0].size() ; i++){
            q.push(rooms[0][i]);
            visited[0]=1;
        }
        while(!q.empty()){
            int key= q.front();
            visited[key]=1;
            q.pop();
            for(int i=0; i<rooms[key].size(); i++){
                if(visited[rooms[key][i]]==0){
                    q.push(rooms[key][i]);
                }
            }
        }
        
        for(auto i: visited){
            cout<<i<<" ";
            if(!i)return false;
        }
        return true;
    }
};