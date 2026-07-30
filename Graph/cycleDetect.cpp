// Undirected Cycle Detection using DFS

#include<iostream>
#include<vector>
#include<list>

using namespace std;

class Graph{
    int V;
    list<int>* l;

public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u = 0; u < V; u++){
            cout << u << " : ";

            for(int v : l[u]){
                cout << v << " ";
            }

            cout << endl;
        }
    }

    void dfs(int u, vector<bool> &vis){
        vis[u] = true;
        cout << u << " ";

        for(int v : l[u]){
            if(!vis[v]){
                dfs(v, vis);
            }
        }
    }

    bool undirCycleHelper(int src, int par, vector<bool> &vis){

        vis[src] = true;

        for(int v : l[src]){

            if(!vis[v]){

                if(undirCycleHelper(v, src, vis)){
                    return true;
                }

            }
            else if(v != par){     // <-- Fixed here
                return true;
            }
        }

        return false;
    }

    bool isCycleUndir(){

        vector<bool> vis(V, false);

        return undirCycleHelper(0, -1, vis);
    }
};

int main(){

    Graph graph(5);

    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);

    graph.print();

    vector<bool> vis(5,false);

    cout << "\nDFS Traversal:\n";
    graph.dfs(0, vis);

    cout << "\n\nCycle Present : ";

    if(graph.isCycleUndir())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}