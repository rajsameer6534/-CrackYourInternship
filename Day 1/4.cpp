// Geeks For Geeks BFS of graph
// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
#include <bits/stdc++.h>
lass Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    queue<int>q;
    vector<bool>visited(V,0);
    q.push(0);
    visited[0]=1;
    vector<int>ans;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(int j=0;j<adj[node].size(); j++){
            if(!visited[adj[node][j]]){
                visited[adj[node][j]]=1;
                q.push(adj[node][j]);
            }
        }
    }
    return ans;
    }
};