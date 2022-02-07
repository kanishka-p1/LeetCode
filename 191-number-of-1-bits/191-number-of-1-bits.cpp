class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0){
            int rsbm = n & -n;
            n -= rsbm;
            count++;
        }
        return count;
    }
};