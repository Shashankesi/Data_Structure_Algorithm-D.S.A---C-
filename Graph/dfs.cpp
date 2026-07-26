#include<iostream>
#include<vector>
#include<list>

using namespace std;

class Graph{
    int V; // it store the number of vertices
    list<int>*l; //*l point to the first vertice

    public:
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u=0; u<V;u++){
            list<int> neighbour=l[u];
            cout<<u<<":";
            for(int v:neighbour){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }

    void dfs(int u , vector<bool>&vis){
        vis[u]=true;
        cout<<u<<" ";

        list<int>neighbour=l[u];

        for(int v:neighbour){
            if(!vis[v]){
                dfs(v,vis);
            }
        }
        
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
    vector<bool>vis(7,false);
    cout<<"The dfs flow:"<<endl;

    graph.dfs(0,vis);


}
