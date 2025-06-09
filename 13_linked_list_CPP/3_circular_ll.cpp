// singly circular linked list

// no head required just need a tail
// just use tail
//  THERE ARE LOTS OF CASES SUCH AS IF LIST IS EMPTY
//OR LIST CONTAIN ONLY ONE ELEMENT AND 2 OR MORE THAN TWO
// IN ALL CONDITION PRINT
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~node(){
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }

};

void insertnode(node*&tail,int element,int data){
    // element is present

    // EMPTY LISt
    if(tail==NULL){
        node*nn=new node(data);
        tail=nn;
        nn->next=nn;

    }

    // non empty
    else{
        node*current=tail;
        while(current->data!=element){
            current=current->next;
        }

        // element found 
        node*temp=new node(data);
        temp->next=current->next;
        current->next=temp;
    }

}

void print(node*&tail){
    node*temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<"\n";
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<"\n";
}

void delet(node*&tail,int value){
    //empty list
    if(tail==NULL)
    {
        cout<<"check once again"<<"\n";
        return;
    }

    else{
        //not empty
        node*previous=tail;
        node*curr=previous->next;

        while(curr->data!=value){
            previous=curr;
            curr=curr->next;
        }

        previous->next=curr->next;
        // one node
        if(curr==previous){
            tail=NULL;

        }
        //2 or greater than two
        if(tail==curr){
            tail=previous;
        }
        curr->next=NULL;
        delete curr;

    }

}

int main(){
    node*tail=NULL;
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,5);
    print(tail);
    insertnode(tail,5,7);
    print(tail);
    insertnode(tail,5,11);
    print(tail);
    insertnode(tail,11,13);
    print(tail);
    insertnode(tail,7,44);
    print(tail);
    delet(tail,5);
    print(tail);
    delet(tail,3);
    print(tail);
    delet(tail,3);
    print(tail);
}