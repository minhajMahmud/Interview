#include <bits/stdc++.h>
using namespace std;

bool possible(int w[], int n, int days, int cap) {
    int need = 1;
    int load = 0;

    for (int i = 0; i < n; i++) {

        if (w[i] > cap)
            return false;

        if (load + w[i] <= cap)
            load += w[i];
        else {
            need++;
            load = w[i];
            if (need > days)
                return false;
        }
    }

    return true;
}

int main() {

    int n, days;
    cin >> n >> days;

    int w[1000];

    int low = 0;
    int high = 0;

    for (int i = 0; i < n; i++) {
        cin >> w[i];
        high += w[i];
        low = max(low, w[i]);
    }

    int ans = high;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (possible(w, n, days, mid)) {
            ans = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }

    cout << ans;
}