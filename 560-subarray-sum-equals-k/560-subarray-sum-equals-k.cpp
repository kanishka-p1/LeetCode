class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int ans = 0, sum = 0, n = nums.size();
        
        for(auto it : nums){
            sum += it;
            if(sum == k){
                ans++;
            }
            if(freq.count(sum - k)){
                ans += freq[sum - k];
            }
            freq[sum]++;
        }
        return ans;
    }
};