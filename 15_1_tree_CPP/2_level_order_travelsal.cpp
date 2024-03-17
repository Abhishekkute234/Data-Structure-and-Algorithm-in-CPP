
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    // contructore
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }


};

// to built a binary  tree 
node* builttree(node* root){
    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
// recursive call for other parents 
    cout<<"Enter data of left: "<<endl;
    root->left=builttree(root->left);
    cout<<"Enter the data in right : "<<endl;
    root->right=builttree(root->right);

    return root;


}

// level order travesal 
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

int main(){
    node* root=NULL;

    // creating a tree1 

    root=builttree(root);

    //  1,3,7,-1,-1,11,-1,-1,5,17,-1,-1,-1
    // level order
    cout<<"printing the level order travelsal"<<endl;
    level_order_travelsal(root);

}    