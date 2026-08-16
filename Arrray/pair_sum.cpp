#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    int target;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> target;

    bool found = false;

    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                cout << arr[i] << " " << arr[j] << endl;
                found = true;
            }
        }
    }

    if (!found)
        cout << "Not found";

    return 0;
}