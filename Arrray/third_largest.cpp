#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maximum = INT_MIN;
    int secondLarge = INT_MIN;
    int thirdLarge = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            thirdLarge = secondLarge;
            secondLarge = maximum;
            maximum = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != maximum)
        {
            thirdLarge = secondLarge;
            secondLarge = arr[i];
        }
        else if (arr[i] > thirdLarge && arr[i] != maximum && arr[i] != secondLarge)
        {
            thirdLarge = arr[i];
        }
    }

    cout << thirdLarge;

    return 0;
}