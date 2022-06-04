class Solution {
public:
    
    void merge(vector<int>& nums, int low, int mid, int high) {
        int i = low, j = mid + 1, k = 0;
        vector<int> ans(high - low + 1);
        
        while(i <= mid && j <= high) {
            if(nums[i] <= nums[j]) {
                ans[k++] = nums[i++];
            }
            else {
                ans[k++] = nums[j++];
            }
        }
        
        while(i <= mid) {
            ans[k++] = nums[i++];
        }
        
        while(j <= high) {
            ans[k++] = nums[j++];
        }
        
        j = 0;
        for(int i = low; i <= high; i++) {
            nums[i] = ans[j++];
        }
    }
    
    void mergesort(vector<int>& nums, int low, int high) {
        if(low < high) {
            int mid = (high - low) / 2 + low;
            mergesort(nums, low, mid);
            mergesort(nums, mid+1, high);
            merge(nums, low, mid, high);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};