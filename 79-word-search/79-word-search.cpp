class Solution {
public:
    
    bool helper(vector<vector<char>>& board, string word, int i, int j, int s) {
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[s]) {
            return false;
        }
        
        if(s == word.size() - 1) {
            return true;
        }
        
        board[i][j] = '0';
        
        if(helper(board, word, i + 1, j, s + 1)){
            return true;
        }
        if(helper(board, word, i, j + 1, s + 1)){
            return true;
        }
        if(helper(board, word, i - 1, j, s + 1)){
            return true;
        }
        if(helper(board, word, i, j - 1, s + 1)){
            return true;
        }
        
        board[i][j] = word[s];
        
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                bool ans = helper(board, word, i, j, 0);
                if(ans)
                    return true;
            }
        }
        
        return false;
    }
};