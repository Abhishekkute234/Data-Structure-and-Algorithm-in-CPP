
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


void delet(int position,node*&head){
    // 1st node
    if(position==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        // distory memory
        delete temp;

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
        insertathead(head,40);

    
    delet(3,head);
    print(head);
 


}