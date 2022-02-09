class Solution {
public:
    
    vector<string> sol(int n){
        if(n == 1){
            return {"0" ,"1"};
        }
        
        vector<string> res;
        vector<string> prev = sol(n-1);
        
        for(int i = 0; i < prev.size(); i++){
            res.push_back('0' + prev[i]);
        }
        for(int i = prev.size() - 1; i >= 0; i--){
            res.push_back('1' + prev[i]);
        }
        return res;
    }
    
    vector<int> grayCode(int n) {
        vector<string> res = sol(n);
        vector<int> ans;
        for(string st :res){
            ans.push_back(stoi(st, 0, 2));
        }
        return ans;
    }
};