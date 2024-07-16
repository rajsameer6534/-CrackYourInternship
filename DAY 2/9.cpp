
//DFS of Graph
#include <bits/stdc++.h>

class Solution {
  public:
    void dfs(int node, vector<int> adj[], vector<bool>& visited, vector<int>& ans) {
        visited[node] = true;
        ans.push_back(node);
        
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, ans);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        vector<int> ans;
        // Starting DFS from node 0 (assuming 0 is a valid node)
        dfs(0, adj, visited, ans);
        return ans;
    }
};



