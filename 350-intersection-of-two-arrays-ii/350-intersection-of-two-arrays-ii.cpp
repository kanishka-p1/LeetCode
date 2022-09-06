class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for(auto x : nums1) {
            mp[x]++;
        }
        
        
        for(auto it : nums2) {
            if(mp[it]) {
                ans.push_back(it);
                mp[it]--;
            }
        }
        return ans;
    }
};