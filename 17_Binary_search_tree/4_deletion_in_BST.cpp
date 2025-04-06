#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *insertIntoBST(Node *&root, int data)
{

  // base case
  if (root == NULL)
  {
    root = new Node(data);
    return root;
  }

  if (data > root->data)
  {
    // go in right part
    root->right = insertIntoBST(root->right, data);
  }

  else
  {
    // go in left part
    root->left = insertIntoBST(root->left, data);
  }

  return root;
}

void takeinput(Node *&root)
{
  int data;
  cin >> data;
  // until the input is not -1 keep adding the data

  while (data != -1)
  {
    insertIntoBST(root, data);
    cin >> data;
  }
}

void deleteanode(Node *root, int x)
{
}

void levelOrderTraversal(Node *root)
{
  if (root == nullptr)
  {
    // If the tree is empty, return immediately
    return;
  }

  // Create a queue to hold nodes for level order traversal
  queue<Node *> q;
  q.push(root);    // Push the root node into the queue
  q.push(nullptr); // Use `nullptr` as a marker for the end of a level

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();
    // if NULL
    if (temp == nullptr)
    {
      // End of the current level
      cout << "\n"; // Print a newline to separate levels
      if (!q.empty())
      {
        // If the queue still has nodes, push another `nullptr` marker
        q.push(nullptr);
      }
    }
    // if NOT NULL
    else
    {
      // Print the current node's data
      cout << temp->data << " ";

      // Push the left child to the queue if it exists
      if (temp->left)
      {
        q.push(temp->left);
      }

      // Push the right child to the queue if it exists
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}

int main()
{
  // 10 8 21 7 27 5 4 3 -1

  Node *root = NULL;
  cout << "Enter the data to create BST : \n";
  takeinput(root);

  // if (searchInBst(root, 2))
  levelOrderTraversal(root);
  deleteanode(root, 5);
  levelOrderTraversal(root);
}