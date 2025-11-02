#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {
        this->V=V;
        l=new list<int> [V];
    }    

    void addNewEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool isCycleUndirDFS(int src, int par, vector<bool> &vis) //dfs algo so T.C is O(v+u)
    {
        vis[src]=true;
        list<int> neighbours=l[src];

        for(int v:neighbours)
        {
            if(!vis[v])
            {
                if(isCycleUndirDFS(v, src, vis))
                    return true;
            }

            else if(v!=par)
            {
                return true;
            }
        }
        return false;
    }

    bool isCycle()
    {
        vector<bool> vis(V, false);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(isCycleUndirDFS(i, -1, vis))
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    Graph g(5);
    g.addNewEdge(0, 1);
    // g.addNewEdge(0, 2);
    g.addNewEdge(1, 2);
    g.addNewEdge(2, 3);
    g.addNewEdge(3, 4);

    if(g.isCycle())
        cout<<"Cycle detected!"<<endl;
    else
        cout<<"Cycle not detected!"<<endl;    
    return 0;
}