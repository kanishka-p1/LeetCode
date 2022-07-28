/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void levelorder(vector<vector<int>>& ans, TreeNode* root, int x) {
        if(root == NULL) {
            return;
        }
        
        if(ans.empty() || x > ans.size() - 1) {
            ans.push_back({});
        }
        
        ans[x].push_back(root->val);
        
        levelorder(ans, root->left, x + 1);
        levelorder(ans, root->right, x + 1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        levelorder(ans, root, 0);
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};