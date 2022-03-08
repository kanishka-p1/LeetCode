int dfs(vector<vector<int>>& grid, int i,int j)
{
    
    int ans=0, temp=0;
    if(i>=grid.size() || i<0 || j<0 || j>=grid[0].size() || grid[i][j]==0) return 0;
    temp=grid[i][j];
    grid[i][j]=0;
    ans = max(ans,dfs(grid,i-1,j));
    ans = max(ans,dfs(grid,i+1,j));
    ans = max(ans,dfs(grid,i,j+1));
    ans = max(ans,dfs(grid,i,j-1));
    grid[i][j] = temp;
    return ans+temp;
}

class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid){
        
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]>0){
                    ans = max(ans,dfs(grid,i,j));
                }
            }
        }
        return ans;
    }
};

/*class Solution {
public:
    
    int maxgold(vector<vector<int>> grid, int i, int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] <= 0){
            return 0;
        }
        grid[i][j] = -grid[i][j];
        int ans = 0;
        ans = max(ans, maxgold(grid, i + 1, j));
        ans = max(ans, maxgold(grid, i, j + 1));
        ans = max(ans, maxgold(grid, i - 1, j));
        ans = max(ans, maxgold(grid, i, j - 1));
        grid[i][j] = -grid[i][j];
        
        return grid[i][j] + ans;
    }
    
    int getMaximumGold(vector<vector<int>>& grid) {
        int sum = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                sum = max(sum, maxgold(grid, i, j));
            }
        }
        return sum;
    }
};*/