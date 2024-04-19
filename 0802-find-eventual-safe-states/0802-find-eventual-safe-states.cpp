class Solution {
    bool dfsCheck(int node, vector<vector<int>>& adj, vector<int>& vis,
                  vector<int>& check) {
        vis[node] = 1;
        check[node] = 0;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                if (dfsCheck(it, adj, vis, check) == true) {
                    check[node] = 0;
                    return true;
                }
            } else if (!check[it]) {
                check[node] = 0;
                return true;
            }
        }
        check[node] = 1;
        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> vis(V);
        vector<int> pathVis(V);
        vector<int> check(V);
        vector<int> safeNodes;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfsCheck(i, adj, vis, check);
            }
        }
        for (int i = 0; i < V; i++) {
            if (check[i] == 1)
                safeNodes.push_back(i);
        }
        return safeNodes;
    }
};