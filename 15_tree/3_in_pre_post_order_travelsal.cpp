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

void inorderTravesal(node *root)
{
  // LNR

  // base case
  if (root == NULL)
  {
    return;
  }

  inorderTravesal(root->left);
  cout << root->data << " ";
  inorderTravesal(root->right);
}

void preorderTravesal(node *root)
{
  // NLR

  // base case
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preorderTravesal(root->left);
  preorderTravesal(root->right);
}
void postorderTravesal(node *root)
{
  // NLR

  // base case
  if (root == NULL)
  {
    return;
  }

  postorderTravesal(root->left);
  postorderTravesal(root->right);
  cout << root->data << " ";
}

int main()
{
  node *root = NULL;
  root = builtTree(root);
  cout << "Inorder travelsal ";
  inorderTravesal(root);
  cout << endl;
  cout << "preorder travelsal ";
  preorderTravesal(root);
  cout << endl;

  cout << "postorder travelsal ";
  postorderTravesal(root);

  return 0;
}