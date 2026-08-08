#include <bits/stdc++.h>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node*right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* insert(Node * root,int val){
    if(root==NULL) return new Node(val);
    if(val<root->data){
        root->left=insert(root->left,val);
    }else if(val> root->data){
           root->right= insert(root->right,val);
        }
    return root;
}
int height(Node* root){
    if(root==NULL) return 0;
    int leftHeight=height(root->left);
    int rightheight=height(root->right);
    return max(leftHeight,rightheight)+1;
}
int main() {
    Node * root=NULL;
      int n;
    cin >> n;              // Number of nodes

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root = insert(root, x);
    }
        cout<<"height"<<height(root);

    return 0;
}