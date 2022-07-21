class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        temp.push_back(1);
        
        if(rowIndex == 0) {
            return temp;
        }
        
        vector<int> k = getRow(rowIndex - 1);
        int n = k.size();
        
        for(int i = 0 ; i < n - 1; i++) {
            temp.push_back(k[i] + k[i + 1]);
        }
        
        temp.push_back(1);
        
        return temp;
    }
};