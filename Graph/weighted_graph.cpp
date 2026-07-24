#include<iostream>
#include<vector>
#include<list>

using namespace std;

class Graph{
    int V; // it store the number of vertices
    list<pair<int,int>> *l; //*l point to the first vertice

    public:
    Graph(int V){
        this->V=V;
        l=new list<pair<int,int>>[V];
    }

    void addEdge(int u, int v, int wgt){
        l[u].push_back({v,wgt});
        l[v].push_back({u,wgt});
    }

    void print(){
        for(int u=0; u<V;u++){
            cout<<u<<":";
            for(auto x : l[u]){
                cout << "("
                     << x.first << ","
                     << x.second << ") ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph graph(5);

    graph.addEdge(0,1,5);
    graph.addEdge(1,2,1);
    graph.addEdge(1,3,3);
    graph.addEdge(2,3,1);
    graph.addEdge(2,4,2);

    graph.print();


}
