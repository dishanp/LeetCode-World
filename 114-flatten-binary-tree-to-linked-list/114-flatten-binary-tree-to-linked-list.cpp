class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root)
            return;
        flatten(root->left);
        flatten(root->right);
        if(root->left){
            TreeNode *right=root->right;
            root->right=root->left;
            root->left=0;
            while(root->right)
                root=root->right;
            root->right=right;
        }
    }
};