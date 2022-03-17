class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int t=-1;
        int fresh=0;
        queue<pair<int,int>>q;
        vector<pair<int,int>>dir;
        dir.push_back({1,0});
        dir.push_back({-1,0});
        dir.push_back({0,-1});
        dir.push_back({0,1});
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1)
                    ++fresh;
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
            auto x=q.front();
            q.pop();
            for(auto i:dir){
                int z=i.first+x.first;
                int y=i.second+x.second;
                if(z>=0 and y>=0 and z<r and y<c and grid[z][y]==1){
                    grid[z][y]=2;
                    --fresh;
                    q.push({z,y});
                }
            }
            }
            ++t;
        }
        if(fresh>0)
            return -1;
        if(t==-1)
            return 0;
        return t;
    }
};