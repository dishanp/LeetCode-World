class Solution {
public:
    void dfs(vector<vector<char>>&g,int i,int j){
        if(i<0||j<0||i>=g.size()||j>=g[0].size()||g[i][j]!='1'){
            return;
        }
        g[i][j]='*';
        dfs(g,i+1,j);
         dfs(g,i-1,j);
         dfs(g,i,j+1);
         dfs(g,i,j-1);  
    }
    int numIslands(vector<vector<char>>& g) {
        int ctr=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]=='1'){
                    ++ctr;
                    dfs(g,i,j);
                }
            }
        }
        return ctr;
    }
};