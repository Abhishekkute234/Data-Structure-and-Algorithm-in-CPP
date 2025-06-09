// balance tree means
//  **for every node
// height of left - height of right <=1

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
node *builttree(node *root)
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

pair<bool, int> chech_balance(node *root)
{
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    // three conditions
    pair<bool, int> left = chech_balance(root->left);
    pair<bool, int> right = chech_balance(root->right);
    // absolute

    bool leftans = left.first;
    bool rightans = right.first;
    bool diff = abs(left.second - right.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;

    if (leftans && rightans && diff)
    {
        ans.first = 1;
    }

    else
    {
        ans.first = false;
    }
}
// chack balance
bool balanced(node *root)
{
    return chech_balance(root).first;
}

int main()
{
    node *root = NULL;

    // creating a tree1

    root = builttree(root);
    // cout<<"height of a binary tree is: "<<height(root);
}