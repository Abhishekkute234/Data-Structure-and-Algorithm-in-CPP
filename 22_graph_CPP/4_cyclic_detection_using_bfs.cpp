#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <list>
#include <string>

using namespace std;

bool isCyclicBFS(int src, unordered_map<int, bool> visited, unordered_map<int, list<int>> adjList)
{
  unordered_map<int, int> parent;
  parent[src] = -1;
  visited[src] = 1;
  queue<int> q;
  q.push(src);

  while (!q.empty())
  {
    int front = q.front();
    q.pop();

    for (auto neighbour : adjList[front])
    {
      if (visited[neighbour] == true && neighbour != parent[front])
      {
        return true;
      }

      else if (!visited[neighbour])
      {
        q.push(neighbour);
        visited[neighbour] = 1;
        parent[neighbour] = front;
      }
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
      bool ans = isCyclicBFS(i, visited, adjList);
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
