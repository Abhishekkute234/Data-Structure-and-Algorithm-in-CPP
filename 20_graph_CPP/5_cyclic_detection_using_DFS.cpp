#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <list>
#include <string>

using namespace std;

bool isCyclicDFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList, int parent)
{
  visited[src] = true;

  for (auto neighbour : adjList[src])
  {
    if (!visited[neighbour])
    {
      if (isCyclicDFS(neighbour, visited, adjList, src))
        return true;
    }
    else if (neighbour != parent)
    {
      return true;
    }
  }
  return false;
}

// cycylic detection in graph
string cyclicdetection(vector<vector<int>> &edges, int n, int m)
{
  // create an adjacency list
  unordered_map<int, list<int>> adjList;
  for (int i = 0; i < edges.size(); i++)
  {
    int u = edges[i][0];
    int v = edges[i][1];

    adjList[u].push_back(v);
    adjList[v].push_back(u); // For undirected graphs, add edge in both directions
  }

  // to handle disconnected components
  unordered_map<int, bool> visited;
  for (int i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      bool ans = isCyclicDFS(i, visited, adjList);
      if (ans)
      {
        return "yes";
      }
    }
  }
  return "No"; // Return "No" only after checking all components
}

int main()
{
  int vertex = 10;                                                                              // Number of vertices in the graph
  vector<vector<int>> edges = {{1, 2}, {2, 3}, {4, 5}, {5, 6}, {5, 7}, {6, 8}, {8, 9}, {8, 7}}; // Example edges
  string result = cyclicdetection(edges, vertex, 8);                                            // 8 is the number of edges, as you have 8 pairs of edges
  cout << result << endl;
  return 0;
}
