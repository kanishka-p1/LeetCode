class Solution {
public:
    //Kadane's algorithm
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = INT_MIN;
        for(auto it : nums){
            sum = max(it, sum + it);
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};