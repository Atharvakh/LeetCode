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
     TreeNode* invertFun(TreeNode* root){
        if(!root) return NULL;
        TreeNode *temp;
        temp = invertFun(root->right);;
        root->right = invertFun(root->left);;
        root->left = temp;
        return root;
    };
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *ans;
        ans = root;
        ans = invertFun(root);
        return ans;
    }
};