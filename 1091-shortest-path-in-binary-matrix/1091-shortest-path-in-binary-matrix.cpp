class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> path(n, vector<int>(m, 0));
        path = grid;
        
        if(grid[0][0] == 1) {
            return -1;
        }
        
        path[0][0] = 1;
        queue<pair<int, int>> q;
        q.push({0, 0});
        while(!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            
            if(i == n - 1 && j ==  m - 1) {
                return path[i][j];
            }
            
            int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
            int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
            
            for(int dir = 0; dir < 8; dir++) {
                int newx = i + dx[dir];
                int newy = j + dy[dir];
                
                if(newx >= 0 && newx < n && newy >= 0 && newy < m && path[newx][newy] == 0) {
                    q.push({newx, newy});
                    path[newx][newy] = 1 + path[i][j];
                    if(newx == n - 1 && newy == m - 1) {
                        return path[newx][newy];
                    }
                }
            }
        }
        return -1;
    }
};