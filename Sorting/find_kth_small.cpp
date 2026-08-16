#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    sort(arr, arr + n);

    cout << arr[k - 1];

    return 0;
}