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

bool identical(node*r1,node*r2){
    if(r1==NULL && r2==NULL){
        return true;
    }

   if(r1==NULL && r2!=NULL){
        return false;
   }

   if(r2==NULL && r1!=NULL){
         return false;
   }

   bool left=identical(r1->left,r2->left);
    bool right=identical(r1->right,r2->right);

    bool value=r1->data==r2->data;

    if(left && right && value){
        return true;
    }
    else{
        return false;
    }

    


    
}


int main(){
    node* root1=NULL;
    node* root2=NULL;


    // creating a tree1

    root1=builttree(root1);
    root2=builttree(root2);
     


}