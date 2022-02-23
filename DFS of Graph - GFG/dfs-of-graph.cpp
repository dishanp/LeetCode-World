// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void util(int V,vector<int>&res,vector<int>adj[],vector<bool>&vis){
        res.push_back(V);
        vis[V]=true;
        for(auto i:adj[V])
       {   
           if(vis[i]==0)
           util(i,res,adj,vis);
       }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>res;
        vector<bool>vis(V+1,false);
        util(0,res,adj,vis);
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends