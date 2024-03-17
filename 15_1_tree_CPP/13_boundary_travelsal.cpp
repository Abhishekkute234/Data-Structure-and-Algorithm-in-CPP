
#include<iostream>
#include<queue>
#include<vector>
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
// print root
// print left part (not include leaf node)
// print leaf
// print right part in reverse direction(not include leaf node)
void left_part(node* root){
    
}
vector <int> bounday_travelsal(node* root){
    vector<int> result;
    if(root==NULL){
        return result;
    }

    queue<node*> q;
    for(int i=0;i<q.size();i++){
        // print root
        q.push(root);
        q.pop();

        // left node


        // leaf node

        // right node(reverse direction)

    }

    
    
}

int main(){
    node* root=NULL;


    root=builttree(root);

    
    cout<<"printing the level order travelsal"<<endl;
    bounday_travelsal(root);

}    