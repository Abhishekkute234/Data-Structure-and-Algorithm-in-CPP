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

int maxheigth(node *root)
{

  if (root == NULL)
  {
    return 0;
  }

  int left = maxheigth(root->left);
  int right = maxheigth(root->right);

  return max(left, right) + 1;
}
int diameter(node *root)
{
  if (root == nullptr)
  {
    return 0;
  }

  // Diameter options:
  int opt1 = diameter(root->left);                           // Diameter of the left subtree
  int opt2 = diameter(root->right);                          // Diameter of the right subtree
  int opt3 = maxheigth(root->left) + maxheigth(root->right); // Diameter passing through root

  // Return the maximum of the three options
  return max(opt1, max(opt2, opt3));
}

int main()
{
  node *root = NULL;
  root = builtTree(root);
  cout << root;

  return 0;
}

int main()
{
  node *root = NULL;
  root = builtTree(root);
  cout << root;

  return 0;
}