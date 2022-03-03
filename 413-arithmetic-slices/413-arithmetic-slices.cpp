class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n < 3){
            return 0;
        }
        int ans = 0, curr = 0, diff = nums[1] - nums[0];
        for(int i = 1; i < n - 1; i++){
            int curr_diff = nums[i+1] - nums[i];
            
            if(diff == curr_diff){
                curr++;
            }
            else{
                diff = curr_diff;
                curr = 0;
            }
            ans += curr;
        }
        return ans;
    }
};