// left to right then rigth to left 

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

vector <int> zig_zag_travelsal(node* root){
    vector<int> result;
    if(root==NULL){
        return result;
    }
    queue <node*> q;
    q.push(root);

    bool lefttoright=true;

    while(!q.empty()){
        int size=q.size();
        vector<int> ans(size);

        // level process
        for(int i=0;i<size;i++){
            node* frontnode=q.front();
            q.pop();

            int index=lefttoright ? i : size-i-1;
            ans[index]=frontnode->data;

            if(frontnode->left){
                q.push(frontnode->left);
            }

            if(frontnode->right){
                q.push(frontnode->right);
            }
        }
        // direction change
        lefttoright=!lefttoright;

        for(auto i: ans){
            result.push_back(i);
        }
    }

  return result;

    
}

int main(){
    node* root=NULL;


    root=builttree(root);

    
    cout<<"printing the level order travelsal"<<endl;
    zig_zag_travelsal(root);

}    