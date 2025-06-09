// creation of binary tree

#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // contructore
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// to built a binary  tree
node *builtswtree(node *root)
{
    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    // recursive call for other parents
    cout << "Enter data of left: " << endl;
    root->left = builttree(root->left);
    cout << "Enter the data in right : " << endl;
    root->right = builttree(root->right);

    return root;
}

int main()
{
    node *root = NULL;

    // creating a tree1

    root = builttree(root);
}