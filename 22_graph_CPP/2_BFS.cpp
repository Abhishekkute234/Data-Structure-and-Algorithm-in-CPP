#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <list>

using namespace std;

void prepareAdjList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> edges)
{
  for (int i = 0; i < edges.size(); i++)
  {
    int u = edges[i].first; // Access the first element of the pair using .first
    int v = edges[i].second;

    adjList[u].push_back(v);
    adjList[v].push_back(u); // Add edge in both directions for undirected graphs
  }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
  unordered_map<int, bool> visited;
  vector<int> bfsTraversal;

  // Prepare adjacency list
  unordered_map<int, list<int>> adjList;
  prepareAdjList(adjList, edges);

  // Perform BFS traversal starting from all unvisited nodes
  for (int i = 0; i < vertex; i++)
  {
    if (!visited[i])
    {
      queue<int> q;
      q.push(i);
      visited[i] = true;

      while (!q.empty())
      {
        int frontNode = q.front();
        q.pop();
        bfsTraversal.push_back(frontNode);

        for (auto neighbor : adjList[frontNode])
        {
          if (!visited[neighbor])
          {
            q.push(neighbor);
            visited[neighbor] = true;
          }
        }
      }
    }
  }

  return bfsTraversal;
}

int main()
{
  // Example usage:
  int vertex = 5;                                                          // Number of vertices in the graph
  vector<pair<int, int>> edges = {{0, 1}, {0, 4}, {1, 2}, {2, 3}, {3, 4}}; // Example edges

  vector<int> bfsResult = BFS(vertex, edges);

  cout << "BFS Traversal: ";
  for (int node : bfsResult)
  {
    cout << node << " ";
  }
  cout << endl;

  return 0;
}
