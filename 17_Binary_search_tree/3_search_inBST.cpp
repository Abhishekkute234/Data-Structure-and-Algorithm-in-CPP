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
  // until the input is not -1 keep adding the data

  while (data != -1)
  {
    insertIntoBST(root, data);
    cin >> data;
  }
}

bool searchInBst(Node *root, int x)
{
  if (root == NULL)
  {
    return false;
  }
  if (root->data == x)
  {
    return true;
  }

  if (root->data > x)
  {
    // left part
    return searchInBst(root->left, x);
  }
  else
  {
    return searchInBst(root->right, x);
  }
}

int main()
{
  // 10 8 21 7 27 5 4 3 -1

  Node *root = NULL;
  cout << "Enter the data to create BST : \n";
  takeinput(root);

  // if (searchInBst(root, 2))
  if (searchInBst(root, 5))
  {
    cout << "present haiiiii ";
  }
  else
  {
    cout << "Nahi present";
  }
}