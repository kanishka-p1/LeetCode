class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int countfresh = 0;
        int ans = -1;

        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 2) {
                    q.emplace(i, j);
                }
                else if(grid[i][j] == 1) {
                    countfresh++;
                }
            }
        }

        if(countfresh == 0) {
            return 0;
        }

        int dir[4][2] = {{-1, 0}, {0, 1}, {0, -1}, {1, 0}};

        while(!q.empty()) {
            int s = q.size();
            ans++;
            while(s-- > 0) {
                auto [r, c] = q.front();
                q.pop();

                for(int i = 0; i < 4; i++) {
                    int nr = r + dir[i][0];
                    int nc = c + dir[i][1];
                    if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size() && grid[nr][nc] == 1) {
                        q.emplace(nr, nc);
                        grid[nr][nc] = 0;
                        countfresh--;
                    }
                }
            }
        }

        if(countfresh == 0) {
            return ans;
        }
        else {
            return -1;
        }
    }
};
