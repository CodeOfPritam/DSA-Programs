#include <iostream>
#include <vector>
#include <list>
#include <queue>
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

    void addEdge(int u, int v)
    {
        l[u].push_back(v); // directed edge
    }

    void topoSort()
    {
        // find indegree for each node
        vector<int> indeg(V, 0);   // FIXED

        for (int u = 0; u < V; u++)
        {
            for (int v : l[u])
            {
                indeg[v]++;
            }
        }

        queue<int> Q;
        for (int i = 0; i < V; i++)
        {
            if (indeg[i] == 0)
                Q.push(i);
        }

        vector<int> res;   

        while (!Q.empty())
        {
            int curr = Q.front();
            Q.pop();
            res.push_back(curr);

            for (int v : l[curr])
            {
                indeg[v]--;
                if (indeg[v] == 0)
                {
                    Q.push(v);
                }
            }
        }

        for (int val : res)
            cout << val << " ";
        cout << endl;
    }
};

int main()
{
    Graph g(6);

    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(5, 2);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    g.topoSort();
    return 0;
}
