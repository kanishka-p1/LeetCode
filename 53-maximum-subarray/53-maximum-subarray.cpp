class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, sum = 0;
        for(auto it : nums){
            sum = max(it, sum + it);
            ans = max(sum, ans);
        }
        return ans;
    }
};