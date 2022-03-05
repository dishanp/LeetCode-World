class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& mat, int m, int n) {
        vector<vector<int>>res;
        if(m*n!=mat.size())
            return res;
        int k=0;
        for(int i=0;i<m;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(mat[k++]);
            }
            res.push_back(temp);
        }
        return res;
    }
};