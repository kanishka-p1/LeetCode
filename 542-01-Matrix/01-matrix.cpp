class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int dir[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

        queue<pair<int, int>>q;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 0) {
                    q.emplace(i, j);
                }
                else {
                    mat[i][j] = -1;
                }
            }
        }

        while(!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for(int i = 0; i < 4; i++) {
                int nr = r + dir[i][0];
                int nc = c + dir[i][1];
                if(nr < 0 || nc < 0 || nr == m || nc == n || mat[nr][nc] != -1) {
                    continue;
                }
                mat[nr][nc] = mat[r][c] + 1;
                q.emplace(nr, nc);
            }
        }

        return mat;

        // vector<vector<int>> dist(m, vector<int>(n, INT_MAX - 1));

        // for(int i = 0; i < m; i++) {
        //     for(int j = 0; j < n; j++) {
        //         if(mat[i][j] == 0) {
        //             dist[i][j] = 0;
        //             continue;
        //         }
        //         if(i > 0) {
        //             dist[i][j] = min(dist[i][j], dist[i-1][j] + 1);
        //         }
        //         if(j > 0) {
        //             dist[i][j] = min(dist[i][j], dist[i][j-1] + 1);
        //         }
        //     }
        // }

        // for(int i = m - 1; i >= 0; i--) {
        //     for(int j = n - 1; j >= 0; j--) {
        //         if(i != m - 1) {
        //             dist[i][j] = min(dist[i][j], dist[i+1][j] + 1);
        //         }
        //         if(j != n - 1) {
        //             dist[i][j] = min(dist[i][j], dist[i][j+1] + 1);
        //         }
        //     }
        // }

        // return dist;
    }
};
