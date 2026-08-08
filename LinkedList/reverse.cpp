#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node * head=NULL;
void insertEnd(int val){
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return;

    }
    Node* temp=head;
while (temp->next!=NULL)
{
    temp=temp->next;
    temp->next=newNode;
}
}
void reverseList(){
    Node* prev=NULL;
    Node * curr=head;
    Node * nextNode;
    while (curr!=NULL)
    {
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    
}
void display(){
    Node * temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}



int main() {
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    insertEnd(x);

}
reverseList();
display();
    return 0;
}