// put the linked list in an array
//and check the palindrome 


#include<iostream>
#include<vector>
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

void insertattail(node*&head,int data){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    node* nn=new node(data);
    temp->next=nn;
    
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

bool check_palin(vector<int> arr){
    int n=arr.size();
    int s=0;
    int e=n-1;

    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }

    return 1;
            
}

bool is_palindrome(node*& head){
    vector<int> arr;
    node*temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return check_palin(arr);

}

int main(){
    node* node1=new node(10);
    cout<<node1->data<<"\n";
    cout<<node1->next<<"\n";
    node* head=node1;

    insertathead(head,20);
    insertathead(head,30);
    insertattail(head,20);
    insertattail(head,30);
    print(head);

    if(is_palindrome(head)){
        cout<<"is paindrom \n";
    }

    else{
        cout<<"not a palindrome \n";
    }
    


}