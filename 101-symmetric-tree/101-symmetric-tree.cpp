class Solution {
public:
    bool isSame(TreeNode* p,TreeNode* q){
        if(!p&&!q)
            return 1;
        if(!p||!q)
            return 0;
        return p->val==q->val&&isSame(p->left,q->right)&&isSame(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return isSame(root->left,root->right);
    }
};