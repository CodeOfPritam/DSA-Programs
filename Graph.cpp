#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addNewEdges(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "->";
            for (int neigh : l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    // BFS Traversal
    void bfs() // T.C: O(u+v)
    {
        queue<int> Q;
        vector<bool> vis(V, false);

        Q.push(0); //source node initialised with 0 and marked visited
        vis[0]=true;

        while (Q.size()>0)
        {
            int u = Q.front(); // u->source node
            Q.pop();

            cout << u << " ";

            for (int v : l[u])
            {
                if (!vis[v]) // v->immediate neighbour node
                {
                    vis[v] = true;
                    Q.push(v);
                }
            }
        }

        cout << endl;
    }
};

int main()
{
    Graph g(5);
    g.addNewEdges(0, 1);
    g.addNewEdges(1, 3);
    g.addNewEdges(1, 2);
    g.addNewEdges(2, 3);
    g.addNewEdges(2, 4);

    // g.printAdjList();

    cout<<"BFS Traversal of the graph is:"<<endl;
    g.bfs();

    return 0;
}