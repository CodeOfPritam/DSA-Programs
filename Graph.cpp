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

    // BFS Traversal
    void bfs() // O(v+u)
    {
        queue<int> Q;
        vector<bool> vis(V, false);

        Q.push(0);
        vis[0] = true;

        while (Q.size() > 0)
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

    //DFS Traversal
    void dfsHelper(int u, vector<bool> &vis)
    {
        cout<<u<<" ";
        vis[u]=true;

        for(int v:l[u])
        {
            if(!vis[v])
            {
                dfs(v, vis);
            }
        }
        cout<<endl;
    }

    void dfs()
    {
        int src=0;
        vector<bool> vis(V, false);

        dfsHelper(src, vis);
    }
};

int main()
{
    Graph g(5);
    g.addNewEdges(0, 1);
    g.addNewEdges(1, 2);
    g.addNewEdges(1, 3);
    g.addNewEdges(2, 4);

    g.printAdjList();

    cout<<"BFS Traversal of the graph is:"<<endl;
    g.bfs();

    cout<<"DFS Traversal of the graph is:"<<endl;
    g.dfs();

    return 0;
}