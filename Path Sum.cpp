class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        int curr = root->val;
        if(curr==sum && root->left==NULL && root->right==NULL) return true;
        return hasPathSum(root->left, sum-curr) || hasPathSum(root->right, sum-curr);
    }
};
