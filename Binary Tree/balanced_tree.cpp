#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node *root, int val)
{
    if (root == NULL)
        return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}

int check(Node *root)
{
    if (root == NULL)
        return 0;

    int left = check(root->left);
    if (left == -1)
        return -1;

    int right = check(root->right);
    if (right == -1)
        return -1;

    if (abs(left - right) > 1)
        return -1;

    return max(left, right) + 1;
}

bool isBalanced(Node *root)
{
    return check(root) != -1;
}

int main()
{
    Node *root = NULL;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    if (isBalanced(root))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}