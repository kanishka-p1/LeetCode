class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    q.emplace(i, j);
                }
            }
        }

        if(q.size() == 0 || q.size() == grid.size() * grid[0].size()) {
            return -1;
        }

        int ans = 0;
        while(!q.empty()) {
            ans++;
            int s = q.size();
            while(s-- > 0) {
                auto [r,c] = q.front();
                q.pop();

                for(int i = 0; i < 4; i++) {
                    int nr = r + dir[i][0];
                    int nc = c + dir[i][1];
                    if(nr < 0 || nc < 0 || nr >= grid.size() || nc >= grid[0].size() || grid[nr][nc] == 1) {
                        continue;
                    }
                    q.emplace(nr, nc);
                    grid[nr][nc] = 1;
                }
            }
        }

        return ans-1;
    }
};
