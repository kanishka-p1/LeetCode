class Solution {
public:

    void dfs(vector<vector<int>>& grid, int x, int y) {
        if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == 0) {
            return;
        }
        grid[x][y] = 0;

        dfs(grid, x + 1, y);
        dfs(grid, x - 1, y);
        dfs(grid, x, y + 1);
        dfs(grid, x, y - 1);

    }

    int numEnclaves(vector<vector<int>>& grid) {
        int count = 0;

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(i == 0 || j == 0 || i == grid.size() - 1 || j == grid[0].size() - 1) {
                    if(grid[i][j] == 1) {
                        dfs(grid, i, j);
                    }
                }
            }
        }

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    count++;
                }
            }
        }

        return count;
    }
};
