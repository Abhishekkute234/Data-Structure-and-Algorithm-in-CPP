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



pair<int ,int > diameterFast(node*root){
    // when the root is null both diameter and height is 0 
     if(root == NULL){
        pair<int ,int > p=make_pair(0,0);
        return p;
    }

    pair<int ,int > left =diameterFast(root->left);
    pair<int ,int > right =diameterFast(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;

    pair<int ,int > ans; // Fix: Nest the max calls to find the maximum of three values
    ans.first=max(op1, max(op2, op3));
    ans.second=max(left.second,right.second)+1;
    return ans;

}

// diameter of binary tree  
int diameter(node* root){
    return diameterFast(root).first;
}

int main(){
    node* root = NULL;

    // creating a tree1
    root = builttree(root);
    cout << "Diameter of a binary tree is: " << diameter(root);

    return 0;
}
