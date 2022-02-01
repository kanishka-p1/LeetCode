class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i, j;
        for(i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){   //finding the breakpoint of the number ->|<-
                break;
            }
        }
        if(i < 0){
            reverse(nums.begin(), nums.end()); //in case of no breakpoint ex: 54321
        }
        else{
            for(j = n-1; j > i; j--){  
                if(nums[j] > nums[i]) //number just largest that ith pos
                    break;
            }
            swap(nums[i], nums[j]);  //swap the two 
            reverse(nums.begin() + i + 1, nums.end());  
        }
    }
};