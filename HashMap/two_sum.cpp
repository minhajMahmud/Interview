#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int target;
    cin >> target;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int need = target - arr[i];
        if (mp.count(need)) {
            cout << mp[need] << " " << i;
            return 0;      // Stop the program
        }

        mp[arr[i]] = i;
    }
    cout << "Not found";

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, target;
    cin >> n >> target;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int left = 0;
    int right = n - 1;

    while(left < right) {

        int sum = arr[left] + arr[right];

        if(sum == target) {
            cout << arr[left] << " " << arr[right];
            return 0;
        }
        else if(sum < target)
            left++;
        else
            right--;
    }

    cout << "No Solution";
}
*/