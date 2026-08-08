#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> st;
    stack<int> mn;

public:
    void push(int x) {
        st.push(x);

        if (mn.empty() || x <= mn.top())
            mn.push(x);
    }

    void pop() {
        if (st.empty()) {
            cout << "Stack is Empty\n";
            return;
        }

        if (st.top() == mn.top())
            mn.pop();

        st.pop();
    }

    int top() {
        if (st.empty())
            return -1;
        return st.top();
    }

    int getMin() {
        if (mn.empty())
            return -1;
        return mn.top();
    }

    bool empty() {
        return st.empty();
    }
};

int main() {

    MinStack s;

    int n;
    cin >> n;          // Number of elements

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }

    cout << "Top = " << s.top() << endl;
    cout << "Minimum = " << s.getMin() << endl;

    s.pop();

    if (!s.empty()) {
        cout << "After Pop\n";
        cout << "Top = " << s.top() << endl;
        cout << "Minimum = " << s.getMin() << endl;
    } else {
        cout << "Stack is Empty\n";
    }

    return 0;
}