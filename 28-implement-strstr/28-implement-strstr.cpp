class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            for (; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == n) {
                return i;
            }
        }
        return -1;
    }
//         int n = haystack.length();
//         int m = needle.length();
                
//         if(n == 0 || m == 0 || m > n) {
//             return -1;
//         }
        
//         if(m == n && haystack == needle) {
//             return 0;
//         }
        
//         for(int i = 0; i < n - m; i++) {
//             int j = 0;
//             for(; j < m; j++) {
//                 if(haystack[i + j] != needle[j]) {
//                     break;
//                 }
//             }
//             if(j == m) {
//                 return i;
//             }
//         }
        
//         return -1;
//     }
};