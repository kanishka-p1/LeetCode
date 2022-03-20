class Solution {
public:
    int n, m;
    
    int area(int i, int j, vector<vector<int>>& grid){
        if(i < 0 || j < 0 || i >= n || j >= m || !grid[i][j]){
            return 0;
        }
        grid[i][j] = 0;
        int a = area(i - 1, j, grid);
        int b = area(i, j - 1, grid);
        int c = area(i + 1, j, grid);
        int d = area(i, j + 1, grid);
        return 1 + a + b + c + d;

    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        n = grid.size();
        m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j]){
                    ans = max(ans, area(i, j, grid));
                }
            }
        }
        return ans;
    }
};