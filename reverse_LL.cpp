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
Node *reverse(Node *head){
    Node *prev=NULL;
    Node *curr=head;
    Node *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
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
    head= reverse(head);
    print();
    return 0;
}