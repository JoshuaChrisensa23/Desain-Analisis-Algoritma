#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

using namespace std;

typedef pair<int, int> iPair;

class Graph {
    int V; 
    vector<vector<iPair> > adj;

public:
    Graph(int V);
    void addEdge(int u, int v, int w);
    void shortestPath(int src, int dest);
};

Graph::Graph(int V) {
    this->V = V;
    adj.resize(V);
}

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void Graph::shortestPath(int src, int dest) {
    priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
    
    vector<int> dist(V, INT_MAX);
    
    vector<int> parent(V, -1);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (const auto& x : adj[u]) {
            int v = x.first;
            int weight = x.second;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
                parent[v] = u;
            }
        }
    }

    if (dist[dest] == INT_MAX) {
        cout << "There is no path from " << src << " to " << dest << endl;
        return;
    }

    vector<int> path;
    for (int v = dest; v != -1; v = parent[v]) {
        path.push_back(v);
    }

    reverse(path.begin(), path.end());

    cout << "Shortest path from " << src << " to " << dest << " is: ";
    for (size_t i = 0; i < path.size(); ++i) {
        if (i != 0) cout << " -> ";
        cout << path[i];
    }
    cout << "\nTotal cost: " << dist[dest] << endl;
}

int main() {
    int V = 7;
    Graph g(V);

    g.addEdge(1, 2, 7);
    g.addEdge(1, 3, 9);
    g.addEdge(1, 6, 14);
    g.addEdge(2, 3, 10);
    g.addEdge(2, 4, 15);
    g.addEdge(3, 6, 2);
    g.addEdge(3, 4, 11);
    g.addEdge(4, 5, 6);
    g.addEdge(5, 6, 9);

    int source = 1;
    int destination = 5;
    g.shortestPath(source, destination);

    return 0;
}

