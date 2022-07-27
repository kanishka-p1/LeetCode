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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        vector<int> res;
        queue<TreeNode*> q;
        
        if(root == NULL) {
            return v;
        }
        
        res.push_back(root->val);
        q.push(root);
        v.push_back(res);
        
        while(!q.empty()) {
            vector<int> temp;
            int count = q.size();
            
            while(count) {
                if(q.front()->left) {
                    q.push(q.front()->left);
                    temp.push_back(q.front()->left->val);
                }
                if(q.front()->right) {
                    q.push(q.front()->right);
                    temp.push_back(q.front()->right->val);
                }
                q.pop();
                count--;
            }
            if(!temp.empty()) {
                v.push_back(temp);
            }
        }
        return v;
    }
};