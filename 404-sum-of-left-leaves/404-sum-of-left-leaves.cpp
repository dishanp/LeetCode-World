class Solution {
public:
    void util(int &sum,TreeNode *root){
        if(!root)
            return;
        if(root->left)
        if(!root->left->left&&!root->left->right)
        sum+=root->left->val;
        util(sum,root->left);
        util(sum,root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        util(sum,root);
        return sum;
    }
};