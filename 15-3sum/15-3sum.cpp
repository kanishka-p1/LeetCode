class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            int res = -nums[i];
            int l = i + 1;
            int r = nums.size() - 1;
            while(l < r){
                int sum = nums[l] + nums[r];
                if(sum < res){
                    l++;
                }
                else if(sum > res){
                    r--;
                }
                else{
                    vector<int> triplet = {nums[i], nums[l], nums[r]};
                    ans.push_back(triplet);
                    while(l < r && nums[l] == triplet[1])
                        l++;
                    while(l < r && nums[r] == triplet[2])
                        r--;
                }
            }
            while(i + 1 < nums.size() && nums[i + 1] == nums[i])
                i++;
        }
        return ans;
    }
};