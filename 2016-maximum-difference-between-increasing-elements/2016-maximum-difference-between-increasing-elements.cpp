class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxdiff = -1;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] < nums[j]){
                    int curr = nums[j] - nums[i];
                    maxdiff = max(maxdiff, curr);
                }
            }
        }
        return maxdiff;
    }
};