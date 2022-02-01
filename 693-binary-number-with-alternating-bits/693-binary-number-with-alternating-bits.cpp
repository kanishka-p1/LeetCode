class Solution {
public:
    bool hasAlternatingBits(int n) {
        //return !((n ^= n/2) & n + 1);
        int x = n % 2;
        while(n){
            int y = x;
            n = n / 2;
            x = n % 2;
            if(x == y){
                return false;
            }
        }
        return true;
    }
};