class Solution {
public:
    /*using map
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
    }*/
    
    //using DP
    int maximumSwap(int num){
       string n = to_string(num);
        int s = n.size();
        vector<int> dp(s, -1);
        
        int currmax = s - 1;  
        for(int i = s - 1; i >= 0; i--){
            if(n[i] > n[currmax]){
                currmax = i;
            }
            dp[i] = currmax;
        }
        
        for(int i = 0; i < s; i++){
            if(n[dp[i]] != n[i]){
                swap(n[dp[i]], n[i]);
                break;
            }
        }
        return stoi(n);
    }
};