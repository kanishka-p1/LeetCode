class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int, double> m;
        for(int i = 0; i < position.size(); i++){
            m[-position[i]] = (double) (target - position[i]) / speed[i];
        }
        int ans = 0; 
        double curr = 0;
        for(auto it : m){
            if(it.second > curr){
                curr = it.second;
                ans++;
            }
        }
        return ans;
    }
};