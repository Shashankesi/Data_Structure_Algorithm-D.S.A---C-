#include<iostream>
#include<vector>
#include<queue>
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

    void bfs(){
        queue<int>q;
        vector<bool> vis(V,false);
        q.push(0);
        vis[0]=true;

        while(q.size()>0){
            int u=q.front();
            q.pop();
            cout<<u<<" ";

            list<int> neighbour=l[u];
            for(int v: neighbour){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
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

    graph.bfs();


}
