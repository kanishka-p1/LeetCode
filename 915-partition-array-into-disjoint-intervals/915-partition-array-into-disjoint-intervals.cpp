class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int max, curr, ans = 1;
        max = curr = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < max){
                max = curr;
                ans = i + 1;
            }
            else if(nums[i] > curr){
                curr = nums[i];
            }
        }
        return ans;
    }
};