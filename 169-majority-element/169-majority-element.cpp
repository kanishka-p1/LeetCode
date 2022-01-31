class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> res;
        int n = nums.size();
        int m = n/2;
        for(auto it : nums){
            res[it]++;
        }
        for(int i = 0; i < n; i++){
            if(res[nums[i]] > m){
                return nums[i]; 
            } 
        }
        return 0;
    }
};