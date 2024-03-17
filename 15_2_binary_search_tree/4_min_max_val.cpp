// root->left!=NULL for minimun 
// root->right!= NULL for maximuim
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