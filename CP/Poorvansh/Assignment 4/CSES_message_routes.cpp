#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &adjList, vector<bool> &visited, int node, vector<int> &parent, int n) {
    visited[node] = true;
    queue<int> q;
    q.push(node);

    while (!q.empty()) {
        int currentNode = q.front();
        q.pop();

        if (currentNode == n) break; 

        for (auto neighbor : adjList[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = currentNode; 
            }
        }
    }

    if (visited[n]) { 
        vector<int> path;
        int k = n;
        while (k != -1) { 
            path.push_back(k);
            k = parent[k];
        }
        reverse(path.begin(), path.end()); 

        cout << path.size() << "\n";
        for (auto computer : path) {
            cout << computer << " ";
        }
        cout << "\n";
    } else {
        cout << "IMPOSSIBLE\n";
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n + 1);
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, -1); 

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a); 
    }

    bfs(adjList, visited, 1, parent, n);  

    return 0;
}
