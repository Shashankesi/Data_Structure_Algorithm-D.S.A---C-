#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

class Graph {
    int V;              // Number of vertices
    list<int> *l;       // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    // Add an undirected edge
    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    // Print adjacency list
    void print() {
        cout << "Adjacency List:" << endl;

        for (int u = 0; u < V; u++) {
            cout << u << " : ";

            for (int v : l[u]) {
                cout << v << " ";
            }

            cout << endl;
        }
    }

    // ================= DFS =================

    void dfsHelper(int u, vector<bool> &vis) {

        vis[u] = true;
        cout << u << " ";

        for (int v : l[u]) {
            if (!vis[v]) {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs() {

        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++) {

            if (!vis[i]) {
                dfsHelper(i, vis);
            }
        }

        cout << endl;
    }

    // ================= BFS =================

    void bfsHelper(int st, vector<bool> &vis) {

        queue<int> q;

        q.push(st);
        vis[st] = true;

        while (!q.empty()) {

            int u = q.front();
            q.pop();

            cout << u << " ";

            for (int v : l[u]) {

                if (!vis[v]) {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void bfs() {

        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++) {

            if (!vis[i]) {
                bfsHelper(i, vis);
            }
        }

        cout << endl;
    }
};

int main() {

    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);

    graph.print();

    cout << "\nDFS Traversal:" << endl;
    graph.dfs();

    cout << "\nBFS Traversal:" << endl;
    graph.bfs();

    return 0;
}