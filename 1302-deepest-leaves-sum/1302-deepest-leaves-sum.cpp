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
    int deepestLeavesSum(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode* >q;
        q.push(root);
        int last=0;
        while(!q.empty()){
            int s=q.size();
            last=0;
            for(int i=0;i<s;i++){
                TreeNode* x=q.front();
                q.pop();
                last+=x->val;
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }
        }
        return last;
    }
};