#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *head=NULL;
void Insert(int n){
    Node *newNode = new Node;
    newNode->data=n;
    newNode->next=head;
    head=newNode;
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
    Insert(1);
    Insert(2);
    Insert(3);
    print();

    return 0;
}