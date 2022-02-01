class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int currmin = INT_MAX, res = 0;
        for(int i = 0; i < nums.size(); i++){
            currmin = min(currmin, nums[i]);
            res = max(res, nums[i] - currmin);
        }
        if(res == 0){
            return -1;
        }
        else
            return res;
    }
};