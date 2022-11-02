class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int i = 0, j;
        // for (j = 0; j < nums.size(); ++j) {
        //     if (nums[j] == 0) {
        //         k--;
        //     }
        //     if (k < 0 && nums[i++] == 0) {
        //         k++;
        //     }
        // }
        // return j - i;
        int s = 0, count = 0, ans = 0;
        for(int e = 0; e < nums.size(); e++) {
            if(nums[e] == 0) {
                count++;
            }
            if(count > k) {
                if(nums[s] == 0) {
                    count--;
                }
                s++;
            }
            ans = max(ans, e-s+1);
        }
        return ans;
        
    }
};
