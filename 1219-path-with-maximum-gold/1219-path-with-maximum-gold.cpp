class Solution {
public:
    
    int maxgold(vector<vector<int>>& grid, int i, int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0){
            return 0;
        }
        int ans = 0;
        int temp = grid[i][j];
        grid[i][j] = 0;
        ans = max(ans, maxgold(grid, i - 1, j));
        ans = max(ans, maxgold(grid, i + 1, j));
        ans = max(ans, maxgold(grid, i, j + 1));
        ans = max(ans, maxgold(grid, i, j - 1));
        grid[i][j] = temp;
        
        return temp + ans;
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int sum = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] > 0){
                    sum = max(sum, maxgold(grid, i, j));                    
                }
            }
        }
        return sum;
    }
};