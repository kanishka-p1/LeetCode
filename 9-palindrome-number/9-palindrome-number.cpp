class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        string n = to_string(x);
        reverse(n.begin(), n.end());
        if(n == to_string(x))
            return true;
        else
            return false;
    }
};