class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int fuel = 0;
        int sum = 0;
        int start = 0;
        
        for(int i = 0; i < n; i++) {
            fuel += gas[i] - cost[i];
            sum += gas[i] - cost[i];
            
            if(fuel < 0) {
                fuel = 0;
                start = i + 1;
            }
        }
        
        if(sum >= 0) {
            return start % n;
        }
        
        return -1;
    }
};