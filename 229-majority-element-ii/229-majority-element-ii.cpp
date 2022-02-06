class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> res;
        int n = nums.size();
        int m = n / 3;
        vector<int> ans;
        
        for(auto it : nums){
            res[it]++;
        }
        
        for(auto it : res){
            if(it.second > m){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};