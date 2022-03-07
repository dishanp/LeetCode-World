class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root)
            return res;
        queue<TreeNode *>q;
        q.push(root);
        int ctr=0;
        while(!q.empty()){
            int s=q.size();
            vector<int>t;
            for(int i=0;i<s;i++){
                TreeNode *x=q.front();
                q.pop();
                t.push_back(x->val);
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }
            if(ctr%2!=0)
            reverse(t.begin(),t.end());
            res.push_back(t);
            ++ctr;
        }
        return res;
}
};