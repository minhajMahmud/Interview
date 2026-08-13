#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
    {
        cout << arr[0];
        return 0;
    }

    // First element
    if (arr[0] > arr[1])
    {
        cout << arr[0];
        return 0;
    }

    // Middle elements
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cout << arr[i];
            return 0;
        }
    }

    // Last element
    if (arr[n - 1] > arr[n - 2])
    {
        cout << arr[n - 1];
        return 0;
    }

    return 0;
}