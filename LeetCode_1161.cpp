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
void levelOrderRec(TreeNode *root, int level, vector<vector<int>> &res, vector<int> &levelSum) {
    if(root == nullptr) return;
    
    if(res.size() <= level) {
        res.push_back({});
        levelSum.push_back(0);  
    }
    
    res[level].push_back(root->val);
    levelSum[level] += root->val; 
    
    levelOrderRec(root->left, level + 1, res, levelSum);
    levelOrderRec(root->right, level + 1, res, levelSum);
}

vector<int> levelOrder(TreeNode* root) {
    vector<vector<int>> res;
    vector<int> levelSum;
    levelOrderRec(root, 0, res, levelSum);
    return levelSum;
}
    int maxLevelSum(TreeNode* root) {
        vector<int>ans = levelOrder(root);
        int maxSum = ans[0];
        int maxLevel = 1;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i] > maxSum) {
                maxSum = ans[i];
                maxLevel = i + 1;  
            }
        }

        return maxLevel;
    }
};