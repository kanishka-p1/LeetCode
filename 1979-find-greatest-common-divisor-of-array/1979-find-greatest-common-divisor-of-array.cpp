class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int s = nums[0];
        int l = nums[n - 1];
        
        int i = 1;
        int ans = 1;
        
        while(i <= min(s, l)) {
            if(s % i == 0 && l % i == 0) {
                ans = i;
            }
            i++;
        }
        return ans;
    }
};