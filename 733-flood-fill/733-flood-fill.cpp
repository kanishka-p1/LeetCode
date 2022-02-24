class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int newcolor, int rows, int col, int source){
        if(sr < 0 || sr >= rows || sc < 0 || sc >= col){
            return;
        }
        else if(image[sr][sc] != source){
            return;
        }
        image[sr][sc] = newcolor;
        dfs(image, sr - 1, sc, newcolor, rows, col, source); //top
        dfs(image, sr, sc - 1, newcolor, rows, col, source); //left
        dfs(image, sr + 1, sc, newcolor, rows, col, source); //down
        dfs(image, sr, sc + 1, newcolor, rows, col, source); //right
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor == image[sr][sc]){
            return image;
        }
        int rows = image.size();
        int col = image[0].size();
        int source = image[sr][sc];
        dfs(image, sr, sc, newColor, rows, col, source);
        return image;
    }
};