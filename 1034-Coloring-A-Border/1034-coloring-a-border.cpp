class Solution {
public:

    void dfs(vector<vector<int>>& grid, int row, int col) {
        int dir[4][2] = {{1,0}, {0,1}, {-1, 0}, {0, -1}};
        grid[row][col] = -grid[row][col];
        int count = 0;

        for(int i = 0; i < 4; i++) {
            int x = row + dir[i][0];
            int y = col + dir[i][1];

            if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size()) {
                continue;
            }
            
            if(abs(grid[row][col]) == abs(grid[x][y])) {
                count++;
                if(grid[x][y] >= 0) {
                    dfs(grid, x, y);
                }
            }
        }

        if(count == 4) {
            grid[row][col] = -grid[row][col];
        }
    }

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        dfs(grid, row, col);

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] < 0) {
                    grid[i][j] = color;
                }
            }
        }

        return grid;
    }
};
