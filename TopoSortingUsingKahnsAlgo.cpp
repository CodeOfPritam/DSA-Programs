#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph {
    int V;
    list<int> *l;

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);  // directed edge
    }

    void topoSort() {
        vector<int> indeg(V, 0);

        // calculate indegree
        for (int u = 0; u < V; u++) {
            for (int v : l[u]) {
                indeg[v]++;
            }
        }

        queue<int> q;

        // push nodes with indegree 0
        for (int i = 0; i < V; i++) {
            if (indeg[i] == 0) {
                q.push(i);
            }
        }

        vector<int> res;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            res.push_back(node);

            for (int nbr : l[node]) {
                indeg[nbr]--;
                if (indeg[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }

        // print result
        for (int x : res) 
            cout << x << " ";
        cout << endl;
    }
};

int main() {
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
