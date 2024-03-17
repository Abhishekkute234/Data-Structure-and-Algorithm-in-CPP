// chech inorder travels 
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};


bool isbst(node* root,int min,int max){
    if(root->data>=min && root->data<=max){
        bool leftb=isbst(root->left,min,root->data);
        bool rightb=isbst(root->right,root->data,max);
        return left && right;
    }

    else
    {
        return false;
    }
    
}

bool valid_bst(node* root){
    return isbst(root,INT16_MIN,INT16_MAX);
    
}








node* insertintobst(node* root, int data){
    if(root==NULL){
        root = new node(data);
        return root;
    }

    if(data > root->data){
        root->right = insertintobst(root->right, data);
    }
    else{
        root->left = insertintobst(root->left, data);
    }
    return root;
}


void take_input(node*& root){
    // this is the 1st data
    int data;
    // parent node
    cin>>data;
    while(data!=-1){
        // child nodes
        root=insertintobst(root,data);
        cin>>data;
    }

}

int main()
{
    node* root=NULL;
    cout<<"Enter the data\n";
    take_input(root);
    cout<<"printing the bst\n";
    level_order_travelsal(root);

}    