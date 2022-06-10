class Solution {
public:
    
    int lcs_mem(string text1, string text2, int **output) {
        int m = text1.size();
        int n = text2.size();
        
        if(text1.size() == 0 || text2.size() == 0) {
            return 0;
        }
        
        if(output[m][n] != -1) {
            return output[m][n];
        }
        
        int ans;
        if(text1[0] == text2[0]) {
            return 1 + lcs_mem(text1.substr(1), text2.substr(1), output);
        }
        else {
            int x = lcs_mem(text1.substr(1), text2, output);
            int y = lcs_mem(text1, text2.substr(1), output);
            int z = lcs_mem(text1.substr(1), text2.substr(1), output);
            
            ans = max(x, max(y, z));
        }
        
        output[m][n] = ans;
        
        return ans;
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        
        int **output = new int*[m + 1];
        for(int i = 0; i < m + 1; i++) {
            output[i] = new int[n + 1];
            for(int j = 0; j < n + 1; j++) {
                output[i][j] = -1;
            }
        }
        return lcs_mem(text1, text2, output);
    }
};
