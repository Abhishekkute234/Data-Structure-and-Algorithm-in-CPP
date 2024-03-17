#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    // constructor
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// to build a binary tree 
node* builttree(node* root){
    cout << "Enter data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    // recursive call for other parents 
    cout << "Enter data of left: " << endl;
    root->left = builttree(root->left);
    cout << "Enter the data in right : " << endl;
    root->right = builttree(root->right);

    return root;
}

int height(node* root){
    if(root == NULL){
        return 0;
    }

    int left_h = height(root->left);
    int right_h = height(root->right);

    int ans = max(left_h, right_h) + 1;
    return ans;
}

// diameter of binary tree  
int diameter(node* root){
    if(root == NULL){
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1; // Fix: Correct the calculation

    int ans = max(op1, max(op2, op3)); // Fix: Nest the max calls to find the maximum of three values
    return ans;
}

int main(){
    node* root = NULL;

    // creating a tree1
    root = builttree(root);
    cout << "Diameter of a binary tree is: " << diameter(root);

    return 0;
}
