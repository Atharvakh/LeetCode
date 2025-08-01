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
    int isBalancedRec(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int lHeight = isBalancedRec(root->left);
        int rHeight = isBalancedRec(root->right);

        if(lHeight==-1) 
        {
            return -1;
        }
        if(rHeight == -1)
        {
            return -1;
        }
        if(abs(lHeight - rHeight)>1)
        {
            return -1;
        }

        return max(lHeight,rHeight)+1;
    }
    bool isBalanced(TreeNode *root)
    {
        return (isBalancedRec(root)!=-1);
    }

};