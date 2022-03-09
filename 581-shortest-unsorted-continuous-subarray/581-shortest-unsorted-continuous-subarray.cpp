class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int ans = 0;
        int i = 0, j = nums.size() - 1;
        int curr_min = INT_MIN;
        int curr_max = INT_MAX;
        int s = 0, e = -1;
        while(j >= 0){
            if(nums[i] >= curr_min){
                curr_min = nums[i];
            }
            else{
                e = i;
            }
            if(nums[j] <= curr_max){
                curr_max = nums[j];
            }
            else{
                s = j;
            }
            i++;
            j--;
        }
        return e - s + 1;
    }
};