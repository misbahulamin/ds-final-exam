#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> edgeWeightPair;
class Graph
{
    int V;
    list<edgeWeightPair> *adj;

public:
    Graph(int value)
    {
        V = value;
        adj = new list<edgeWeightPair>[value];
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(make_pair(u, v));
        adj[v].push_back(make_pair(u, v));
    }
    void printNeighbour(int chk)
    {
        int count = 0;
        for (auto i = adj[chk].begin(); i != adj[chk].end(); i++)
        {
            count++;
        }
        cout << count << endl;
    }
};

int main()
{
    int V, E;
    cin >> V >> E;
    Graph g(V);
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    int kHouse;
    cin >> kHouse;
    g.printNeighbour(kHouse);
    return 0;
    //Misbahul Amin Towaha
}