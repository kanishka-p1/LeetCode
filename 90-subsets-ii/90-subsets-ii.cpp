class Solution {
public:
    void helper(vector<int>& nums, int x, vector<vector<int>>& res, vector<int>& ans) {
        res.push_back(ans);
        
        for(int i = x; i != nums.size(); i++) {
            if(i == x || nums[i] != nums[i - 1]) {
                ans.push_back(nums[i]);
                helper(nums, i + 1, res, ans);
                ans.pop_back();
            }
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> ans;
        helper(nums, 0, res, ans);
        return res;
    }
};