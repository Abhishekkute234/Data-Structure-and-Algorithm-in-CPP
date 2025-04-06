#include <iostream>
#include <algorithm>
using namespace std;

class node
{
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

// Function to calculate the height of a tree
int maxHeight(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int left = maxHeight(root->left);
  int right = maxHeight(root->right);
  return max(left, right) + 1;
}

// Function to build a binary tree
node *buildTree()
{
  cout << "Enter the data (-1 for NULL): ";
  int data;
  cin >> data;

  if (data == -1)
  {
    return NULL;
  }

  node *root = new node(data);
  cout << "Enter left child of " << data << endl;
  root->left = buildTree();
  cout << "Enter right child of " << data << endl;
  root->right = buildTree();

  return root;
}

// Optimized function to check if a tree is balanced and return its height
pair<bool, int> isBalanceFast(node *root)
{
  if (root == NULL)
  {
    return make_pair(true, 0);
  }

  pair<bool, int> left = isBalanceFast(root->left);
  pair<bool, int> right = isBalanceFast(root->right);

  bool leftBalanced = left.first;
  bool rightBalanced = right.first;
  bool heightDifference = abs(left.second - right.second) <= 1;

  bool isBalanced = leftBalanced && rightBalanced && heightDifference;
  int height = max(left.second, right.second) + 1;

  return make_pair(isBalanced, height);
}

// Wrapper function for isBalanceFast
bool isBalance(node *root)
{
  return isBalanceFast(root).first;
}

int main()
{
  node *root = buildTree();

  cout << "\nHeight of the tree: " << maxHeight(root) << endl;

  if (isBalance(root))
  {
    cout << "The tree is balanced." << endl;
  }
  else
  {
    cout << "The tree is not balanced." << endl;
  }

  return 0;
}
