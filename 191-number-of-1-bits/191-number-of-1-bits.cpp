class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0, res;
        while(n){
            res = n % 2;
            if(res == 1){
                count++;
            }
            n /= 2;
        }
        return count;
    }
};