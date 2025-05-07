class Solution {
public:
    int sumNumbers(TreeNode* root) {
       return currentSum(root,0);
    }
    int currentSum(TreeNode *t,int sum)
    {
        if(!t) return 0;
        sum = sum*10+t->val;
        if (!t->left && !t->right)
        {
            return sum;
        }
        int s1 = currentSum(t->left,sum);
        int s2 = currentSum(t->right,sum);
       
        return s1+s2;
    }
};