class Solution {
public:
    int dfs(vector<vector<int>> &  image, int i, int j, int last, int color){
        if(i<image.size() && j<image[0].size() && i>=0 && j>=0 && image[i][j]==last && image[i][j]!=color){
            image[i][j]=color;
            dfs(image, i-1, j, last, color);
            dfs(image, i+1, j, last, color);
            dfs(image, i, j-1, last, color);
            dfs(image, i, j+1, last, color);
        }
        return 1;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         for(int i=0; i<image.size(); i++){
//             for(int j=0; j<image[0].size(); j++){
                
//             }
//         }
        dfs(image, sr, sc, image[sr][sc], color);
        return image;
    }
};