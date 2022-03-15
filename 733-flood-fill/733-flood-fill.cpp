class Solution {
public:
    void util(vector<vector<int>>&image,int sr,int sc,int nc,int oc,int i,int j){
        if(i<0||j<0||i>=image.size()||j>=image[0].size()||image[i][j]!=oc){
            return;
        }
        image[i][j]=nc;
        util(image,sr,sc,nc,oc,i+1,j);
        util(image,sr,sc,nc,oc,i-1,j);
        util(image,sr,sc,nc,oc,i,j+1);
        util(image,sr,sc,nc,oc,i,j-1);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int nc) {
        if(image[sr][sc]==nc)
            return image;
        util(image,sr,sc,nc,image[sr][sc],sr,sc);
        return image;
    }
};