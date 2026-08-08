#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* head = NULL;

void insertEnd(int val) {

    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

bool searchKey(Node* head, int key) {

    Node* temp = head;

    while (temp != NULL) {

        if (temp->data == key)
            return true;

        temp = temp->next;
    }

    return false;
}

int main() {

    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;
        insertEnd(x);
    }

    int key;
    cin >> key;

    if (searchKey(head, key))
        cout << "true";
    else
        cout << "false";

    return 0;
}