class Solution {
public:
    
    const vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> result;
        result.push_back("");
        
        for(auto it : digits){
            vector<string> temp;
            for(auto x : pad[it - '0']){
                for(auto y : result){
                    temp.push_back(y + x);
                }
            }
            result.swap(temp);
        }
        return result;
    }
};