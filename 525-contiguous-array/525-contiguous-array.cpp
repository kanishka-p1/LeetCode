class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        unordered_map<int, int> ans;
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                sum -= 1;
            }
            else if(nums[i] == 1){
                sum += 1;
            }
            if(sum == 0){
                res = max(res, i+1);
            }
            if(ans.find(sum) != ans.end()){
                res = max(res, i - ans[sum]);
            }
            else{
                ans[sum] = i;
            }
        }
        return res;
    }
};