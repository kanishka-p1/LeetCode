class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int temp = 0;
        int count = 0;
        
        for(int i = 0; i < arr.size(); i++){
            temp = max(temp, arr[i]);
            if(i == temp){
                count++;
            }
        }
        
        return count;
    }
};