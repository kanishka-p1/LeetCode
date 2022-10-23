class Solution {
public:

    void dfs(vector<vector<int>>& grid, int row, int col, int clr) {
        if(row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] != clr || grid[row][col] < 0) {
            return;
        }        

        grid[row][col] = -clr;
        
        dfs(grid, row + 1, col, clr);
        dfs(grid, row, col + 1, clr);
        dfs(grid, row - 1, col, clr);
        dfs(grid, row, col - 1, clr);

        if(row > 0 && col > 0 && row < grid.size() - 1 && col < grid[0].size() - 1 && clr == abs(grid[row-1][col]) && clr == abs(grid[row+1][col]) && clr == abs(grid[row][col-1]) && clr == abs(grid[row][col+1])) {
            grid[row][col] = clr;
        }
    }

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        dfs(grid, row, col, grid[row][col]);

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
