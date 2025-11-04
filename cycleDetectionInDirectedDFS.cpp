#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph
{
    list<int> *l;
    int V;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v); // directed edge
    }

    bool isCycleDirDFS(int curr, vector<bool> &vis, vector<bool> &recPath)
    {
        vis[curr] = true;
        recPath[curr] = true;

        for (int v : l[curr])
        {
            if (!vis[v])
            {
                if (isCycleDirDFS(v, vis, recPath))
                    return true;
            }
            else if (recPath[v])
            {
                return true;
            }
        }

        recPath[curr] = false;
        return false;
    }

    bool isCycle()
    {
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (isCycleDirDFS(i, vis, recPath))
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    Graph g(4);

    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    if(g.isCycle()==1)
    {
        cout<<"Cycle detected!"<<endl;
    }
    else
    {
        cout<<"Cycle not detected!"<<endl;
    }

    return 0;
}
