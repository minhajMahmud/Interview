#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n], ans[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;
            prod *= arr[j];
        }

        ans[i] = prod;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}  