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
    TreeNode* a;
    TreeNode* b;
    TreeNode* prev;
    void util(TreeNode*  root){
        if(root){
            util(root->left);
            if(!a&&prev&&prev->val>root->val)
                a=prev;
            if(a&&prev&&prev->val>root->val)
                b=root;
            prev=root;
            util(root->right);
        }
    }
    void recoverTree(TreeNode* root) {
        util(root);
        swap(a->val,b->val);
    }
};