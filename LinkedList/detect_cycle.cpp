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
bool isCycle(Node * head){
Node * slow=head;
Node * fast=head;
while (fast!=nullptr&&fast->next!= NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast) return true;
}
return false;

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
display();
if(isCycle) cout<<"cycle found";
else cout<<"Not";
    return 0;
}