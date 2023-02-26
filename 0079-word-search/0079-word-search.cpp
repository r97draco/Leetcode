class Solution {
    vector<vector<int>> visited;
    bool dfs(int i, int j, vector<vector<char>>& board, string& word, int k){
        bool up = false, down= false, right = false, left= false;
        if(i>=0 && i< board.size() && j>=0 && j<board[0].size() && k<word.size() && board[i][j]==word[k]){
            if(k== word.size()-1) return true;
            char temp = board[i][j];
            board[i][j] = '1';
            up = dfs(i+1, j, board, word, k+1);
            left = dfs(i, j+1, board, word, k+1);
            down = dfs(i-1, j, board, word, k+1);
            right = dfs(i, j-1, board, word, k+1);
            board[i][j] = temp;
        }
        return left || right || up || down;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m= board.size(), n=board[0].size();
        bool res= false;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(word[0]== board[i][j]){
                    res= dfs(i,j, board, word, 0);
                    if(res)return true;
                }
            }
        }
        return res;
    }
};