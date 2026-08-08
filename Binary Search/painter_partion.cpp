#include <bits/stdc++.h>
using namespace std;

bool possible(int arr[], int n, int k, int limit) {
    int painter = 1;
    int sum = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] > limit)
            return false;

        if (sum + arr[i] <= limit)
            sum += arr[i];
        else {
            painter++;
            sum = arr[i];
            if (painter > k)
                return false;
        }
    }

    return true;
}

int main() {

    int n, k;
    cin >> n >> k;

    int arr[1000];

    int low = 0, high = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        high += arr[i];
        low = max(low, arr[i]);
    }

    int ans = high;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (possible(arr, n, k, mid)) {
            ans = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }

    cout << ans;
}