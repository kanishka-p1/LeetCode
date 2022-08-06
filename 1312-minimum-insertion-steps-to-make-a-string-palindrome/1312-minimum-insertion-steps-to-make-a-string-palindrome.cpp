class Solution {
public:
    int lcs(string a, string b, int m, int n) {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(a[i - 1] == b[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        
        return dp[m][n];
    }
    
    int minInsertions(string s) {
        int n = s.length();
        string str = s;
        reverse(str.begin(), str.end());
        
        int ans = n - lcs(s, str, n, n);
        
        return ans;
    }
};