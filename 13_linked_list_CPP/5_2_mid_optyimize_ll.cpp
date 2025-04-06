
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
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<"\n";
}

int len(node*&head){
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }

    return cnt;

}

node*mid(node*&head){
    if(head==NULL){
        return NULL;
    }

    else if(head->next==NULL){
        return head->next;
    }

    node* slow=head;
    node* fast=slow->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }

        slow =slow->next;


    }
    return slow;
       
    
    
}

int main(){
    node* node1=new node(40);
    
    node* head=node1;
    

    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);
    insertposit(head,5,50);
    insertposit(head,6,60);
    insertathead(head,0);

    
    print(head);
    
    cout<<"lenght of list is "<<len(head)<<endl;
    mid(head);
}
    

    
