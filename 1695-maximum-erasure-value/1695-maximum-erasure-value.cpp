class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size(), l = 0, r = 0, cur = 0, ans = 0;
        unordered_set<int> s;
        
        while(r < n) {
            while(s.find(nums[r]) != end(s)) {
                cur -= nums[l];
                s.erase(nums[l++]);
            }
            cur += nums[r];
            s.insert(nums[r++]);
            ans = max(ans, cur);
        }
        return ans;
    }
};