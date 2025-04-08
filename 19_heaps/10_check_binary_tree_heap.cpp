#include <iostream>
#include <queue>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
  Node(int val)
  {
    data = val;
    left = right = NULL;
  }
};

// Count total nodes in the tree
int countNodes(Node *root)
{
  if (!root)
    return 0;
  return 1 + countNodes(root->left) + countNodes(root->right);
}

// Check if tree is complete binary tree
bool isCBT(Node *root, int index, int count)
{
  if (!root)
    return true;
  if (index >= count)
    return false;
  return isCBT(root->left, 2 * index + 1, count) &&
         isCBT(root->right, 2 * index + 2, count);
}

// Check max-heap order property
bool isMaxOrder(Node *root)
{
  if (!root->left && !root->right)
    return true;

  if (root->right == NULL)
  {
    return (root->data >= root->left->data) && isMaxOrder(root->left);
  }
  else
  {
    bool left = (root->data >= root->left->data);
    bool right = (root->data >= root->right->data);
    return left && right && isMaxOrder(root->left) && isMaxOrder(root->right);
  }
}

// Final check
bool isHeap(Node *root)
{
  int count = countNodes(root);
  int index = 0;
  return isCBT(root, index, count) && isMaxOrder(root);
}

// Driver code
int main()
{
  Node *root = new Node(10);
  root->left = new Node(9);
  root->right = new Node(8);
  root->left->left = new Node(7);
  root->left->right = new Node(6);
  root->right->left = new Node(5);
  root->right->right = new Node(4);

  if (isHeap(root))
  {
    cout << "The binary tree is a Max-Heap.\n";
  }
  else
  {
    cout << "The binary tree is NOT a Max-Heap.\n";
  }

  return 0;
}
