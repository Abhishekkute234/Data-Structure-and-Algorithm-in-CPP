// for every node except leaf node 
// the sum of left sub tree and right sub tree is value


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
// sum tree or not ans second ==sum
pair<bool,int> issumtree(node* root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
    }
    if(root->left==NULL && root->right==NULL){
                pair<bool,int> p=make_pair(true,root->data);


    }

    pair<bool,int> leftans=issumtree( root->left);
    pair<bool,int> rightans=issumtree( root->right);

    bool left=leftans.first;
    bool right=rightans.first;

    bool cond=root->data==leftans.second+rightans.second;
    pair<bool,int> ans;
    if(left && right && cond){
        ans.first=true;
        ans.second=2*root->data;
    }
    else{
        ans.first=false;
    }
return ans;




}

bool is_sum_tree(node* root){
    return issumtree(root).first;

}

int main(){
    node* root=NULL;

    // creating a tree1

    root=builttree(root);
    if(is_sum_tree(root)){
        cout<<"this are sum tree "<<endl;
    }
    else{
        cout<<"not sum tree "<<endl;
    }
}