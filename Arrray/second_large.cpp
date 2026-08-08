#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maximum = arr[0];
    int secondLarge=INT_MIN;
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum){
            secondLarge=maximum;
            maximum=arr[i];
        }
          else if(arr[i]>secondLarge&&arr[i]!=maximum){
            secondLarge=arr[i];
          }
            
    }
    cout << secondLarge;

    return 0;
}