class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int zero = count(nums.begin(), nums.end(), 0);
        if(zero > 1){
            return vector<int> (n);
        }
        for(auto it : nums){
            if(it != 0){
                prod *= it;
            }
        }
        for(auto &it : nums){
            if(zero == 1){
                if(it != 0){
                    it = 0;
                }
                else{
                    it = prod;
                }
            }
            else{
                it = prod / it;
            }
        }
        return nums;
    }
};