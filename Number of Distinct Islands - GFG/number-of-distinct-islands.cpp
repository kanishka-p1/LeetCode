//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool check(vector<vector<int>>& grid, int i, int j) {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1) {
            return false;
        }
        return true;
    }
  
    void dfs(vector<vector<int>>& grid, string& str, int i, int j) {
        grid[i][j] = 0;
        
        if(check(grid, i-1, j)) {
            str += "u";
            dfs(grid, str, i - 1, j);
        }
        
        if(check(grid, i, j+1)) {
            str += "r";
            dfs(grid, str, i, j + 1);
        }
        
        if(check(grid, i+1, j)) {
            str += "d";
            dfs(grid, str, i + 1, j);
        }
        
        if(check(grid, i, j-1)) {
            str += "l";
            dfs(grid, str, i, j - 1);
        }
        
        str += "z";
    }
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        unordered_map<string, int> freq;
        
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] == 1) {
                    string str = "x";
                    dfs(grid, str, i, j);
                    if(freq.find(str) == freq.end()) {
                        freq[str] = 1;
                    }
                }
            }
        }
        
        return freq.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends
