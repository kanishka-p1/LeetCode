class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if(text1.size() == 0 || text2.size() == 0) {
            return 0;
        }
        
        if(text1[0] == text2[0]) {
            return 1 + longestCommonSubsequence(text1.substr(1), text2.substr(1));
        }
        else {
            int x = longestCommonSubsequence(text1.substr(1), text2);
            int y = longestCommonSubsequence(text1, text2.substr(1));
            int z = longestCommonSubsequence(text1.substr(1), text2.substr(1));
            
            return max(x, max(y, z));
        }
    }
};
