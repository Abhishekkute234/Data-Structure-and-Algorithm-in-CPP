 // collation of nodes 
// we can grow\shrink it in run time
// we create our own data type node using class
////// whole code of singlty slinked list //////
#include<iostream>
using namespace std;


// node creation
class node{
    public:
    int data;
    node* next;//address of next

    node(int data){
        this->data=data;
        this->next=NULL;
    }
    //distructore because we want to distruct memory 
    ~node(){
        // memory free 
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }

};


// insertation at head
void insertathead(node* &head,int data){
    node*temp=new node(data);//temperory node to store head
    temp->next=head;
    head=temp;
}

// insert at tail
void insertattail(node*&head,int data){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    node* nn=new node(data);
    temp->next=nn;
    
}


// insert at any position 
// eg put 22 on 2rd position
void insertposit(node*&head,int position,int data){
    if(position==1){
        insertathead(head,data);
        return;
    }

    node*temp=head;
    int cnt=1;
    // traverse lisklist
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    node*nodetoinsert=new node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

    


}

void delet(int position,node*&head){
    // 1st node
    if(position==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        // distory memory
        delete temp;

    }
    // deleting middle or last node

    else{
        node*current =head;
        node*previous=NULL;
        int cnt=1;
        while(cnt<position){
            previous=current;
            current=current->next;
            cnt++;
        }

        previous->next=current->next;
        current->next=NULL;
        delete current;

    }
    
}
// print function
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<"\n";
}

int main(){
    node* node1=new node(10);
    cout<<node1->data<<"\n";
    cout<<node1->next<<"\n";
    node* head=node1;
    print(head);

    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertposit(head,5,50);
    insertposit(head,3,60);
    print(head);
    //delete at 1st positon
    delet(1,head);
    print(head);
    // delete at any 
    delet(3,head);
    print(head);
    // delete at last postion 
    delet(4,head);
    print(head);


}