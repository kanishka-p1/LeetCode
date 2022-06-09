class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n - 1; i++) {
            int l = i + 1;
            int h = n;
            while(l < h) {
                int mid = l + (h - l) / 2;
                if(numbers[mid] == target - numbers[i]) {
                    return {i + 1, mid + 1};
                }
                else if(numbers[mid] > target - numbers[i]) {
                    h = mid;
                }
                else {
                    l = mid + 1;
                }
            }
            if(l != n && numbers[l] == target - numbers[i]) {
                return {i + 1, l + 1};
            }
        }
        return {};
    }
};