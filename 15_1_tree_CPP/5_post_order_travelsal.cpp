
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

void post_order_travelsal(node* root){
    // base case
    if(root==NULL){
        return;
    }

    post_order_travelsal(root->left);
    post_order_travelsal(root->right);
    cout<<root->data<<" ";

}


int main(){
    node* root=NULL;

    // creating a tree1

    root=builttree(root);

    //  1,3,7,-1,-1,11,-1,-1,5,17,-1,-1,-1

    post_order_travelsal(root);
    cout<<"\n";
    // 7,11,3, 17, 5 ,1

}
