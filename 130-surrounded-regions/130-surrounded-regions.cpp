class Solution {
public:
    int dfs(int i, int j, vector<vector<char>>& board, char dir){
        if(i<0 || j<0 || i>=board.size() || j>= board[0].size()){
            return 0;
        }
        if( board[i][j]=='X')return 0;
    
        if(board[i][j]=='O'){
            // char c= board[i][j];
            board[i][j]='#';

            if(dir!='d') dfs(i-1, j, board, 'u');
            if(dir!='u') dfs(i+1, j, board, 'd');
            if(dir!='r') dfs(i, j-1, board, 'l');
            if(dir!='l') dfs(i, j+1, board, 'r');
            // board[i][j]=c;
        }

        return 0;
        
    }
    void solve(vector<vector<char>>& board) {
        char dir='a';
        int m=board.size(), n=board[0].size();
        for(int i=0; i<n; i++){
            if(board[0][i]=='O'){
                dfs(0, i, board, dir);
            }
            if(board[m-1][i]=='O'){
                dfs(m-1, i, board, dir);
            }
        }
        for(int i=0; i<m; i++){
            if(board[i][0]=='O'){
                dfs(i, 0, board, dir);
            }
            if(board[i][n-1]=='O'){
                dfs(i, n-1, board, dir);
            }
        }
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
            }
        }
        // return board;
    }
};

/*
["O","X","X","O","X"],
["X","O","O","X","O"],
["X","O","X","O","X"],
["O","X","O","O","O"],
["X","X","O","X","O"]

["O","X","X","O","X"],
["X","X","X","X","O"],
["X","X","X","X","X"],
["O","X","O","O","O"],
["X","X","O","X","O"]

["O","X","X","O","X"],
["X","X","X","X","O"],
["X","X","X","O","X"],
["O","X","O","O","O"],
["X","X","O","X","O"]
*/