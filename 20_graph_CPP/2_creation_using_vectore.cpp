// This code defines a graph class with a printadj method to create and print 
// the adjacency list representation of a graph. In the main function, it takes 
// the number of nodes (n) and edges (m) as input, then takes input for the edges, 
// and finally, it creates an instance of the graph class to print the adjacency list.

#include<iostream>
#include<vector>
using namespace std;

class graph{
public:
    // function to print graph
    void printadj(int n, int m, vector<vector<int>>& edges){
        vector<vector<int>> adjList(n);

        // Creating the adjacency list
        for(int i = 0; i < m; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);  // Assuming an undirected graph
        }

        // Printing the adjacency list
        for(int i = 0; i < n; i++){
            cout << "Adjacency list of node " << i << ": ";
            for(int j = 0; j < adjList[i].size(); j++){
                cout << adjList[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    int n, m; // n is the number of nodes, m is the number of edges
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> edges(m, vector<int>(2));

    cout << "Enter the edges (u v): ";
    for(int i = 0; i < m; i++){
        cin >> edges[i][0] >> edges[i][1];
    }

    graph g;
    g.printadj(n, m, edges);

    return 0;
}
