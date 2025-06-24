#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};
void push_back(Node *&head,int n){
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
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
Node *merge(Node *h1, Node *h2){
    if (h1 == NULL) return h2;
    if (h2 == NULL) return h1;

    if(h1->data <=h2->data){
        h1->next=merge(h1->next,h2);
        return h1;
    }
    else{
        h2->next=merge(h1,h2->next);
        return h2;
    }
}



int main(){
    Node *list1=NULL;
    Node *list2=NULL;

    push_back(list1,1);
    push_back(list1,3);
    push_back(list1,5);
    cout<<"List-1: ";
    print(list1);
    cout<<endl;

    push_back(list2,2);
    push_back(list2,3);
    push_back(list2,6);
    cout<<"List-2: ";
    print(list2);
    cout<<endl;

    Node *PrintMergeList=merge(list1,list2);
    cout<<"Merged Lists: ";
    print(PrintMergeList);
    cout<<endl;
    
    return 0;
}