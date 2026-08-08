#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        int num = 1;

        // Print Pascal numbers
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = num * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}