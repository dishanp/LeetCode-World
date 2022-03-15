class Solution {
public:
    int util(vector<vector<int>>& grid,int i,int j,int r,int c){
        if(i<0||j<0||i>=r||j>=c||grid[i][j]==0)
            return 0;
        grid[i][j]=0;
        return 1+util(grid,i+1,j,r,c)+util(grid,i-1,j,r,c)+util(grid,i,j+1,r,c)+util(grid,i,j-1,r,c);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=0;
        int r=grid.size();
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j])
                    res=max(res,util(grid,i,j,r,c));
            }
        }
        return res;
    }
};