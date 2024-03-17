// creation of binary tree 

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



// inorder travelsal

// 
void inorder_travelsal(node* root,int &cnt){
    // base case
    if(root==NULL){
        return;
    }

    inorder_travelsal(root->left,cnt);
    // leaf node
    if(root->left==NULL && root->right==NULL){
        cnt++;
    }

    
    inorder_travelsal(root->right,cnt);
    
}







// number of child nodes
int leaf_nood(node* root){
    int cnt=0;
    inorder_travelsal(root,cnt);
    return cnt;
    

}



int main(){
    node* root=NULL;

    // creating a tree1

    root=builttree(root);

    //  1,3,7,-1,-1,11,-1,-1,5,17,-1,-1,-1
 

   cout<<"number of leaf nodes are : "<<leaf_nood(root);

    

}
