#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=NULL;
void push_back(int n){
    Node *newNode = new Node;
    newNode->data=n;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void pop_front(){
    if(head==NULL){
        return;
    }
    Node *temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
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
    push_back(1);
    push_back(2);
    push_back(3);
    print();
    cout<<endl;
    pop_front();
    print();

    return 0;
}