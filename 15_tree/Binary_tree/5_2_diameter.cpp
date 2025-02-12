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

// calling the diameter and the heigth
// 1st diameter
// 2nd heigth
pair<int, int> diameterFast(node *root)
{

  if (root == NULL)
  {
    pair<int, int> p = make_pair(0, 0);
    return p;
  }

  pair<int, int> left = diameterFast(root->left);
  pair<int, int> right = diameterFast(root->right);

  // conditions

  int opt1 = left.first;
  int opt2 = right.first;

  int opt3 = left.second + right.second + 1;

  pair<int, int> ans;
  // diameter
  ans.first = max(opt1, max(opt2, opt3));
  // height
  ans.second = max(left.second, right.second) + 1;
  return ans;
}

int diameter(node *root)
{
  return diameterFast(root).first;
}

int main()
{
  node *root = NULL;

  return 0;
}