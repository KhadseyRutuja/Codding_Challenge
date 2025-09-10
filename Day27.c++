#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

int shortestPath(int V, vector<vector<int>>& edges, int start, int end) {

    vector<vector<int>> graph(V);
    for (auto& e : edges) {
        int u = e[0], v = e[1];
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }

    if (start == end) return 0;

    queue<pair<int,int>> q;  
    vector<bool> visited(V, false);

    q.push({start, 0});
    visited[start] = true;

    while (!q.empty()) {
        auto [node, dist] = q.front();
        q.pop();

        for (int neighbor : graph[node]) {
            if (neighbor == end) {
                return dist + 1; 
            }
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, dist + 1});
            }
        }
    }

    return -1; 
}

int main() {
    int V1 = 5;
    vector<vector<int>> edges = {{0,1},{0,2},{1,3},{2,3},{3,4}};
    cout <<"Output : "<< shortestPath(V1, edges, 0, 4) << endl; 
    
    return 0;
}
