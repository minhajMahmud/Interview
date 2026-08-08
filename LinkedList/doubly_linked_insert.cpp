#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev,*next;
};

Node *head=NULL;

void insertEnd(int value){

    Node* newNode=new Node();

    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=NULL;

    if(head==NULL){
        head=newNode;
        return;
    }

    Node* temp=head;

    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
}

void display(){

    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        insertEnd(x);
    }

    display();

}