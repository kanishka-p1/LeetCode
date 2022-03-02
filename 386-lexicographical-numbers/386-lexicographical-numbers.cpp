class Solution {
public:
    
    void order(int x, int n, vector<int>& result){
        if(x > n){
            return;
        }
        result.push_back(x);
        order(x * 10, n, result);
        if(x % 10 != 9){
            order(x + 1, n, result);
        }
    }
    
    vector<int> lexicalOrder(int n) {
        vector<int> result;
        order(1, n, result);
        return result;
    }
};