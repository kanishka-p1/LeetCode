class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        
        vector<vector<int>> t(n + 1, vector<int>(amount + 1, 0));
        
        for(int j = 1; j <= amount; j++) {
            t[0][j] = INT_MAX - 1;
        }
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= amount; j++) {
                if(coins[i - 1] <= j) {
                    t[i][j] = min(t[i - 1][j], t[i][j - coins[i - 1]] + 1);
                }
                else {
                    t[i][j] = t[i - 1][j];
                }
            }
        }
        
        if(t[n][amount] == INT_MAX - 1) {
            return -1;
        }
        else {
            return t[n][amount];
        }
    }
};