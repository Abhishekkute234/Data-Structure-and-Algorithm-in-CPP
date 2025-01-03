#include <iostream>
#include <algorithm>
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

pair<int, int> diameterfast(node *root)
{
  if (root == nullptr)
  {
    return {0, 0}; // {height, diameter}
  }
  // fisrt ->> diameter
  //  second ->> height
  // Recursive calls for left and right subtrees
  pair<int, int> left = diameterfast(root->left);
  pair<int, int> right = diameterfast(root->right);

  // Current height
  int height = max(left.first, right.first) + 1;

  // Options for diameter:
  int opt1 = left.second;              // Diameter of the left subtree
  int opt2 = right.second;             // Diameter of the right subtree
  int opt3 = left.first + right.first; // Diameter passing through root

  // Current diameter
  int diameter = max(opt1, max(opt2, opt3));

  // Return {height, diameter}
  return {height, diameter};
}

int diameter(node *root)
{
  return diameterfast(root).second;
}

int main()
{
  node *root = NULL;
  root = builtTree(root);
  cout << root;

  return 0;
}