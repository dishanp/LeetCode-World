class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c!=mat.size()*mat[0].size())
            return mat;
        vector<vector<int>>res;
        int k=0;
        vector<int>temp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                temp.push_back(mat[i][j]);
            }
        }
        for(int i=0;i<r;i++){
            vector<int>r;
        for(int j=0;j<c;j++){
            r.push_back(temp[k++]);
        }
            res.push_back(r);
        }
        return res;
    }
};