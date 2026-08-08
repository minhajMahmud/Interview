#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[20];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int total = 1 << n;

    for (int mask = 0; mask < total; mask++)
    {
        cout << "{ ";

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                cout << arr[i] << " ";
        }

        cout << "}" << endl;
    }

    return 0;
}