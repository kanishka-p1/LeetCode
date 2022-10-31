class Solution {
public:

    void dfs(int r, int c, vector<vector<int>>& grid, queue<pair<int, int>>& q, vector<vector<int>>& vis) {
        q.emplace(r, c);
        vis[r][c] = 1;
        int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

        for(int i = 0; i < 4; i++) {
            int x = r + dir[i][0];
            int y = c + dir[i][1];

            if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || vis[x][y] == 1 || grid[x][y] == 0) {
                continue;
            }
            dfs(x, y, grid, q, vis);
        }
    }

    int shortestBridge(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(), 0));
        int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        bool flag = false;

        for(int i = 0; i < grid.size() && !flag; i++) {
            for(int j = 0; j < grid[0].size() && !flag; j++) {
                if(grid[i][j] == 1) {
                    dfs(i, j, grid, q, vis);
                    flag = true;
                }
            }
        }

        int ans = 0;
        while(!q.empty()) {
            int s = q.size();
            while(s-- > 0) {
                auto [r, c] = q.front();
                q.pop();
                for(int i = 0; i < 4; i++) {
                    int nr = r + dir[i][0];
                    int nc = c + dir[i][1];
                    if(nr < 0 || nc < 0 || nr >= grid.size() || nc >= grid[0].size() || vis[nr][nc] == 1) {
                        continue;
                    }
                    if(grid[nr][nc] == 1) {
                        return ans;
                    }
                    q.emplace(nr, nc);
                }
            }
            ans++;
        }

        return -1;
    }
};
