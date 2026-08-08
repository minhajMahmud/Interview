#include <iostream>
#include <climits>
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

int ans = INT_MIN;

int solve(Node *root)
{
    if (root == NULL)
        return 0;

    // Maximum contribution from left subtree
    int left = max(0, solve(root->left));

    // Maximum contribution from right subtree
    int right = max(0, solve(root->right));

    // Path passing through current node
    ans = max(ans, left + right + root->data);

    // Return one side to parent
    return max(left, right) + root->data;
}

int maxPathSum(Node *root)
{
    ans = INT_MIN;
    solve(root);
    return ans;
}

int main()
{
    Node *root = new Node(-10);

    root->left = new Node(9);

    root->right = new Node(20);

    root->right->left = new Node(15);

    root->right->right = new Node(7);

    cout << "Maximum Path Sum = " << maxPathSum(root);

    return 0;
}