#include <iostream>

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

int main()
{
  node *root = NULL;
  root = builtTree(root);
  cout << root;

  return 0;
}
