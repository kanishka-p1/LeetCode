class Solution {
public:
    
    bool binary(vector<int> flag, int s, int e, int x){
        while(s <= e){
            int mid = (s + e) / 2;
            if(flag[mid] == x){
                return true;
            }
            else if(x < flag[mid]){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        
        for(int i = 0; i < row; i++){
            if(binary(matrix[i], 0, col-1, target)){
                return true;
            }
        }
        return false;
    }
};