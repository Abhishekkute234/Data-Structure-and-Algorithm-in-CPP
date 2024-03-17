// inorder travels is always in the sorted form


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
void level_order_travelsal(node* root){
    queue <node*> q;
    q.push(root);
    // when in level get complete
    q.push(NULL);

    while(!q.empty()){
        
        node* temp=q.front();
        q.pop();
        // yaha root elemnt jo ki front hai usko nuikla tida

        // jaise hi null mile enter mardo
        if(temp==NULL){// level complet
            cout<<endl;
            if(!q.empty()){// next level
            // queue still have some child
                q.push(NULL);

            }
        }

    // this is for push an elemnt in the tree 
        else{

            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
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