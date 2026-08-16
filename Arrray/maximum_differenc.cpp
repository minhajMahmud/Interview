#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;

int arr[n];

for (int i = 0; i < n; i++)
    cin >> arr[i];
    int maxdif=INT_MIN;

for (int i = 0; i < n-1; i++){
    for(int j=i+1;j<n;j++){
 int diff=abs(arr[j]-arr[i]);
    if(diff>maxdif){
        maxdif=diff;
    }
    }
  
}
cout<<maxdif;
    

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < n; i++) {
        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }

    cout << maximum - minimum;

    return 0;
}
*/