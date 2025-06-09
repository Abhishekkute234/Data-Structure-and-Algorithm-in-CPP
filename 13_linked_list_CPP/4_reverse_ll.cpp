// practice 

// reverse a link list
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;


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

void insertathead(node* &head,int data){
    node*temp=new node(data);//temperory node to store head
    temp->next=head;
    head=temp;
}

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

node* rev(node*&head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node*pre=NULL;
    node*curr=head;
    node*forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=pre;
        pre=curr;
        curr=forward;
    }


    return pre;
    

}

int main(){
    node* node1=new node(40);
    
    node* head=node1;
    

    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);
    insertposit(head,5,50);
    insertposit(head,6,60);
    print(head);
    head=rev(head);
    
    print(head);
    
}
    

    
