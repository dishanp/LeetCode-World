class Solution {
public:
    void sum(TreeNode *root,int &res){
        if(!root)
            return;
        if(root->left)
        if(!root->left->left and !root->left->right)
            res+=root->left->val;
        sum(root->left,res);
        sum(root->right,res);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int res=0;
        sum(root,res);
        return res;
    }
};