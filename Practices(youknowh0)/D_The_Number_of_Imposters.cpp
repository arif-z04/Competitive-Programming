#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool bfs(int node, vector<vector<int>> &graph, vector<int> &color) {
    queue<int> q;
    q.push(node);
    color[node] = 1;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current]) {
            if (color[neighbor] == -1) {
                color[neighbor] = 1 - color[current];
                q.push(neighbor);
            } else if (color[neighbor] == color[current]) {
                return false; 
            }
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> graph(n + 1);
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<int> color(n + 1, -1);
        bool isBipartite = true;

        for (int i = 1; i <= n; ++i) {
            if (color[i] == -1) {
                if (!bfs(i, graph, color)) {
                    isBipartite = false;
                    break;
                }
            }
        }

        if (!isBipartite) {
            cout << "-1\n";
        } else {
            int count1 = 0, count2 = 0;
            for (int i = 1; i <= n; ++i) {
                if (color[i] == 0) count1++;
                else count2++;
            }
            cout << max(count1, count2) << endl;
        }
    }

    return 0;
}
