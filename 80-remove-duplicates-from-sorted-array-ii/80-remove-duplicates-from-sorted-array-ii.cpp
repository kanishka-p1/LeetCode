class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2){
            return n;
        }
        
        int ptr = 2;
        for(int i = 2; i < n ; i++){
            if(nums[ptr - 2] != nums[i]){
                nums[ptr++] = nums[i];
            }
        }
        return ptr;
    }
};