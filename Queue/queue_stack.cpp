#include <iostream>
#include <stack>
using namespace std;

class Queue
{
    stack<int> s1, s2;

public:

    // Enqueue
    void push(int x)
    {
        s1.push(x);
    }

    // Dequeue
    void pop()
    {
        if(s1.empty() && s2.empty())
        {
            cout << "Queue is Empty\n";
            return;
        }

        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << "Deleted: " << s2.top() << endl;
        s2.pop();
    }

    // Front element
    int front()
    {
        if(s1.empty() && s2.empty())
            return -1;

        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};

int main()
{
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front = " << q.front() << endl;

    q.pop();

    cout << "Front = " << q.front() << endl;

    q.push(40);

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}