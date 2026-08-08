#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
//maximum ber korce
    int maximum = arr[0];
    int minimum=arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum)
            maximum = arr[i];
    }
    
for (int i = 1; i < n; i++)
{
    if(arr[i]<minimum){
        minimum=arr[i];
    }
}
    cout << maximum;
cout<<minimum;
    return 0;
}