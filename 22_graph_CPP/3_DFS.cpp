#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <list>

using namespace std;

void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component)
{
  component.push_back(node);
  visited[node] = true;

  // for each connected node, recursively call dfs
  for (auto i : adj[node])
  {
    if (!visited[i])
    {
      dfs(i, visited, adj, component);
    }
  }
}

vector<vector<int>> DFS(int v, vector<pair<int, int>> &edges)
{
  unordered_map<int, list<int>> adjList;
  for (int i = 0; i < edges.size(); i++)
  {
    int u = edges[i].first;
    int v = edges[i].second;

    adjList[u].push_back(v);
    adjList[v].push_back(u); // Add edge in both directions for undirected graphs
  }

  vector<vector<int>> ans;
  unordered_map<int, bool> visited;
  for (int i = 0; i < v; i++)
  {
    if (!visited[i])
    {
      vector<int> component;
      dfs(i, visited, adjList, component);
      ans.push_back(component);
    }
  }
  return ans; // Return the list of connected components
}

int main()
{
  int vertex = 5;                                                          // Number of vertices in the graph
  vector<pair<int, int>> edges = {{0, 1}, {0, 4}, {1, 2}, {2, 3}, {3, 4}}; // Example edges

  vector<vector<int>> dfsResult = DFS(vertex, edges);

  cout << "DFS Traversals: \n";
  for (const vector<int> &component : dfsResult)
  {
    for (int node : component)
    {
      cout << node << " ";
    }
    cout << endl;
  }

  return 0;
}
