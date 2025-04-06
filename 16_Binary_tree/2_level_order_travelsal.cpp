#include <iostream>
#include <queue>

using namespace std;

class node
{

  // creating a user define node to built a tree

public:
  int data;
  node *left;
  node *right;

  node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

node *builtTree(node *root)
{
  // creation of root node
  cout << "Enter the data " << endl;
  int data;
  cin >> data;
  root = new node(data);

  // if data == -1 then consideer it as a null

  if (data == -1)
  {
    return NULL;
  }

  cout << "enter the data in LEFT " << data << endl;
  root->left = builtTree(root->left);
  cout << "enter the data in RIGHT " << data << endl;
  root->right = builtTree(root->right);
  return root;
}

void levelOrderTraversal(node *root)
{
  if (root == nullptr)
  {
    // If the tree is empty, return immediately
    return;
  }

  // Create a queue to hold nodes for level order traversal
  queue<node *> q;
  q.push(root);    // Push the root node into the queue
  q.push(nullptr); // Use `nullptr` as a marker for the end of a level

  while (!q.empty())
  {
    node *temp = q.front();
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
  node *root = nullptr;
  root = builtTree(root);

  // Example level order traversal
  cout << "Print the level order traversal:\n";
  levelOrderTraversal(root);

  return 0;
}