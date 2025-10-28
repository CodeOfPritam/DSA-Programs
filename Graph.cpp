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
            cout << i << " -> ";
            for (int neigh : l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    // BFS for Disconnected Graph
    void bfs()
    {
        vector<bool> vis(V, false);
        queue<int> Q;

        cout << "BFS Traversal of the graph is:" << endl;

        for (int start = 0; start < V; start++)
        {
            if (!vis[start])
            {
                Q.push(start);
                vis[start] = true;

                while (!Q.empty())
                {
                    int u = Q.front();
                    Q.pop();
                    cout << u << " ";

                    for (int v : l[u])
                    {
                        if (!vis[v])
                        {
                            vis[v] = true;
                            Q.push(v);
                        }
                    }
                }
            }
        }

        cout << endl;
    }

    // DFS Helper for Disconnected Graph
    void dfsHelper(int u, vector<bool> &vis)
    {
        cout << u << " ";
        vis[u] = true;

        for (int v : l[u])
        {
            if (!vis[v])
            {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs()
    {
        vector<bool> vis(V, false);
        cout << "DFS Traversal of the graph is:" << endl;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfsHelper(i, vis);
            }
        }

        cout << endl;
    }
};

int main()
{
    Graph g(7);
    g.addNewEdges(0, 1);
    g.addNewEdges(0, 2);
    g.addNewEdges(1, 3);
    g.addNewEdges(4, 5);
    g.addNewEdges(5, 6);

    g.printAdjList();

    g.bfs();
    g.dfs();

    return 0;
}