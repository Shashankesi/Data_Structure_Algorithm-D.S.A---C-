#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

void dijkstra(int V, vector<vector<pair<int,int>>> &graph, int src) {
    vector<int> dist(V, INT_MAX);         
    dist[src] = 0;                        

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, src});                    

    while (!pq.empty()) {
        int u = pq.top().second;         
        int d = pq.top().first;           
        pq.pop();

        if (d > dist[u]) continue;        


        for (auto neighbor : graph[u]) {
            int v = neighbor.first;       
            int w = neighbor.second;      


            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});   
            }
        }
    }

    cout << "\nShortest distances from source " << src << ":\n";
    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX)
            cout << "Vertex " << i << " : INF\n";
        else
            cout << "Vertex " << i << " : " << dist[i] << "\n";
    }
}

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<pair<int,int>>> graph(V);  

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});  
    }

    int src;
    cout << "Enter source vertex: ";
    cin >> src;

    dijkstra(V, graph, src);
    return 0;
}
