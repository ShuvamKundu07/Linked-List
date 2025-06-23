#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=NULL;
void push_front(int n){
    Node *newNode = new Node;
    newNode->data=n;
    newNode->next=head;
    head=newNode;
}

void anyposInsert(int val,int pos){
    if(pos<0){
        cout<<"Invalid Position ";
        return;
    }
    if(pos==0){
        push_front(val);
        return;
    }
    Node *temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp==NULL){
            cout<<"Invalid Position"<<endl;
            return;
        }
        temp=temp->next;
    }
    Node *newNode=new Node;
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->data=val;
}

void print(){
    cout<<"Linked lists: ";
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}


int main(){
    push_front(3);
    push_front(2);
    push_front(1);
    print();
    cout<<endl;
    anyposInsert(4,1);
    print();

    return 0;
}