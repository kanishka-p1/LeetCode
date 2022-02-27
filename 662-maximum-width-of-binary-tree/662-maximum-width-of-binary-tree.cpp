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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int ans = 1;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            int count = q.size();
            int start = q.front().second;
            int end = q.back().second;
            
            ans = max(ans, end - start + 1);
            
            for(int i = 0; i < count; i++){
                pair<TreeNode*, int> p = q.front();
                //leftchild = 2 * id + 1
                //rightchild = 2 * id + 2
                int id = p.second - start;  //to prevent signed overflow
                q.pop();
                if(p.first -> left != NULL){
                    q.push({p.first -> left, (long long) 2 * id + 1});
                }
                if(p.first -> right != NULL){
                    q.push({p.first -> right, (long long) 2 * id + 2});
                }
            }
        }
        return ans;
    }
};