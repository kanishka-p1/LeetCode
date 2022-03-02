class Solution {
public:
    // USING TWO POINTER
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int i = 0, j = 0;
        while(i < m && j < n) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i == m ? 1 : 0;
    }
    
    /*   USING RECURSION
    bool subset(int m, int n, string s, string t){
        if(m == 0){
            return true;
        }
        if(n == 0){
            return false;
        }
        if(s[m-1] == t[n-1]){
            return subset(m-1, n-1, s, t);
        }
        else
            return subset(m, n-1, s, t);
    }
    
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        return subset(m, n, s, t);
    }
    */
};