class Solution {
public:
    
    void subset(vector<int> &arr, int x, vector<int> list, vector<vector<int>> &ans){
    if(x == arr.size()){
        ans.push_back(list);
        return;
    }        
      subset(arr, x + 1, list, ans); // The element is not used to make the subset
      list.push_back(arr[x]);
      subset(arr, x + 1, list, ans); // The element is used to make the subset
      list.pop_back();
  }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> list;
        vector<vector<int>> ans;
        subset(nums, 0, list, ans);
        return ans;
    }
};