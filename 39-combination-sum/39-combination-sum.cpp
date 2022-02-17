class Solution {
public:
    
    void combination(int x, int target,vector<int> &arr, vector<vector<int>> &res, vector<int> &ans){
        if(x == arr.size()){   //if it checked for all indexes
            if(target == 0){      //if target is found
                res.push_back(ans);
            }
            return;
        }
        if(arr[x] <= target){   //if we pick the element    
            ans.push_back(arr[x]);   
            combination(x, target - arr[x], arr, res, ans);
            ans.pop_back();   //pop the extra element on returning 
        }
        combination(x + 1, target, arr, res, ans); //element not picked
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        combination(0, target, candidates, res, ans);
        return res;
    }
};