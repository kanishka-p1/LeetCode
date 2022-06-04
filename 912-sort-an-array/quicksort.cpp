class Solution {
public:
    
    int partition(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int count = 0;
        for(int i = low + 1; i <= high; i++) {
            if(nums[i] <= pivot) {
                count++;
            }
        }
        int pivotindex = low + count;
        nums[low] = nums[pivotindex];
        nums[pivotindex] = pivot;
        
        int i = low, j = high;
        while(i < pivotindex && j > pivotindex) {
           if(nums[i] > nums[pivotindex] && nums[j] <= nums[pivotindex]) {
               swap(nums[i], nums[j]);
           }
            if(nums[j] >= nums[pivotindex]) {
                j--;
            }
            if(nums[i] <= nums[pivotindex]) {
                i++;
            }
        }
        return pivotindex;
    }
    
    void quicksort(vector<int>& nums, int low, int high) {
        if(low < high) {
            int index = partition(nums, low, high);
            quicksort(nums, low, index-1);
            quicksort(nums, index+1, high);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size()-1);
        return nums;
    }
};
