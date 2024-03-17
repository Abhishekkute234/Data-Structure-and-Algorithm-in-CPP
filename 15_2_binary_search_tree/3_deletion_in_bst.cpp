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

node* minval(node * root){
    node* temp=root;
    
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

node* maxval(node * root){
    node* temp=root;
    
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

node* deleteNode(node* root, int d){
    if(root == NULL){
        return root;
    }

    if(root->data == d){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child
        if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 children
        int minVal = minval(root->right)->data;
        root->data = minVal;
        root->right = deleteNode(root->right, minVal);
        return root;
    }
    else if(d > root->data){
        root->right = deleteNode(root->right, d);
    } 
    else{
        root->left = deleteNode(root->left, d);
    }

    return root;
}

int main(){
    node* root = NULL;
    cout << "Enter the data\n";
    take_input(root);
    int d = 2;
    root = deleteNode(root, d);
}
