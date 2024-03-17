#include<iostream>
#include<vector>
using namespace std;

class Graph {
public:
    // Function to print graph
    void printAdjMatrix(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adjMatrix(n, vector<int>(n, 0));

        // Creating the adjacency matrix
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adjMatrix[u][v] = 1;
            adjMatrix[v][u] = 1;  // Assuming an undirected graph
        }

        // Printing the adjacency matrix
        cout << "Adjacency Matrix:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n, m; // n is the number of nodes, m is the number of edges
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> edges(m, vector<int>(2));

    cout << "Enter the edges (u v): ";
    for (int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    Graph g;
    g.printAdjMatrix(n, edges);

    return 0;
}
