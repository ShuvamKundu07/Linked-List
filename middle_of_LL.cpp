#include<iostream>
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
void middle(){
    Node *slow = head;
    Node *fast = head;

    while(fast != NULL && fast->next != NULL){  // even case && odd case
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle of the linked list is: " << slow->data << endl;
}

void print(){
    cout<<"Linked lists: ";
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    push_back(1);
    push_back(2);
    push_back(3);
    push_back(4);
    push_back(5);
    push_back(6);
    push_back(7);


    print();
    middle();

    return 0;
}