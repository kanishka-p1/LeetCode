class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> rev;
        vector<int> ref;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ref.push_back(matrix[j][i]);
            }
            reverse(ref.begin(), ref.end());
            rev.push_back(ref);
            ref.clear();
        }
        matrix.clear();
        for(auto ref : rev){
            matrix.push_back(ref);
        }
    }
};