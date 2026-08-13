#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int current = arr[0];
    int minSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        current = min(arr[i], current + arr[i]);

        if (current < minSum)
            minSum = current;
    }

    cout << "Minimum Sum = " << minSum;

    return 0;
}





