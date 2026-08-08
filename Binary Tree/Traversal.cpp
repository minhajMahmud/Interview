#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* insert(Node* root, int val) {
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}
void preorder(Node *root)
{
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node *root)
{
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* cur = q.front();
        q.pop();

        cout << cur->data << " ";

        if (cur->left)
            q.push(cur->left);

        if (cur->right)
            q.push(cur->right);
    }
}

int main()
{
    int n;
    cin >> n;              // Number of nodes
 Node* root = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    cout << "Preorder : ";
    preorder(root);

    cout << "\nInorder : ";
    inorder(root);

    cout << "\nPostorder : ";
    postorder(root);

    cout << "\nLevel Order : ";
    levelOrder(root);

    return 0;
}