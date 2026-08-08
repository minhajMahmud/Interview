#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, tq;
    cout << "Enter number of processes: ";
    cin >> n;
    int burst[n], remaining[n];
    cout << "Enter burst time of each process:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": ";
        cin >> burst[i];
        remaining[i] = burst[i];
    }

    cout << "Enter Time Quantum: ";
    cin >> tq;

    queue<int> q;

    // Insert all process indices into the queue
    for (int i = 0; i < n; i++)
        q.push(i);

    cout << "\nExecution Order:\n";

    while (!q.empty())
    {
        int i = q.front();
        q.pop();

        if (remaining[i] > tq)
        {
            cout << "P" << i + 1 << " runs for " << tq << " ms\n";
            remaining[i] -= tq;

            // Not finished, push back into the queue
            q.push(i);
        }
        else
        {
            cout << "P" << i + 1 << " runs for " << remaining[i]
                 << " ms and finishes\n";
            remaining[i] = 0;
        }
    }

    return 0;
}