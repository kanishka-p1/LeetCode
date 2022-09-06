class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> freq;
        vector<int> ans;
        for(auto it : nums) {
            for(auto x : it) {
                freq[x]++;
                if(freq[x] == nums.size()) {
                    ans.push_back(x);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};