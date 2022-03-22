class Solution {
public:
    int maximumSwap(int num) {
        string n = to_string(num);
        unordered_map<int, int> flag;
        for(int i = 0; i < n.size(); i++){
            flag[n[i] - '0'] = i;
        }
        for(int i = 0; i < n.size(); i++){
            for(int j = 9; j > n[i] - '0'; j--){
                if(flag[j] > i){
                    swap(n[flag[j]], n[i]);
                    return stoi(n);
                }
            }
        }
        return stoi(n);
    }
};