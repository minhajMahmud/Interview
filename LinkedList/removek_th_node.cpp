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

Node* deleteK(Node* head, int k) {

    if (head == NULL)
        return NULL;

    if (k == 1)
        return NULL;

    Node* curr = head;
    Node* prev = NULL;

    int count = 1;

    while (curr != NULL) {

        if (count % k == 0) {

            prev->next = curr->next;

            Node* del = curr;
            curr = curr->next;

            delete del;
        }
        else {

            prev = curr;
            curr = curr->next;
        }

        count++;
    }

    return head;
}

void display(Node* head) {

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    int n;
    cin >> n;

    while (n--) {

        int x;
        cin >> x;

        insertEnd(x);
    }

    int k;
    cin >> k;

    head = deleteK(head, k);

    display(head);

    return 0;
}