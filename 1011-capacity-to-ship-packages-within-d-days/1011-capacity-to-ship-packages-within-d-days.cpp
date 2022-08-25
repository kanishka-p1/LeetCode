class Solution {
public:
    bool possible(vector<int>& weights, int maxallow, int days) {
        int sum = 0;
        int cnt = 1;
        for(auto it : weights) {
            if(it > maxallow) {
                return false;
            }
            if(sum + it > maxallow) {
                sum = it;
                cnt += 1;
            }
            else {
                sum += it;
            }
        }
        
        return cnt <= days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = 1;
        int high = 0;
        for(auto it : weights) {
            high += it;
        }
        
        int ans = high;
        
        while(low <= high) {
            int mid = (low + high) / 2;
            if(possible(weights, mid, days)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};