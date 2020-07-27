class Solution {
public:
    bool isReflection(TreeNode *p, TreeNode *q){
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        if(p->val!=q->val) return false;
        return (isReflection(p->left, q->right) && isReflection(p->right, q->left));
    }
    bool isSymmetric(TreeNode* root) {
        return isReflection(root, root);  
    }
};
