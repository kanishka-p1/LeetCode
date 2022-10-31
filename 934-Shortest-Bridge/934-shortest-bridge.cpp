class Solution {
public:
    int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

    void dfs(vector<vector<int>>& grid, int r, int c, queue<pair<int, int>>& q) {
        q.emplace(r, c);
        grid[r][c] = 2;
        for(int i = 0; i < 4; i++) {
            int nr = r + dir[i][0];
            int nc = c + dir[i][1];
            if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() && grid[nr][nc] == 1) {
                dfs(grid, nr, nc, q);
            }
        }
    }

    int shortestBridge(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        bool flag = 0;

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    dfs(grid, i, j, q);
                    flag = true;
                    break;
                }
            }
            if(flag) {
                break;
            }
        }

        int ans = 0;
        while(!q.empty()) {
            int s = q.size();
            for(int i = 0; i < s; i++) {
                auto [r, c] = q.front();
                q.pop();
                for(int i = 0; i < 4; i++) {
                    int nr = r + dir[i][0];
                    int nc = c + dir[i][1];
                    if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size()) {
                        if(grid[nr][nc] == 1) {
                            return ans;
                        }
                        if(grid[nr][nc] == 0) {
                            grid[nr][nc] = 2;
                            q.emplace(nr, nc);
                        }
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};
