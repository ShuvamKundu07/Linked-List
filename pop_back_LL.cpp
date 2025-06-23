#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=NULL;
Node *tail=NULL;

void push_back(int n){
    Node *newNode = new Node;
    newNode->data=n;
    newNode->next=NULL;
    if(head==NULL){
        head=tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
void pop_back(){
    if(head==NULL){
        return;
    }
    Node *temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
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
    pop_back();
    print();

    return 0;
}