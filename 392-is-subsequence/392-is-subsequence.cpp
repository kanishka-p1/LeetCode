class Solution {
public:
    
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
};