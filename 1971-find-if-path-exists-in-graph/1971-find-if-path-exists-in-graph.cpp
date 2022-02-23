class Solution {
public:
    void dfs(int node,vector<vector<int>>&adj,vector<bool>&vis){
    vis[node]=true;
    for(auto i:adj[node])
        if(!vis[i])
            dfs(i,adj,vis);
}
    
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>>adj(n);
        vector<bool>vis(n+1,false);
        
        for(auto &i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        dfs(start,adj,vis);
        
        return vis[end];
    }
};