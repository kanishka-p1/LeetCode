class Solution {
public:
    int nextGreaterElement(int n) {
        string arr = to_string(n);
        
        int i = arr.size()-1;
        while(i > 0 && arr[i-1] >= arr[i]){
            i--;
        }
        if(i <= 0){
            return -1;
        }
        int j = arr.size()-1;
        while(j > 0 && arr[i-1] >= arr[j]){
            j--;
        }
        
        swap(arr[i-1], arr[j]);
        reverse(arr.begin() + i, arr.end());
        
        long int res = stoll(arr);
        
        if(res > INT_MAX){
            return -1;
        }
        
        return res;
        
    }
};