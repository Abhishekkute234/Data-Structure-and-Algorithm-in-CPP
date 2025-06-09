#include <iostream>
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

  while (data != -1)
  {
    insertIntoBST(root, data);
    cin >> data;
  }
}

int main()
{

  Node *root = NULL;
  cout << "Enter the data to create BST : \n";
  takeinput(root);
}