// balance tree means 
//  **for every node 
// height of left - height of right <=1

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
// height of binary tree  
int height(node* root){
    if(root==NULL){
        return 0;
    }

    int left_h =height(root->left);
    int right_h =height(root->right);

    int ans=max(left_h,right_h)+1;
    return ans;

}
// chack balance 
bool chech_balanced(node*root){
    if(root==NULL){
        return true;
    }
// three conditions
    bool left=chech_balanced(root->left);
    bool right=chech_balanced(root->right);
    // absolute 
    bool diff= abs(height(root->left)-height(root->right))<=1;

    if(left && right && diff ){
        return true;
    }

    else{
        return false;
    }


    
}


int main(){
    node* root=NULL;

    // creating a tree1

    root=builttree(root);
    cout<<"height of a binary tree is: "<<height(root);
}