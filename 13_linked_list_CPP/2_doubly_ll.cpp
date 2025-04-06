// doubly linked list
#include<iostream>
using namespace std;
//NODE CREATION
class node{
    public:
    int data;
    node*next;
    node*prev;

    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

    ~node(){
        // memory free 
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
            this->prev=NULL;
        }
    }

};

void insertathead(node*&head,int data){
    //for empty linklist
    if(head==NULL){
        node*temp=new node(data);
        head=temp;
    }

    else{
    node*temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

}

void insertattail(node*&head,int data){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    node*nn=new node(data);
    temp->next=nn;
    nn->prev=temp;


    
}

void insertatany(node*&head,int pos,int data){
    if(pos==1){
        insertathead(head,data);
        return;
    }

    node*temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }


    node*nn=new node(data);
    nn->next=temp->next;
    temp->next->prev=nn;
    temp->next=nn;
    nn->prev=temp;

    
}


//print function
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}

// function of lenght in linklist
int getlenght(node*&head){
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void delet(node*&head,int position){
    // 1st node
    if(position==1){
        node*temp=head;
        head=head->next;
        temp->next=NULL;
        temp->prev=NULL;
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
        current->prev=NULL;
        delete current;

    }
    
}


int main(){
    node*nn=new node(100);
    node*head=nn;

    print(head);
    cout<<"lenght is "<<getlenght(head)<<"\n";
    insertathead(head,200);
    insertathead(head,300);
    insertathead(head,400);
    print(head);
    cout<<"lenght is "<<getlenght(head)<<"\n";
    insertattail(head,500);
    print(head);
    insertatany(head,3,800);
    insertatany(head,4,900);
    print(head);
    delet(head,3);
    print(head);
    delet(head,1);
    print(head);
    delet(head,5);
    print(head);



}