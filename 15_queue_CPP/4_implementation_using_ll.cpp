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




// insert at tail
void enqueue(node*&head,int data){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    node* nn=new node(data);
    temp->next=nn;
    
}




void dequeue(node*&head){
   
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        // distory memory
        delete temp;

   

 
    
}

node* front(node*& head){
    return head;
}

 