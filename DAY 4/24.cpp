//Topological sort


class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
    vector<int> topoSort(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> indegree(V, 0);

        // Calculate in-degree of each node
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < adj[i].size(); j++) {
                indegree[adj[i][j]]++;
            }
        }

        queue<int> q;

        // Add nodes with 0 in-degree to the queue
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            // Reduce the in-degree of the adjacent nodes
            for (int neighbor : adj[node]) {
                indegree[neighbor]--;
                if (indegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }

        return ans;
    }
};