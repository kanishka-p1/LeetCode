class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int x = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i + 1 == nums.size() || nums[i] + 1 != nums[i+1]){
                string temp = to_string(nums[x]);
                if(i != x){
                    temp += "->" + to_string(nums[i]);
                }
                ans.push_back(temp);
                x = i + 1;
            }
        }
        return ans;
    }
};